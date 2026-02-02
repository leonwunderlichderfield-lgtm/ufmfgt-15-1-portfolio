#include <stdio.h>

int main() {
    int numberEnter;
    int tens;
    int ones;

    printf("Enter a two digit number: ");
    scanf("%d", &numberEnter);

    tens = numberEnter / 10;
    ones = numberEnter % 10;

    printf("%d%d", ones, tens);

    return 0;
}
