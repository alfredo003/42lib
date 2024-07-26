#include "../42lib.h"

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

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

unsigned char reverse_bits(unsigned char octet)
{
	int bit = 8;
	unsigned char res = 0;
	while(bit--)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (res);
}
