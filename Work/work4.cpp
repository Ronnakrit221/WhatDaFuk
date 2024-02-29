#include <stdio.h>
#include <conio.h>
int main(){
	int num,i;
	printf("Enter Multiply = ");
	scanf("%d",&num);
	while(i<=12){
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	}
	return 0;
}
	
