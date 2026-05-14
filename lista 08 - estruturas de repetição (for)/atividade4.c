/*4) Faça um programa para calcular o valor de A, onde:
𝐴 =
1/1 +
3/2 +
5/3 +
7/4 +
...
49/25

Obs.: Para conferência, o resultado de A deve ser igual a 46,184032*/
#include <stdio.h>

int main() {

    float op1, op2 = 0; //inicializando como 0 para somar dps

    /*op1 = x/y;
    op2 = op1 + op1;*/
    
    for (int x = 1, y = 1; x <= 49; x = x + 2, y++) { 
    /*x comeca com 1 e y tbm, para somar o 1/1, enquanto o x for menor que 49
    o x cresce x + 2, e o y + 1, nesse caso nao é preciso colocar a condição do y
    pois apenas com a do x já da certo, ja que vao chegar no resultado esperado 
    ao mesmo tempo*/
      
        op1 = (float ) x/y; //usando cast para não dar problema
        op2 = op2 + op1; //op2 era 0 e agora guarda a op1 + o valor anterior de op2
    

        printf ("%d/%d + ", x, y); //so nao soube tirar o ultimo mais depois do 49/25, tentei usar while mas deu loop, acho que sou burro

    }

    printf ("\nA = %.6f", op2);
        
    return 0;
}
