#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
	int a, b, lcm;
	printf("�п�J��ӼƦr�G");
	scanf_s("%d%d", &a, &b);


	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (1) 
	{
		if (lcm%a == 0 && lcm%b == 0) 
		{
			printf("�A��J����ӼƦr %d % d  �̤p������  %d ", a, b, lcm);
			break;
		}
		lcm++;
	}
	return 0;
}