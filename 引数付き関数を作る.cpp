
#include <stdio.h>
#include <string>

void Show(std::string str)
{
	printf(str.c_str());
}

void main()
{
	Show("Hello World");

	getchar();
}