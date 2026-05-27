#include<stdio.h>

int main()
{
	float maths, science, english, total, percentage;
	
	printf("Enter marks for Maths:");
	scanf("%f", & maths);
	printf("Enter marks for science:");
	scanf("%f", & science);
	printf("Enter marks for english:");
	scanf("%f", & english);
	
	total = maths + science + english;
	percentage = (total / 300.0) * 100;
	
	printf("\n--- Result --- \n");
	printf("Total Marks: %.2f\n", total);
	printf("percentage: %.2f%%\n", percentage);
	
	if (percentage >= 35.0){
		printf("Grade: Pass\n");
		
	}else{
		printf("Grade : Fail\n");
		
		
	}
}