#include <stdio.h>
	
	int main () {
	
	char meio;
	float valor, avis, cheque, p3, p12, v3, v6, v12;
	
	
	printf ("Digite o valor total da compra: ");
	scanf ("%f", &valor);
	
	printf ("Digite como vai pagar: [A vista - A]\n[Cheque pré-datado - C]\n[Parcelado em 3 - 3]\n[Parcelado em 6 - 6]\n[Parcelado em 12 - d]: ");
	scanf (" %c", &meio);
	
	switch (meio) {
		
		case 'A':
		avis = (valor * 0.85);
		printf ("O valor total terá um desconto de 15%%, e portanto passará de: %.2f, para %.2f", valor, avis);
		break;
		
		case 'C':
		cheque = (valor * 0.90);
		printf ("O valor total terá um desconto de 10%%, e portanto passará de: %.2f, para %.2f", valor, cheque);
		break;
		
		
		case '3':
		p3 = (valor * 0.95);
		v3 = (p3 / 3);
		printf ("O valor total terá um desconto de 5%%, e portanto passará de:\n %.2f, para %.2f. \nO valor de cada parcela fica em: %.2f", valor, p3, v3);
		break;
		
		case '6':
		v6 = (valor / 6);
		printf ("O valor total não terá desconto, e portanto vai ficar em: \n%.2f. \nO valor de cada parcela será: %.2f", valor, v6);
		break;
		
		case 'd':
		p12 = (valor * 1.08);
		v12 = (p12 / 12);
		printf ("O valor total terá um acréscimo de 8%%, e portanto passará de:\n %.2f, para %.2f. \nO valor de cada parcela fica em: %.2f ", valor, p12, v12);
		break;
		
		default:
		printf ("Digite uma das opções de pagamento correta!");
	}
		
		return 0;
		
	
	
}
