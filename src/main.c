#include"nanbox.h"
#include<stdint.h>

#define VALUES_CAPACITY 256

double values[VALUES_CAPACITY];
size_t values_size = 0;


int main(void)
{
	double pi = 3.14159265359;

	assert(pi == as_double(box_double(pi)));
	assert(12345678LL == as_int(box_integer(12345678LL)));
	assert(&pi == as_pointer(box_integer(&pi)));

	printf("OK\N");

	return 0;
}