#include <stdio.h>

main() {
    float fahr, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;

    printf("fahr celsius\n");
    while(fahr <= upper) {
        celsius = (5 * (fahr - 32)) / 9;
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
