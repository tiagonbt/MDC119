#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(int argc, char const *argv[]){
    struct carro_t{
        char marca[10];
        int ano;
        float valor;
    };
    
    float valor;
    int carro;
    int anospassados;

    struct carro_t carro_s;

    puts("Digite o nome do Fabricante:\n");
    fflush(stdin);
    fgets(carro_s.marca,10,stdin); 

    puts("Digite o ano do carro:\n");
    fflush(stdin);
    
    scanf("%i", &carro);
    carro_s.ano = carro;

    puts("Digite o preco do carro quando comprado:\n");
    fflush(stdin);
    scanf("%f", &valor);

    carro_s.valor = valor;

    float valor_depreciado,ValorAtual;

    ValorAtual = carro_s.valor - (2020 - carro_s.ano)*0.01*carro_s.valor;
    valor_depreciado = carro_s.valor-ValorAtual;

    anospassados = 2020-carro_s.ano;

    printf("\nO valor da depreciacao do:\n%sAo decorrer dos %i anos foi:\n%.0f Reais\nO carro valera atualmente:\n%.0f Reais\n",carro_s.marca,anospassados,valor_depreciado,ValorAtual);
 
    return 0;
}
