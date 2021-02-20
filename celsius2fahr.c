#include <stdio.h>

main() {
    float fahr, celsius;
    int lower = 0;
    int uppper = 100;
    int step = 10;

    celsius = lower;

    while(celsius <= 100) {
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f %3.0f\n", celsius, fahr);
        celsius =  celsius + 10;
    }
}
