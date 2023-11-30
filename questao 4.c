#include <stdio.h>

int main (){
//Escreva uma funçãoao que receba dois núumeros positivos por parâmetro e retorne a soma dos N numeros
//inteiros existentes entre eles.
int a, b,soma,ab;

printf("insira o primeiro valor \n");
scanf("%d", &a);

printf("agora, insira o segundo valor \n");
scanf("%d", &b);
//pede os valores que iremos utilizar

int i;
for(i = b; i > a; i--){
 ab++;
};

soma = (((a + 1) + (b - 1)) * (ab- 2) )/2; 
// para realizar a operação, utiliza-se a fórmula para calcular os elementos de uma PA

    printf("%d", soma);
    return 0;


}