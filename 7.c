#include<stdio.h>
int main(){
	float a,b,result; 
	printf("enter a number :");
	scanf("%f",&a);
	printf("enter another number :");
	scanf("%f",&b);
	result=a*b;
	printf("In float form multipication=%f\n",result);
	printf("In integer form multipication=%d",result);
    return 0;  
}
