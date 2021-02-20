#include <stdio.h>

main() {
    int c;
    printf("\7");
    putchar(EOF);
    //putchar(getchar() != EOF);
    int a = getchar() != EOF;
    putchar(a);
    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}
