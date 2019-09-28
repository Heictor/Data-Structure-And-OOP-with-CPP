#include<iostream>

using namespace std;

struct reg{
  int cod_item;
  string nome_item;
  reg* prox;
  // reg *prox é um ponteiro que vai apontar para o proximo item da fila;
}typedef reg;

reg* topo = NULL;
// ponteiro do topo do pilha;
// NULL garante que o topo da pilha seja zero;

void push(string, int);
void pop();
int tamanho();

int main() {

  string nome;
  int codigo;
  int menu;
  do{
    cout << "--------------------------------"<<endl;
    cout << "MENU DA PILHA" << endl;
    cout << "1-Adicionar Item a Pilha." << endl;
    cout << "2-Retirar Item da Pilha." << endl;
    cout << "3-Quantidade de Itens na Pilha." << endl;
    cout << "0-Sair da Pilha." << endl;
    cout << "--------------------------------"<<endl;
    cout << "Escolha uma opcao: ";
    cin >> menu;
    switch(menu){
      case 1:
        cout << endl;
        cout << "Nome do item: " << endl;
        cin >> nome;
        cout << "Numero do item: " << endl;
        cin >> codigo;
        push(nome, codigo);
        break;
      case 2:
        pop();
        break;
      case 3:
        tamanho();
        break;
    }
  }while(menu != 0);
  return 0;
}

void push(string nome, int codigo){
  reg* novo;
  novo = new reg;//alocando memoria
  novo->nome_item = nome;
  novo->cod_item = codigo;
  novo->prox = topo;
  topo = novo;
}
void pop(){
  reg* aux;
  aux = topo->prox;
  delete topo;
  topo = aux;
}
int tamanho(){
  reg* final;
  final = new reg;
  final = topo;
  cout << "--------------------------------"<<endl;
  cout << "ITENS DA PILHA: " << endl;
  while(final!=NULL){
    cout <<"Nome do item: "<< final->nome_item << endl;
    cout <<"Codigo do item: "<<final->cod_item <<endl;
    final = final->prox;
  }
  cout << "--------------------------------"<<endl;
  //cout << tam << endl;
  return 0;
}
