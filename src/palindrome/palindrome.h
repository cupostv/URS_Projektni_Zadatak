#ifndef PALINDROME_H
#define PALINDROME_H

#include <stdio.h>
#include <inttypes.h>
#include <errno.h>

typedef enum _ErrorCode
{
	NO_ERROR = 0,
	ERROR_NOT_INTEGER,
	ERROR_BASE,
	ERROR = -1
} ErrorCode;

ErrorCode palindrome (int32_t number, int8_t base);
uint8_t isPalindrome(int32_t number, int8_t base);

#endif