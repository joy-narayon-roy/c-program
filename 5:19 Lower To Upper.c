#include <stdio.h>
int main()
{
	char low;
	printf("Enter any Lower Cases Later : ");
	scanf("%c", &low);
	printf("Upper Case Later : %c ", low - 32);
}