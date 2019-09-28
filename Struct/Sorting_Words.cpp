#include <iostream>
#include <cstring>
#define TAM 5
using namespace std;

struct reg{
	char nome[20];
}typedef reg;

reg registro[TAM];

void inclusao(int);
void ordenar();
void saida();
int busca();

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	char menu = '0';
	int cont=0;

	do
	{
		cout << endl;
		cout << "CONSUTORIO" << endl;
		cout << endl <<"MENU DE OPCOES: " << endl;
		cout << " 1 - Inclusao" << endl;
		cout << " 2 - Ondenar" << endl;
		cout << " 3 - Mostrar nome dos pacientes" << endl;
		cout << " 0 - Sair" << endl;
		cout << "Escolha o numero de 1-0: " << endl;
		cin >> menu;
		switch (menu)
		{
			case '1':
				inclusao(cont);
				++cont;
				break;
			case '2':
				ordenar();
				break;
			case '3':
        			saida();
        			break;
      			case '4':
			        busca();
        			break;
		}

	}while (menu != '0');

	return 0;
}

void inclusao(int i){
	if(i==TAM){
		cout<<"Turma Lotada"<<endl;
	}else{
		cout<<"Nome do paciente: "<<endl;
		cin>>registro[i].nome;
	}
}

void ordenar(){
	int i, j;
	char t[20];
	for(i=1; i<TAM; i++)
	{
		for(j=1; j<TAM; j++)
		{
			if(strcmp(registro[j-1].nome, registro[j].nome)>0)
			{
				strcpy(t, registro[j-1].nome);
				strcpy(registro[j-1].nome, registro[j].nome);
				strcpy(registro[j].nome, t);
			}
		}
	}
}

void saida(){
	int i;cout <<endl<< "Lista de Pacientes:"<<endl;
  	for (i=0;i<TAM;i++){
		cout << registro[i].nome<<endl;
  	}
}

int busca(){
	char nome[20];
  	cout<<"Nome do paciente que deseja procurar:";
  	cin>>nome;
  	int inicio = 0;
  	int final = TAM-1;
  	int meio;
  	while(inicio<=final){
    		meio = (inicio+final)/2;
    		if(strcmp(nome, registro[meio].nome)==0){
      			cout<<"Nome encontrado"<<endl;
      			return 0;
    		}else if(strcmp(nome, registro[meio].nome)<0){
      			final = meio-1;
    		}else{
      			inicio = meio+1;
    		}
  	}
  	return 1;
}
