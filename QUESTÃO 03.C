#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
        
    } else if (n == 1) {
       return 1; 
       
       } else {
           return fibonacci(n - 1) + fibonacci(n - 2);
       }
        
    }


int main()
{
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    int resultado = fibonacci(n);
    
    printf("O %d° termo da sequência de fibonacci é: %d\n", n, resultado);

    return 0;
}
