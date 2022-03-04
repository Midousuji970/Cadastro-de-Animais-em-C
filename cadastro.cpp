// Aluno: Murilo Tácio da Silva
// RA: 255962021
// Curso: Engenharia de Computação

#include<stdlib.h>// Biblioteca padrão DOS
#include<stdio.h>// Biblioteca de input e output
#include<locale.h>// Biblioteca que permite colocar acentos no programa

// Exercecio: Criar um programa que Cadastra Animais, e sua quantidade de alimento consumido. Feito para Zoológico de Guarulhos

int main(){
 setlocale(LC_ALL,"Portuguese_Brazil");
 
 char animal[16];   // Nome do animal
 float quantAnimais;  // Quantidade de animais
 float kilosConsu;    // Quilos consumidos pelos animais
 float precoKilos;   // Preço em real do Quilo de Carne.
 float precoKilos2;
 
 float kilosPerAni;   // Divisão da linha 16 pela 15, assim descobre quanto cada animal consome de comida
 int quantMensal;   // Quantidade Mensal de comida consumida pelos animais
 
 float precoMensal; // Quantidade mensal de comida consumida pelo animal, multiplicada pelo preço em real do quilo de carne.
 
 printf("\nPrograma para Cadastra Animais no Zoológico\n");
 printf("_______________________________________________________________________________________|\n\n");
 printf("Espécie do animal(Nome): ");
 scanf("%s",&animal);
  printf("\n");
 printf("Quantidade de Animais: ");
 scanf("%f",&quantAnimais);
 printf("\n");
 printf("Quantidade de Quilos Consumidos(Kg): ");
 scanf("%f",&kilosConsu); 
 printf("\n");
 printf("Preço de um Quilo de comida: R$");
 scanf("%f",&precoKilos);
 printf("_______________________________________________________________________________________|\n\n");
 
 kilosPerAni = kilosConsu/quantAnimais;
 printf("Quantidade diária de comida consumida por cada animal(Kg): %.2f",kilosPerAni);
  printf("\n");
 printf("\nA quantidade diária de comida consumida por todos os animais é(Kg): %.2f",kilosConsu);
 printf("\n");
 
 quantMensal = kilosConsu*30;
 printf("\nA quantidade mensal de comida consumida por todos os animais é(Kg): %d",quantMensal);
  printf("\n");
 
 precoKilos2 = kilosConsu*precoKilos;
 precoMensal=precoKilos2*30;
 printf("\nMensalmente o Zoológico gastará: R$%.2f",precoMensal);
 printf(" com esse animais.");
 printf("\n_______________________________________________________________________________________|\n");
 

 
 system("pause");
 return 0;	
}
