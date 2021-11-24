#include <stdio.h>
#include <stdlib.h>

int main() {
    float *idade;
    int pessoa, menor=0, maior=0;

    printf("\nQuantidade de pessoa: ");
    scanf("%d", &pessoa);

    idade = (float *)malloc(pessoa*sizeof(float));

    for (int i = 0; i < pessoa; i++) {
        printf("\nIdade da %d pessoa: ", i+1);
        scanf("%f", &idade[i]);
    }

    for (int i = 0; i < pessoa; i++) {
    	if(idade[i]<18){
    		menor=menor+1;
		}else{
			maior=maior+1;
		}
    }
    
	printf("\nNumero de pessoas menor de idade: %d\n", menor);
	printf("Numero de pessoas maior de idade: %d\n", maior);

    free(idade);
    return 0;
}
