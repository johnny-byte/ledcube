#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__



template<typename T, size_t _Size>
class Vector
{
public:
	using value_type = T;
public:

	constexpr value_type abs() noexcept;

	template<typename T2>
	constexpr void operator+=(const Vector<T2, _Size>& other_vec) noexcept;

	template<typename T2>
	constexpr void operator+=(const T2 numb) noexcept;

	template<typename T2>
	constexpr void operator-=(const Vector<T2, _Size>& other_vec) noexcept;

	template<typename T2>
	constexpr void operator-=(const T2 numb) noexcept;

	template<typename T2>
	constexpr void operator*=(const T2 numb) noexcept;

	template<size_t index>
	const value_type get_value() const noexcept;

public:
	value_type m_Arr[_Size];
};



template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type x(const Vector<T, _Size>& vec);

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type y(const Vector<T, _Size>& vec);

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type z(const Vector<T, _Size>& vec);

template<typename T, size_t _Size>
inline constexpr typename Vector<T, _Size>::value_type w(const Vector<T, _Size>& vec);

#include "Vector.inl"
#endif // !__VECTOR_HPP__

