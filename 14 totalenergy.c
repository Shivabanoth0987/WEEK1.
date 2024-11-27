#include <stdio.h>

int main() {
    float mass, height, velocity, gravity = 9.81; // Gravity constant
    float mechanicalEnergy;

    printf("Enter mass of the particle (in kg): ");
    scanf("%f", &mass);
    
    printf("Enter height (in meters): ");
    scanf("%f", &height);
    
    printf("Enter velocity (in m/s): ");
    scanf("%f", &velocity);
    
    mechanicalEnergy = (mass * gravity * height) + (0.5 * mass * velocity * velocity);
    
    printf("The mechanical energy of the particle is: %f J\n", mechanicalEnergy);
    
    return 0;
}
