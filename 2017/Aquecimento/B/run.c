#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    int J,R, maiorVal, ganhador, aux;
    scanf("%d %d", &J, &R); // n de jogadores, n de rodadas
    int result[500];
    
    for(int i = 0; i < 500; i++)// essencial
        result[i] = 0;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < J; j++){
            scanf("%d", &aux);
            result[j] += aux;
        }
    }
    ganhador = 1;
    maiorVal = result[0];
    for(int i = 0; i < J; i++){
        if(result[i] >= maiorVal){
            ganhador = i;
            maiorVal = result[i];
        }         
    }
    printf("%d\n", ganhador + 1);
    return 0;
}
