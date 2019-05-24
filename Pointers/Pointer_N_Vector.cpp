//
// Created by heict on 24/05/2019.
//

#include <iostream>

using namespace std;

void foovet(int vet[]){
    vet[0] = 100;
}

void fooAux(int aux[]){
    aux[0] = 100;
}

int main(){
    int* vet = new int[10];
    int aux[10];
    int vet2[5];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    cout<<*(vet + 0)<<endl;
    cout<<*(vet + 1)<<endl;
    cout<<*(vet + 2)<<endl;

    foovet(vet);

    cout<<*(vet + 0)<<endl;
    cout<<vet[0]<<endl;

    cout<<aux[0]<<endl;
    cout<<aux[1]<<endl;
    cout<<aux[2]<<endl;

    fooAux(aux);

    cout<<aux[0]<<endl;
    cout<<*(aux + 0)<<endl;

    for(int i=0; i<sizeof(vet2) / sizeof(int); i++) {
        cout << "Type the value of the position " << i << " on the vector" << endl;
        cin >> vet2[i];
        cout << "You typed: "<<vet2[i]<<endl;
    }
    return 0;
}