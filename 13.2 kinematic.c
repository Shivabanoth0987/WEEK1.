#include<stdio.h>

int main() {
    float s, u, a, t;

    printf("Enter initial velocity (m/s): ");
    scanf("%f", &u);

    printf("Enter acceleration (m/s^2): ");
    scanf("%f", &a);

    printf("Enter time (seconds): ");
    scanf("%f", &t);

    s = (u * t) + (0.5 * a * t * t);

    printf("Displacement after time 't' is: %f meters\n", s);

    return 0;
}
