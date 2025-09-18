#include <stdio.h>

int main() {
    char name[50], section[20];
    int x, y;
    printf("Name: "); scanf("%[^\n]%*c", name);
    printf("Section: "); scanf("%[^\n]%*c", section);
    printf("First number: "); scanf("%d", &x);
    printf("Second number: "); scanf("%d", &y);

    printf("\n%s (%s)\n", name, section);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %.2f\n", x, y, (float)x / y);
    return 0;
}