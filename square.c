#include <stdio.h>
int main() {
    int width, height, space;
    printf("Enter width: ");
    scanf("%d", &width); //10
    printf("Enter height: ");
    scanf("%d", &height); //5
    space = width * height;
    printf("space = %d",space);
    return 0;
}