#include <iostream>
#include <string>
#include <cstdlib>
#define TAM 7

using namespace std;

struct reg{
	string sabor;
	int qntPedaco;
}typedef reg;

reg minha_pilha[TAM];//Declaração de uma pilha do tipo "reg"

void push(reg *, int *);

void mostra_pilha(reg *, int );

int pop(reg *, int *);

int main(void){
	int op; // OPERADOR do menu
	int topo=-1;
	do{
		system("cls"); // Limpa a tela antes de mostrar o menu
		cout <<">>>> Pilha de Entrega de Pizzas <<<<"<<endl;
		cout <<"1. Adicionar entrega a pilha"<<endl;
		cout <<"2. Retirar entrega da pilha"<<endl;
		cout <<"3. Mostrar entregas ainda restantes"<<endl;
		cout <<"0. Sair"<<endl;
		cin >> op;

		switch(op){
			case 1: push(minha_pilha, &topo);
			    break;
			case 2: pop(minha_pilha, &topo);
				break;
			case 3: mostra_pilha(minha_pilha, topo);
				break;
		}
	}while (op != 0);
	return 0;
		
}
void push(reg *pilha, int *top){ // Função para impilhar Valores
	string sbr;
	int qnt;
	if(*top == TAM - 1)
		cout<<"--Caixa Cheia--"<<endl;
	else{
		cout<<"Inserir sabor da Pizza:"<<endl;
		cin>>sbr;
		cout<<"Quantidade de pedaços:"<<endl;
		cin>>qnt;
		*top = *top+1;
		pilha[*top].qntPedaco=qnt;
		pilha[*top].sabor=sbr;
		cout <<"Pizza Empilhada!"<<endl;
	}
	system("pause");
}
void mostra_pilha(reg *pilha, int top){

	if(top ==-1)
		cout <<"Caixa Vazia"<<endl;

	else{
		cout << "Pizzas na Caixa de Entrega"<< endl;
		for (int i=0;i<=top;i++){
			cout <<"Sabor da Pizza:"<< pilha[i].sabor<<endl;
			cout <<"Quantidade de pedaços:"<< pilha[i].qntPedaco<<endl<<endl;
		}
			system("pause");
	}
}
int pop(reg *pilha, int *top){ // Função para Desempilhar Valores
	string sbr;
	int qnt;
	if (*top == -1){
		cout <<"Caixa Vazia"<<endl;
	}else{
		qnt = pilha[*top].qntPedaco;
		sbr = pilha[*top].sabor;
		*top = *top-1;
		cout << "Pizza Retirada: "<< sbr << endl;
	}
	return 0;
	system("pause");
}
