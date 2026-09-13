#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    scanf("%d", &totalPackageWeight);
    scanf("%d", &motorCount);
    
    if (motorCount*MOTOR_CAPACITY < totalPackageWeight) {
        printf("Yes! The conveyor belt cannot carry the packages.\n");
    } else {
        printf("No. The conveyor belt can carry the packages.\n");
    }

}
