#include <stdio.h>
#include <conio.h>
int main(){
	char ch;
	float number1,number2;
	printf("Please Select '+ - * /'\n");
	ch = getchar();
	printf("Enter Number 1 : ");
	scanf("%f",&number1);
	printf("Enter Number 2 : ");
	scanf("%f",&number2);
	switch(ch){
		case '+':printf("%.2f + %.2f = %.2f\n",number1,number2,number1+number2);break;
		case '-':printf("%.2f - %.2f = %.2f\n",number1,number2,number1-number2);break;
		case '*':printf("%.2f * %.2f = %.2f\n",number1,number2,number1*number2);break;
		case '/':printf("%.2f / %.2f = %.2f\n",number1,number2,number1/number2);break;
	}
	return 0;
}
	
