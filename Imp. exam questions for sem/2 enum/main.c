 #include <stdio.h>

// An example program to demonstrate working of enum in C

enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };

int main()
{
	enum week day;
	day = Wed;
	printf("%d", day);
	return 0;
}
