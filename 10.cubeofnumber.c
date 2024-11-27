#include<stdio.h>
#include<math.h>

int main() {
    float base, cube;

    printf("Enter a number: ");
    scanf("%f", &base);

    cube = pow(base, 3);

    printf("Cube of the number is: %f\n", cube);

    return 0;
}
