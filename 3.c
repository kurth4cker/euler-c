#include <stdio.h>

static unsigned long long
isprime(unsigned long long num)
{
	if (num < 2)
		return 0;

	for (unsigned long long i = 2; i * i <= num; i++)
		if (num % i == 0)
			return 0;

	return 1;
}

int
main(void)
{
	const unsigned long long num = 600851475143;

	for (unsigned long long i = num; i; i--)
		if (num % i == 0 && isprime(i))
			printf("%llu\n", i);
}
