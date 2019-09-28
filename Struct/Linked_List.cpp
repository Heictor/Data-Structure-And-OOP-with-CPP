#include <iostream>
using namespace std;

struct Nodo{
	int info;
	struct Nodo *prox;
};

struct ListaSimplesEnc{
	struct Nodo *prim;
};
void criarLista (struct ListaSimplesEnc *pList){
	pList -> prim = NULL;
}
void mostrarLista (struct ListaSimplesEnc *pList){
	struct Nodo *p;
	for (p = pList->prim; p != NULL; p = p->prox){
		cout << p->info << endl;
	}
}
void inserirIni (struct ListaSimplesEnc *pList, int v){
	struct Nodo *novo;
	novo = (struct Nodo*) new Nodo;
	novo -> info = v;
	novo->prox = pList -> prim;
	pList -> prim = novo;
}
void removerIni(struct ListaSimplesEnc *pList){
	struct Nodo *pAux = pList -> prim;
	pList -> prim = pList -> prim ->prox;
	delete(pAux);
}
void inserirOrd (struct ListaSimplesEnc *pList, int v){
	struct Nodo *novo;
	novo = (struct Nodo*) new Nodo;
	struct Nodo *pAtu, *pAnt;
	pAnt = NULL;
	pAtu = pList -> prim;
	while (pAtu != NULL && pAtu->info < v){
		pAnt = pAtu;
		pAtu = pAtu -> prox;
	}
	novo -> prox = pAtu -> prox;
}
int estaVazia(struct ListaSimplesEnc *pList){
	return (pList->prim == NULL);
}
int main(int argc, char** argv) {
	struct ListaSimplesEnc minhaLista;
	int valor, op = 1;
	criarLista(&minhaLista);
	while(op!=6){
		cout<<" 1 - inserir elemento no inicio"<<endl;
		cout<<" 2 - inserir elemento em ordem(so se a lista estiver ordenada)"<<endl;
		cout<<" 3 - remover elemento no inicio"<<endl;
		cout<<" 4 - remover elemento"<<endl;
		cout<<" 5 - Mostrar Lista"<<endl;
		cout<<" 6 - sair"<<endl;
		cout<<" choose your path!";
		cin >> op;
		switch (op){
			case 1:
					cout << "valor?";
					cin >> valor;
					inserirIni(&minhaLista, valor);
					break;
		    case 2:
				cout << "valor?";
				cin >> valor;
				inserirOrd(&minhaLista, valor);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				if(estaVazia(&minhaLista)){
					cout<< "Lista vazia"<<endl;
				}else{
					mostrarLista(&minhaLista);
				}
				break;
			case 6:
				exit(0);
		}	
	}
	return 0;
}
