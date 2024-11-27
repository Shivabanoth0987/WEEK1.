#include<stdio.h>
#define pi 3.14
#define a(E) E*E
int main(){
	float radius,area;

	printf("enter a radius of circle :\n");
    scanf("%f",&radius);
    	area=a(radius);
    printf("area of circle : %f",pi*area);
    return 0;  
}
