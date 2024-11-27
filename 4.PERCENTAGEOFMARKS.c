#include<stdio.h>
int main(){
	int A,B,C,D,E,F;
	//ALL SUBJECT MAXIMIUM MARKS IS 100
	printf(" LET THE A,B,C,D,E ARE SUBJECTS\n");
	printf("enter marks in subjects\n");
    scanf("%d,%d,%d,%d,%d",&A,&B,&C,&D,&E);
    F=A+B+C+D+E;
    printf("percentage of student is:",(F)/(5));
    return 0;  
}
