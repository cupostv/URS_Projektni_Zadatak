#include "palindrome.h"

#define CHECK_ARGS(x, y) \
	if ((x) < 1) return ERROR_NOT_INTEGER;\
	if ((y) != 8 && (y) != 10 && (y) != 16) return ERROR_NUMBER_SYSTEM; \
 \

ErrorCode palindrome (int32_t number, int8_t numberSystem)
{
	CHECK_ARGS(number, numberSystem);

	return ERROR;
}