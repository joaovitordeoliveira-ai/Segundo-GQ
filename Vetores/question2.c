// 2. Ler um vetor de números reais com 10 posições e calcular o quadrado de cada elemento, armazenando o resultado em outro vetor 
// de mesmo tamanho. Ao final, imprimir os dois vetores.
#include<stdio.h>
#include<math.h>
int main(){
    float A[10], B[10], resultado = 0;
    for(int i = 0; i < 10; i++){
        scanf("%f", &A[i]);
        resultado = pow(A[i], 2.0);
        B[i] = resultado;
    }
    for(int i = 0; i < 10; i++){
        printf("%.2f e seu quadrado eh %.2f \n", A[i], B[i]);
    }
    return(0);
}