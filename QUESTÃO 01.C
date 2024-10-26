#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    
    return n + somaRecursiva(n - 1);
}



int main()
{
    
    int numero; 
    
    for (int i = 1; i <= 5; i++) {
        numero = i;
    
    printf("A soma de 1 até %d é: %d\n", numero, somaRecursiva(numero));
}
    return 0;
}
