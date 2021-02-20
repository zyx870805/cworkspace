#include <stdio.h>

main() {
    float fahr, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = upper;

    while(fahr >= lower) {
        celsius = (fahr - 32) * (5.0 / 9.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - 20;
    }
}
