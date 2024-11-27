#include <stdio.h>
#include <math.h>

int main() {
    float number, result;

    printf("Enter a non-negative number: ");
    scanf("%f", &number);

    result = sqrt(number);
    printf("Square root of the number is %f\n", result);

    return 0;
}
