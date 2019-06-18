#include<stdio.h> 
#include<string.h> 
#include<iostream>

class Mystring


 
int main(void) 
{
	char aaa[] = "abcde";
	char bbb[] = "abcde";
	if (strcmp(aaa,bbb) == 0)
	{
		std::cout << "these strings are same." << std::endl;;
	}
	else if (strcmp(aaa,bbb)<0)
	{
		std::cout << "these strings are NOT same." << std::endl;
	}
	
}