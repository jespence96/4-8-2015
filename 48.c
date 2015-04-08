#include <stdio.h>

int count(char *ptr);

int main(void)
{
	char userin[100];
	printf("Enter a string: ");
	gets(userin);

	printf("%s\n", userin);
	printf("%s\n", userin);

	printf("Number of words: %d\n", count(userin));
}
	
int count(char *ptr)
{
	int c = 1;
	int i = 0;
	
	while (ptr[i] != EOF)
	{
		if (ptr[i] == ' ')
			c++;
		i++;
	}
	return c;
}
	
