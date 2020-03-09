#ifndef __VECTOR_INL__
#define __VECTOR_INL__
#include "Vector.hpp"



template<typename T, size_t _Size>
constexpr typename Vector<T, _Size>::value_type Vector<T, _Size>::abs() noexcept
{
	typename Vector<T, _Size>::value_type sum{};
	for (auto n : m_Arr)
		sum += n * n;
	return static_cast<Vector<T, _Size>::value_type>(sqrt(sum));
}


template<typename T, size_t _Size>
template<size_t index>
inline const typename Vector<T, _Size>::value_type Vector<T, _Size>::get_value() const noexcept
{
	static_assert(_Size >= index + 1, "Range error");
	return m_Arr[index];
}


template<typename T, size_t _Size>
template<typename T2>
constexpr void Vector<T, _Size>::operator+=(const Vector<T2, _Size>& other_vec) noexcept
{
	for (size_t i = 0; i < _Size; i++)
		this->m_Arr[i] += static_cast<T>(other_vec.m_Arr[i]);
}


template<typename T, size_t _Size>
template<typename T2>
constexpr void Vector<T, _Size>::operator+=(const T2 numb) noexcept
{
	for (size_t i = 0; i < _Size; i++)
		this->m_Arr[i] += static_cast<T>(numb);
}


template<typename T, size_t _Size>
template<typename T2>
constexpr void Vector<T, _Size>::operator-=(const Vector<T2, _Size>& other_vec) noexcept
{
	for (size_t i = 0; i < _Size; i++)
		this->m_Arr[i] -= static_cast<T>(other_vec.m_Arr[i]);
}


template<typename T, size_t _Size>
template<typename T2>
constexpr void Vector<T, _Size>::operator-=(const T2 numb) noexcept
{
	for (size_t i = 0; i < _Size; i++)
		this->m_Arr[i] -= static_cast<T>(numb);
}


template<typename T, size_t _Size>
template<typename T2>
constexpr void Vector<T, _Size>::operator*=(const T2 numb) noexcept
{
	for (size_t i = 0; i < _Size; i++)
		this->m_Arr[i] *= static_cast<T>(numb);
}


template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type x(const Vector<T, _Size>& vec)
{

	return vec.get_value<0>();
}

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type y(const Vector<T, _Size>& vec)
{
	return vec.get_value<1>();
}

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type z(const Vector<T, _Size>& vec)
{
	return vec.get_value<2>();
}

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type w(const Vector<T, _Size>& vec)
{
	return vec.get_value<3>();
}


#endif // !__VECTOR_INL__
