#include <stdio.h>

int main()
{
    int i = 0, razao = 6, tabuada = 0;
    
    printf ("%d, ", tabuada + 1);
        
    while (i < 10) {
         
        tabuada = tabuada + razao;
          
        i++;
    
        printf ("%d, ", tabuada);
          
    }
    
    return 0;
    
    
}