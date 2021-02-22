#include <stdio.h>

#define MAXLINE 1000
#define LONGLINE 80


int getline1(char line[], int lim);

main() {
    int len;
    char line[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s", line);

    return 0;
}

int getline1(char s[], int lim) {
    int i, j, c;
    for ( i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if ( i < lim - 2) {
            s[j] = c;
            ++j;
        }
    if ( c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
