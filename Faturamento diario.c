#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int dias=0;
    int media=0, menor=0, maior=0, soma=0, i;
    int fatD[] = {22174, 24537, 26139, 0, 0, 26742, 0, 42889, 
    46251, 11191, 0, 0, 3847, 373, 2659, 48924, 18419, 0, 0, 35240, 
    43829, 18235, 4355, 13327, 0, 0, 25681, 1718, 13220, 8414};

    for (i = 1; i<=30; i++){
        if (fatD[i] < menor){
            menor = fatD[i];
        }
    }
    printf("Menor faturamento : %d \n",menor);
    
    for (i = 1; i<=30; i++){
        if (fatD[i] > maior){
            maior = fatD[i];
        }
    }
    printf("Maior faturamento : %d \n",maior);
    
    for(i = 0; i<=30; i++){
    soma = soma + fatD[i];
    }
    media = soma/21;
    printf("Media faturamento : %d \n",media);

    for (i = 1; i<=30; i++){
        if (fatD[i] > media){
            dias++;
        }
    }
    printf("Dias com faturamento acima da media : %d \n",dias);

}