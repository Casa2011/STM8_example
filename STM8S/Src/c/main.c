#include "main.h"


volatile uint16_t test;

volatile uint8_t test8;


void main(void)
{



	while(1)
	{

		PA_CR1 = func_3();
		func2(test8);
		func1(func_3());
	}



}

