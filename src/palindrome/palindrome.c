#include "palindrome.h"

#define CHECK_ARGS(x, y) 										\
	if ((x) < 1) return ERROR_NOT_INTEGER;						\
	if ((y) != 8 && (y) != 10 && (y) != 16) return ERROR_BASE; 	\

uint8_t isPalindrome(int32_t number, int8_t base)
{
	uint32_t startNumber = number;
	uint32_t reversed = 0;
	uint8_t digit;

	while (number > 0)
	{
		digit = number % base;
		reversed = reversed * base + digit;
		number /= base;
	}
	return startNumber == reversed;
}

ErrorCode palindrome (int32_t number, int8_t base)
{
	CHECK_ARGS(number, base);

	int32_t numberToBeChecked;

	printf ("\nDecimalni brojevi koji u %s sistemu čine palindrom, a manji su od broja %"SCNd32" su:\n", ((base == 8) ? "oktalnom" : ((base == 10) ? "decimalnom" : "heksadecimalnom")), number);

	for (numberToBeChecked = 1; numberToBeChecked < number; numberToBeChecked++)
	{
		if (isPalindrome(numberToBeChecked, base))
		{
			printf("%d\n", numberToBeChecked);
		}

	}

	return NO_ERROR;
}
