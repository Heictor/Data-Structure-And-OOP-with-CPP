#include <iostream>
#include <cstring>
#define MAX_FILA 500  // Tamanho Máximo da Fila

using namespace std;

struct reg{
	string nome;
	int senha;
}typedef reg;

void mostrar_fila();
void enfileirar(int);
bool desenfileirar();

reg fila[MAX_FILA];

int inicio = 0;
int fim = 0;

int main(){

  int count=0;
  int op;

  do
	{
    system("cls");
    mostrar_fila();
    cout << "========================\n";
    cout << "Total de pessoas na fila: " << fim <<endl;
    cout << "========================\n";
		cout << " \nEscolha Uma Opcao: \n\n";
		cout << "  (1) Enfileirar " << endl;
		cout << "  (2) Desenfileirar " << endl;
		cout << "  (0) Sair " << endl << endl;
		cout << "Escolha um numero: ";
		cin >> op;

		switch (op)
		{
			case 1:
				enfileirar(count);
				count++;
				break;
			case 2:
				desenfileirar();
				break;
		}

	} while (op != 0);

	return 0;
}

void enfileirar(int sen){
  if (fim == MAX_FILA){
    cout << " \nERRO: Fila Cheia\n";
    system("pause");
  }
  else{
    cout << "\nDigite Um nome: ";
    cin >> fila[fim].nome;
		fila[fim].senha = sen+1;
    fim++;
    cout<<fila[fim].senha;

  }
  system("pause");
}

bool desenfileirar(){
	int i;
  if(inicio == fim){
    cout << " \nERRO: Fila Vazia\n";
    return false;
  }else{
		for (i = 0; i<=fim; i++){
			fila[inicio]=fila[inicio+1];
		}
  }
	fim--;
	return true;
}

void mostrar_fila(){
  int i;
  cout << "[ ";
	if(fim ==0){
		cout<<"Fila Vazia";
	}else{
  	for(i=0; i < fim; i++){
			cout << "Senha " << fila[i].senha <<": "<< fila[i].nome << "; ";
		}
  }
  cout << " ] \n";
}
