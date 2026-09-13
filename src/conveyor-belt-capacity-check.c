#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    scanf("%d", &motorCount);
    scanf("%d", &totalPackageWeight);
        
    if (motorCount*MOTOR_CAPACITY < totalPackageWeight) {
        printf("No. The conveyor belt cannot carry the packages.\n");
    } else {
        printf("Yes! The conveyor belt can carry the packages.\n");
    }

}
