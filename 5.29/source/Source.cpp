#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
	int a, b, lcm;
	printf("叫块ㄢ计");
	scanf_s("%d%d", &a, &b);


	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (1) 
	{
		if (lcm%a == 0 && lcm%b == 0) 
		{
			printf("块ㄢ计 %d % d  程そ计  %d ", a, b, lcm);
			break;
		}
		lcm++;
	}
	return 0;
}