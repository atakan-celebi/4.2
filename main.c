#include <stdio.h>

int main(void) {
    int a;
    a = 1;
    while (a < 25) {
        printf("%d \n", a*a);
        a = a + 1;
    }
}
