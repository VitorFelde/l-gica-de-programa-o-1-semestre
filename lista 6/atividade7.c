#include <stdio.h>

int main()
{
    int i = 0, razao = 3, pa = 0;
        
    printf ("%d, ", pa); //foi o jeito que achei para imprimir o zero, espero que esteja certo
         
        
    while (i < 20) {
         
        pa = pa + razao;
          
        i++;
    
        printf ("%d, ", pa);
          
    }
    
    return 0;
    
    
}