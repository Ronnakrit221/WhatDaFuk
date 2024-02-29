#include <stdio.h>
#include <conio.h>
int main(){
	int number;
	printf("Enter integer : ");
	scanf("%d",&number);
	if(number % 2 == 0){
		printf("Even number");
	}else{
		
		printf("Odd number");
	}
	return 0;
}

