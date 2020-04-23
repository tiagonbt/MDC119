#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

void main(){

	int ano;
	bool bissexto;
 
	printf("Escreva o ano: ");
	scanf("%d", &ano);
 
	if (ano % 400 == 0) {
		bissexto = true;		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;		
	}
	else {
		bissexto = false;
	} 
	if (bissexto == true) {
		printf("O ano e bissexto!");
	} else {
		printf("O ano nao e bissexto!");
	}
  return 0;
}
