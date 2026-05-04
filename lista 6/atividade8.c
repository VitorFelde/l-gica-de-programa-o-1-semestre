#include <stdio.h>

int main()
{
    int i = 0, razao = -2, pa = -2;
        
    printf ("%d, ", pa); //mesma coisa do anterior, so mudei os valores das variaveis e a operação
         
        
    while (i < 10) {
         
        pa = pa * razao;
          
        i++;
    
        printf ("%d, ", pa);
          
    }
    
    return 0;
    
    
}