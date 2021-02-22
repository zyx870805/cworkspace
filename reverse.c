#include <stdio.h>
#define MAXLINE 1000

int getline1(char line[], int maxline);
void reverse(char s[]);

main() {
  int len;
  char line[MAXLINE];
  while ((len = getline1(line, MAXLINE)) > 0) {
    printf("%d %s\n", len, line);
    reverse(line);
    printf("%s", line);
  }
}

void reverse(char s[]) {
  int i, j;
  char temp;

  i = 0;
  while (s[i] != '\0')
    ++i;
  --i;
  if (s[i] == '\n')
    --i;
  j = 0;
  printf("%d %d\n", j, i);
  while (j < i) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    --i;
    ++j;
  }
}

int getline1(char s[], int lim) {
  int c, i, j;
  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    if ( i < lim - 2) {
      s[j] = c;
      ++j;
    }
  if (c == '\n') {
    s[j] = c;
    ++j;
    ++i;
   }
   s[j]='\0';
   return i;
}
