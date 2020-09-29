#include <stdio.h>

int main() {
    printf("Statement 1");
    printf("Statement 2\n");
    //Appear in same line

    char inBounds = 63;
    printf("%c\n", inBounds);
    //Prints ?

    char outOfBoundsRight = 150;
    printf("%c\n", outOfBoundsRight);
    //Also prints ?

    char outOfBoundsLeft = -130;
    printf("%c\n", outOfBoundsLeft);
    //Prints ~

    unsigned short x = 32770;
    //Prints 32770

    signed short y = 32770;
    //Prints -32766

    printf("%d\n%d\n", x, y);

    float t = -3.2;
    printf("%f\n",t);
    //-3.200000

    unsigned char q = 90;
    printf("%c", q);
    //Z

}
