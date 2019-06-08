
#include "c_file1.h"

uint16_t func_3(void)
{
	uint8_t a;
	uint8_t b;
	uint16_t c;
	GPIOA_DDR = 0x80;
	GPIOA_CR1 |= 0x80;
	GPIOA_CR2_bset(#7);

	GPIOA_ODR_bcpl(#7);

	a = GPIOA_IDR;
	b = *(unsigned char*)0x805f;
	a ^=b;
	c=(a<<8);
	c=b;

return c;
}
