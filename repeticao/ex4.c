/*Escreva um programa que leia um n´umero inteiro positivo n e em seguida imprima n linhas do
chamado Triangulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include <stdio.h>
int main(){
    int n, i, j, k=1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}