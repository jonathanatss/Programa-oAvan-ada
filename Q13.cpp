#include <iostream>

using namespace std;

//Ponteiros para função é basicamente uma forma de passar uma função como parâmetro para outra função.

int somar(int a, int b);
int subtrair(int a, int b);

int (*sub) (int, int) = subtrair; // essa declaração serve como um atalho para a função subtrair


int operacao(int x, int y, int (*func) (int,int));


int main(){

	int i,j;
	i = operacao(10,10, somar); //podemos chamar a função diretamente pelo nome
	j = operacao(20, i, sub); // chamamos a função pelo atalho
	printf("Resultados das operacoes: \n\n");
	printf("\t10+5 = %d\n", i);
	printf("\t20-%d = %d\n\n", i, j);
	system ("pause");
	return 0;

}


int somar (int a, int b){
	return(a+b);
}

int subtrair(int a, int b){
	return(a-b);
}

int operacao(int x, int y, int (*func) (int,int)){
	
	int op;
	op = func(x,y);
	return (op); 


