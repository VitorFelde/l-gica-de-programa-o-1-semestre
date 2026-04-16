/*3) Faça um programa para ler a idade e o gênero (F/M) de 10 pessoas. Calcule e mostre:
- A maior e a menor idade do grupo;
- A média de idade das mulheres;
- O número de homens.*/

#include <stdio.h>

int main () {
	
	int maioridade, menoridade, i = 0, idade, totmul = 0, tothom = 0, idademul = 0;
	char gen;
	float media;
	
	while (i < 10) {
	
		printf ("Digite seu Gênero [F/M]: ");
		scanf (" %c", &gen);
		
		printf ("Digite sua idade: ");
		scanf ("%d", &idade);

		if (i == 0){
			maioridade = idade;
			menoridade = idade;
			}
		
		else if (maioridade < idade)
		maioridade = idade;
		
		if (menoridade > idade)
		menoridade = idade;
		
		
		if (gen == 'f' || gen == 'F') {
			
			totmul++;
			
			idademul += idade;
		
			
			}
	
		else if (gen == 'm' || gen == 'M') 
		
		tothom++;
	
		i++;
}

		media = idademul / totmul;


		printf ("O (a) mais velho (a) do grupo é: %d,\njá o mais novo (a) é: %d\n", maioridade, menoridade);
		printf ("A média de idade das mulheres é: %.0f\n", media);
		printf ("O total de homens é: %d", tothom);
	
	}
