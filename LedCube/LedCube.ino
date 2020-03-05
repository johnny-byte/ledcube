/*
 Name:		LedCube.ino
 Created:	04.03.2020 18:04:24
 Author:	Lex
*/

// the setup function runs once when you press reset or power the board


#include "Buffer.h"
#include "RanderAPI.h"


Pin data_pin = 16;
Pin clock_pin = 4;
Pin latch_pin = 5;


void setup() {
  pinMode(data_pin,OUTPUT);
  
  pinMode(clock_pin,OUTPUT);
  pinMode(latch_pin,OUTPUT);
	int n = 100;
	Serial.begin(9600);
	for (size_t i = 0; i < n; i++)
	{
		Serial.println(i);
	}

	int number = 0b10101010;
	digitalWrite(latch_pin, LOW);
	// �������� ������ ��� ������ �� ������� ����������
	shiftOut(data_pin, clock_pin, MSBFIRST, number);

	digitalWrite(latch_pin, HIGH);


	

}

// the loop function runs over and over again until power down or reset
void loop() {
TestClass t=TestClass();
t.f();
Serial.println("123");
int number = 0b10101010;
  digitalWrite(latch_pin, LOW);
  // �������� ������ ��� ������ �� ������� ����������
  shiftOut(data_pin, clock_pin, MSBFIRST, number);

  digitalWrite(latch_pin, HIGH);
	
}
