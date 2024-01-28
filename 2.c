#include <stdio.h>

#define ISODD(x) ((x) & 1)
#define ISEVEN(x) (!ISODD(x))

int
main(void)
{
	unsigned long sum = 0;

	for (unsigned long tmp = 1, num = 2; num < 4000000;) {
		if (ISEVEN(num))
			sum += num;

		num += tmp;
		tmp = num - tmp;
	}

	printf("sum = %lu\n", sum);
}
