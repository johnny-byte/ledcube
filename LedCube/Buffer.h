// Buffer.h

#ifndef __BUFFER_h__
#define __BUFFER_h__

#include "Init.h"
#include <array>


//Буффер в который будет происходить отрисовка
class Buffer
{
private:
	using array_type = std::array<std::array<byte, 8>, 8>;
	array_type arr;

public:

	Buffer();
};

#endif // !__BUFFER_h__

