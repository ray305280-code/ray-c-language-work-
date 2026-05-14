#include<stdio.h>

int main()
{
	int i;
	ray:
		if(i <= 10){
			printf("%d ", i);
			i++;
			goto ray;
		}
}