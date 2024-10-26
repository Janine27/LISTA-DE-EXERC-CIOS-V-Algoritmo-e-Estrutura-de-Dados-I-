#include <stdio.h>

int maiorDeTres(int a, int b, int c) {
    int maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    return maior;
}

int main()
{
    
    int num1, num2, num3; 
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    int resultado = maiorDeTres(num1, num2, num3);
    printf("O maior número entre os três: %d\n", resultado);

    return 0;
}
