#include <stdio.h>

int main()
{
	int a, b, lcm;

	printf("Enter a fast number: ");
	scanf("%d", &a);
	printf("Enter a second number: ");
	scanf("%d", &b);

	if (a > b)
	{
		lcm = b;
		b = a;
		a = lcm;
	}

	int i = 1;
	while (1)
	{
		lcm = b * i;
		if (lcm % a == 0)
		{
			break;
		}
		i++;
	}

	printf("LCM = %d\n", lcm);
	printf("GCD = %d\n", (a * b) / lcm);

	return 0;
}

