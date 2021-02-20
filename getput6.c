#include <stdio.h>

main() {
    int c, blankCount, tCount, nCount;

    blankCount = tCount = nCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') 
            ++ nCount;
        if (c == '\t') 
            ++ tCount;
        if (c == ' ')
            ++ blankCount; 
    }

    printf("%d\n", blankCount);
    printf("%d\n", tCount);
    printf("%d\n", nCount);
}
