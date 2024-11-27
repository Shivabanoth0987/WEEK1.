#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a number:\n");
    scanf("%d",&a);
    printf("enter another number:\n");
    scanf("%d",&b);
    printf("arithematic operations between given first and second numbers are \n");
    printf("addition:%d,substraction:%d,multipication:%d,division:%d,modulo:%d",a+b,a-b,a*b,a/b,a%b);
    return 0;  
}
