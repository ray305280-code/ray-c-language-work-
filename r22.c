#include<stdio.h>
	
int addition()
{
	int a, b;
	printf("Enter a and b :");
	scanf("%d%d", &a, &b);
	
	printf("Addition of a and b: %d", a+b);
}

int main()
{
	printf("Hello\n\n");
	
	addition();
	
	printf("\n\nWorld");
}