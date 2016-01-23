#ifndef PALINDROME_H
#define PALINDROME_H

#include <stdio.h>
#include <inttypes.h>
#include <errno.h>

typedef enum _ErrorCode
{
	NO_ERROR = 0,
	ERROR,
	ERROR_NOT_INTEGER,
	ERROR_NUMBER_SYSTEM
} ErrorCode;

ErrorCode palindrome (int32_t number, int8_t numberSystem);

#endif