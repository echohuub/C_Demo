#include<stdio.h>
#include<string.h>

int main()
{
	char c[20];
	gets(c);
	
	int i = 0;
	int len = strlen(c);
	for (i = 0; i < len / 2; i++)
	{
		char tmp = c[i];
		c[i] = c[len - i -1];
		c[len -i -1] = tmp;
	}
	
	puts(c);
		
	return 0; 
}
