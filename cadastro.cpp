// Aluno: Murilo T�cio da Silva
// RA: 255962021
// Curso: Engenharia de Computa��o

#include<stdlib.h>// Biblioteca padr�o DOS
#include<stdio.h>// Biblioteca de input e output
#include<locale.h>// Biblioteca que permite colocar acentos no programa

// Exercecio: Criar um programa que Cadastra Animais, e sua quantidade de alimento consumido. Feito para Zool�gico de Guarulhos

int main(){
 setlocale(LC_ALL,"Portuguese_Brazil");
 
 char animal[16];   // Nome do animal
 float quantAnimais;  // Quantidade de animais
 float kilosConsu;    // Quilos consumidos pelos animais
 float precoKilos;   // Pre�o em real do Quilo de Carne.
 float precoKilos2;
 
 float kilosPerAni;   // Divis�o da linha 16 pela 15, assim descobre quanto cada animal consome de comida
 int quantMensal;   // Quantidade Mensal de comida consumida pelos animais
 
 float precoMensal; // Quantidade mensal de comida consumida pelo animal, multiplicada pelo pre�o em real do quilo de carne.
 
 printf("\nPrograma para Cadastra Animais no Zool�gico\n");
 printf("_______________________________________________________________________________________|\n\n");
 printf("Esp�cie do animal(Nome): ");
 scanf("%s",&animal);
  printf("\n");
 printf("Quantidade de Animais: ");
 scanf("%f",&quantAnimais);
 printf("\n");
 printf("Quantidade de Quilos Consumidos(Kg): ");
 scanf("%f",&kilosConsu); 
 printf("\n");
 printf("Pre�o de um Quilo de comida: R$");
 scanf("%f",&precoKilos);
 printf("_______________________________________________________________________________________|\n\n");
 
 kilosPerAni = kilosConsu/quantAnimais;
 printf("Quantidade di�ria de comida consumida por cada animal(Kg): %.2f",kilosPerAni);
  printf("\n");
 printf("\nA quantidade di�ria de comida consumida por todos os animais �(Kg): %.2f",kilosConsu);
 printf("\n");
 
 quantMensal = kilosConsu*30;
 printf("\nA quantidade mensal de comida consumida por todos os animais �(Kg): %d",quantMensal);
  printf("\n");
 
 precoKilos2 = kilosConsu*precoKilos;
 precoMensal=precoKilos2*30;
 printf("\nMensalmente o Zool�gico gastar�: R$%.2f",precoMensal);
 printf(" com esse animais.");
 printf("\n_______________________________________________________________________________________|\n");
 

 
 system("pause");
 return 0;	
}
