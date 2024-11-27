#include<stdio.h>

int main() {
    int Length_km, Length_m, Length_cm, Length_mm;
    
    printf("Give length (or) distance in kilometers: ");
    scanf("%d", &Length_km);
    
   
    Length_m = Length_km * 1000;
    Length_cm = Length_m * 100;
    Length_mm = Length_cm * 10;
    
    
    printf("Length (or) distance in meters = %d m\n", Length_m);
    printf("Length (or) distance in centimeters = %d cm\n", Length_cm);
    printf("Length (or) distance in millimeters = %d mm\n", Length_mm);
    
    return 0;
}
