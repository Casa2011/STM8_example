
#include "c_file1.h"

uint16_t func_3(void)
{
	uint8_t a;
	uint8_t b;
	uint16_t c;
	PA_DDR = 0x80;
	PA_CR1 |= 0x80;
	pa_cr2_bset(#7);

	pa_odr_bcpl(#7);

	a = PA_IDR;
	b = *(unsigned char*)0x805f;
	a ^=b;
	c=(a<<8);
	c=b;

return c;
}
