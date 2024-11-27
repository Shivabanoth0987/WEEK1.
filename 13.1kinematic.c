#include<stdio.h>

int main() {
    float v, u, a, t;

    printf("Enter initial velocity (m/s): ");
    scanf("%f", &u);

    printf("Enter acceleration (m/s^2): ");
    scanf("%f", &a);

    printf("Enter time (seconds): ");
    scanf("%f", &t);

    v = u + (a * t);

    printf("Final velocity after time 't' is: %f m/s\n", v);

    return 0;
}
