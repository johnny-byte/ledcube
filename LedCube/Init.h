#ifndef __INIT_H__
#define __INIT_H__




#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif


typedef const int Pin;


#endif // !__INIT_H__
