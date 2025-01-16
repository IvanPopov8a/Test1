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
        printf("This is not a PORTOKAL: %c ", a);
        return 0;
    }

    printf("The letter is: %c\n", a);
    printf("Towa sa falshiwi morkowi");
    return 0;
}
