#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int NMax;

unsigned long long int fatorial(int N){
   unsigned long long int fat = 1;
   int i = 1;
   while(i <= N){
      fat = fat * (unsigned long long int)i;
      if(fat > NMax)
         return NMax + 1;
      i++;
   }
   return fat;
}

int getQtd(int N){
   int result = 0;
   unsigned long long int fat;
   unsigned long long int soma = 0;
   int i = N;
   while(soma < N){
      fat = fatorial(i);
      if(soma + fat <= N) {
         soma += fat;
         result++;
      }else
         i--;
   }
   return result;
}

int main(int argc, char const *argv[]) {
   scanf("%d", &NMax);
   printf("%d\n", getQtd(NMax));
   return 0;
}