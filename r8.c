#include<stdio.h>
// find out maximum number of given three variable
int main()
{
	int a = 32, b = 22, c = 303;
	
	if(a > b){
		if(a > c){
			printf("A is Max");
		}else{
			printf("C is Max");
		}
	}else{
		if(b > c){
			printf("B is Max");
		}else{
			printf("C is Max");
		}
	}
}