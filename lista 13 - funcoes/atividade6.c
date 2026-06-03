/*6) Escreva um programa que oferece ao usuário a possibilidade de
calcular as áreas de circunferências, retângulos e triângulos. 
Conforme a opção selecionada, solicite os parâmetros necessários, 
acione uma das funções criadas nos exercícios anteriores, exibindo o resultado.*/

#include <stdio.h>

float calculocir (float ra) { //area do circulo
	
    	float area; 	
    	
    	area = (ra * ra) * 3.14;
    	
	return area;
	
	}
	
	float calculoret (float b, float h) { //area do retangulo

        float area; 	
	
	    area = b * h;
	
	return area;
	
	}
	
	
	float calculotri (float b, float h) { //area triangulo
	
	    float area; 	
	
	    area = (b * h) / 2;
	
	return area;
	
	}
	
	int main () {
	 
	    char opcao;
	    float resultadotriangulo, alturatriangulo, basetriangulo;
	    float raio, resultadocir; 
	    float resultadoretangulo, alturaretangulo, baseretangulo;
	   
	    do {
	   
	    printf ("a) Area do circulo\n");
	    printf ("b) Area do retangulo\n");
	    printf ("c) Area do triangulo\n");
	    printf ("s) Sair do programa\n\n");
	    printf ("Digite a opção que deseja: ");
	    
	    
	    scanf (" %c", &opcao);
	    
	    switch (opcao) {
	        
	        case 'a':
	      
            	printf ("Digite o valor do raio: ");
            	scanf ("%f", &raio);	
            	
            	resultadocir = calculocir(raio);
            			
            	printf ("Area do seu circulo = %f", resultadocir);
            	
            break;
	      
	        case 'b':
	      
    	        printf ("Digite o valor da altura: ");
                scanf ("%f", &alturaretangulo);	
                	
                printf ("Digite o valor da base: ");
                scanf ("%f", &baseretangulo);
                	
                resultadoretangulo = calculoret(baseretangulo, alturaretangulo);
                			
                printf ("Area do seu retângulo = %f", resultadoretangulo);
    	      
	        break;
	      
	        case 'c':
	      
    	      	printf ("Digite o valor da altura: ");
            	scanf ("%f", &alturatriangulo);	
            	    
            	printf ("Digite o valor da base: ");
            	scanf ("%f", &basetriangulo);
            	
            	resultadotriangulo = calculotri(basetriangulo, alturatriangulo);
            			
            	printf ("Area do seu triângulo = %f", resultadotriangulo);
    	      
	        break;
	        
	        
	        default:
	            printf ("Opção invalida!");
	    }
	    
	    }
	    
	    while (opcao != 's' && opcao != 'S');
	    
    return 0; 
	}
