#include<stdio.h>

int product()
{
	int a, b;
	printf("\nEnter a and b:");
	scanf("%d%d", &a, &b);
	int total = a * b;
	return total;
}

int main()
{
	printf("Hello\n\n");
	
	int ans = product();
	printf("\nproduct of a and b is: %d", ans);
	printf("\n\nWorld");
}