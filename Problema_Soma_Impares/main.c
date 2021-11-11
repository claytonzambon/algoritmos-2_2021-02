#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if (x > y){
        int troca;
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    int i;
    for (i = x+1; i < y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}
