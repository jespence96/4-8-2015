#include <stdio.h>
#include <string.h>
int count(char *ptr);
int charcount(char *ptr, int size);

int main(void)
{
	char userin[100];
	int n;
	printf("Enter a string: ");
	gets(userin);

	printf("%s\n", userin);
	printf("%s\n", userin);

	printf("Number of words: %d\n", count(userin));
	printf("How many characters to display: ");
	
	scanf("%d", &n);
	while (n > strlen(userin))
	{
		printf("String to short for this number! Enter new number: ");
		scanf("%d", &n);
	}
	charcount(userin, n);

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

int charcount(char *ptr, int size)
{
	for (int i = 0; i < size; i++)
		putchar(ptr[i]);
}	
