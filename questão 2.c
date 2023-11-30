#include <stdio.h>

 // 2 - O que faz o seguinte programa? E qual sua saida?

int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}
//resposta: o programa está realizando a multiplicação, soma e subtação entre as linhas e colunas da matriz. 
//cálculo: (0*1*1) + (1*(-1)*4) + (0*3*4) - (1*1*1) - (0*(-1)*4) - (0*1*4) = -5
