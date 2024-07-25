#include "42lib.h"

void print_bits(unsigned char octet)
{
	int bit = 8;
	unsigned char res;
	while(bit--)
	{
		res = (octet >> bit & 1) + '0';
		write(1,&res,1);
	}
}	
