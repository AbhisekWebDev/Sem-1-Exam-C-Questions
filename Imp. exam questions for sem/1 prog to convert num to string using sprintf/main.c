#include <stdio.h>
#include <string.h>

// C program to convert number to string using sprintf()

int main()
{
	char res[20];
	float a = 32.23;
	sprintf(res, "%f", a);
	printf("The string for the num is %s", res);
	return 0;
}
