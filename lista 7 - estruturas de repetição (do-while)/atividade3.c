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

		// Lógica para definir a maior e menor idade
		if (i == 0){   
			// Na primeira iteração (i=0), a primeira idade lida é a nossa base.
			// Ela é, ao mesmo tempo, a maior e a menor idade até agora.
			maioridade = idade;
			menoridade = idade; 
		}
		
		// A partir da segunda iteração, compara a idade atual com a maior registrada
		else if (maioridade < idade)
			maioridade = idade;
		
		// Verifica se a idade atual é menor que a menor registrada anteriormente
		if (menoridade > idade)
			menoridade = idade;
		
		
		// Verifica se o gênero é feminino (aceita 'f' minúsculo ou 'F' maiúsculo)
		if (gen == 'f' || gen == 'F') {
			totmul++;          // Incrementa o contador de mulheres
			idademul += idade; // Soma a idade atual ao total acumulado das mulheres
		}
	
		// Verifica se o gênero é masculino (aceita 'm' minúsculo ou 'M' maiúsculo)
		else if (gen == 'm' || gen == 'M') 
			tothom++;          // Incrementa o contador de homens
	
		i++; // Incrementa o contador do loop para passar para a próxima pessoa
	}

	// Cálculo da média de idade das mulheres (Soma das idades / quantidade de mulheres)
	media = idademul / totmul;

	// Exibição dos resultados finais
	printf ("O (a) mais velho (a) do grupo é: %d,\njá o mais novo (a) é: %d\n", maioridade, menoridade);
	printf ("A média de idade das mulheres é: %.0f\n", media);
	printf ("O total de homens é: %d", tothom);
	
	return 0; // Indica que o programa terminou com sucesso
}
