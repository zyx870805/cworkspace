#include <stdio.h>

main() {
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (fahr = lower; fahr <= upper; fahr = fahr + step) {
        printf("%3d %3d\n", fahr, fahr2celsius(fahr));
    }
    return 0;
}

int fahr2celsius(int fahr);

int fahr2celsius(int fahr) {
    return (fahr - 32) * 5 / 9;
}
