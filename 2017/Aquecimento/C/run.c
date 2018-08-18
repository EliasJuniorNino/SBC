#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    int C, A, cont = 0;
    scanf("%d %d", &C, &A);
    while(A > 0){
        A -= (C - 1);
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
