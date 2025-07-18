#include <stdio.h>
int main() {
    char nameInitial = 'S';
    int age = 18;
    float weight = 65;
    char gender[] = "Female";
    printf("= %c nameInitial\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);
    return 0;
}