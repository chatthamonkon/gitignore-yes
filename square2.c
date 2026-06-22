#include <stdio.h>
int main() {
    float width, height, space;
    printf("Enter width: ");
    scanf("%f", &width); //17.2
    printf("Enter height: ");
    scanf("%f", &height); //8.9
    space = width * height;
    printf("space = %.2f",space);
    return 0;
}