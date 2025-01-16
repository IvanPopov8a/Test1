#include <stdio.h>

int main()
{
    char a;

    printf("Enter a letter: ");
    scanf(" %c", &a);

    if (a >= 'a' && a <= 'z') {
        a = a - ('a' - 'A');
    } else if (a >= 'A' && a <= 'Z') {
        a = a + ('a' - 'A');
    }else {
        printf("This is not a letter: %c ", a);
        return 0;
    }

    printf("The letter is: %c\n", a);
    printf("Towa sa falshiwi chushki");
    return 0;
}
