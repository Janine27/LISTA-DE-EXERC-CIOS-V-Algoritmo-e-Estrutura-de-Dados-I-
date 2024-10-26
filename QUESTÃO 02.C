#include <stdio.h>
#include <stdlib.h>
int* gerarPA(int quantidade, int valor_inicial, int razao) {
    int* pa = (int*)malloc(quantidade * sizeof(int));
    if (pa == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    
    for (int i = 0; i < quantidade; i++) {
        pa[i] = valor_inicial + i * razao;
    }
    
    return pa;
}

void imprimirArray(int* array, int quantidade) {
    printf("Os elementos da PA são:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d " , array[i]);
    }
    
    printf("\n");
}

int main()
{
    
    int quantidade, valor_inicial, razao;
    
    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &quantidade);
    printf("Digite o valor inicial: ");
    scanf("%d", &valor_inicial);
    printf("Digite a razão: ");
    scanf("%d", &razao);
    
    
    int* pa = gerarPA(quantidade, valor_inicial, razao);
    
    imprimirArray(pa, quantidade);
    
    free(pa);

    return 0;
}
