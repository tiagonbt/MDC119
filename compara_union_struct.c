#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

union u_produto
{
    char nome[30];
    float preco;
    float volume;
    float peso;
};
struct s_produto
{
    char nome[30];
    float preco;
    float volume;
    float peso;
};
struct item
{
    char nome[30];
    float preco;
    union
	{	
        float peso;
        float volume;
    };      
}
produto3, produto4;
main(int argc, char const *argv[]){system("color 7c");

    union u_produto produto1;
    struct s_produto produto2;

    strcpy(produto1.nome, "bolacha");
    produto1.peso = 1;
    produto1.preco = 5;
    produto1.volume = 100;

    strcpy(produto2.nome, "frango");
    produto2.peso = 8;
    produto2.preco = 23;
    produto2.volume = 80;
    
    printf("Union size:%d\n", sizeof(produto1));
    printf("Struct size:%d\n", sizeof(produto2));
    
   	puts("=========================");
    produto3.peso = 50;
    produto4.volume = 220;
	
    printf("\nSize-%i\t\tValor:%.2f", 
		sizeof(produto3), produto3.peso);
    printf("\nSize-%i\t\tValor:%.2f\n", 
		sizeof(produto4), produto4.volume);

    return (0);
}
