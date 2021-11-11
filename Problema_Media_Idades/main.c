#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int npessoas = 0;
    double soma = 0;
    double media = 0;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
        while (idade >= 0){
            soma = soma + idade;
            npessoas++;
            scanf("%d", &idade);
        }
        media  = soma / npessoas;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
