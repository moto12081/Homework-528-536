#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{

	char str[100];

	printf("��J�^���r=");

	cin.get(str, 100);



	for (int i = 0; str[i] != '\0'; i++)
	{

		if (islower(str[i]))
		{
			str[i] = char(toupper(str[i]));
		}
		else
		{
			str[i] = char(tolower(str[i]));
		}
	}
	printf("�令�j�g=%s", str);
}