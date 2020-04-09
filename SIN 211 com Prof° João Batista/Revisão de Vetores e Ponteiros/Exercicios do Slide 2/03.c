/*
Codifique, compile e execute um programa em C que contenha uma
estrutura data com os campos: dia (inteiro), mês (inteiro) e ano
(inteiro). Crie um vetor de datas para armazenar/imprimir a data de
aniversário dos n alunos matriculados em uma disciplina qualquer,
sendo n um valor digitado pelo usuário. Implemente funções
distintas, além da função main, para armazenar/imprimir os valores
armazenados no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct sDia{
	int dia;
	int mes;
	int ano;
}Dia;

void cadastraData(Dia *d1){
	for(int i=0; i<36;i++){
		printf("\n Aluno %d",i);
		scanf("%d",&d1[i].dia);
		scanf("%d",&d1[i].mes);
		scanf("%d",&d1[i].ano);
	}
}
void printaData(Dia *d1){
	for(int i=0; i<36;i++){
		printf("\n Aluno %d",i);
		printf("\n dia %d, mes %d e ano %d.",d1[i].dia,d1[i].mes,d1[i].ano);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	Dia *d1;
	d1 = (Dia*)malloc(n*sizeof(Dia));
	
	cadastraData(d1);
	printaData(d1);
	
    free(d1);
	return 0;
}