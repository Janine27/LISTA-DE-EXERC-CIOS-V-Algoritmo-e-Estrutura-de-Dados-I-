#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int valor) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (arr[meio] == valor) {
            return meio;
        }
        
        if (arr[meio] > valor) {
            return buscaBinaria(arr, esquerda, meio - 1, valor);
        }
        
        return buscaBinaria(arr, meio + 1, direita, valor);
    }
    
    return -1;
}

int main()
{
    
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int valor;
    
    
    printf("Digite um valor para buscar: ");
    scanf("%d", &valor);
    
    int resultado = buscaBinaria(arr, 0, n - 1, valor);
    
    if (resultado != -1) {
        printf("Valor %d encontrado no índice: %d\n", valor, resultado);
        
    } else {
        
        printf("Valor %d não encontrado no array.\n", valor);
    }

    return 0;
}
