#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
	int a, b, lcm;
	printf("請輸入兩個數字：");
	scanf_s("%d%d", &a, &b);


	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (1) 
	{
		if (lcm%a == 0 && lcm%b == 0) 
		{
			printf("你輸入的兩個數字 %d % d  最小公倍數  %d ", a, b, lcm);
			break;
		}
		lcm++;
	}
	return 0;
}