//
// Created by heict on 24/05/2019.
//

#include <iostream>

using namespace std;

int main(){
    int* vet = new int[10];


    cout<<"Type a value"<<endl;
    cin>>*(vet);
    cout<<"You typed: "<<*(vet)<<endl;

    delete[] vet;


    cout<<"You typed: "<<*(vet)<<endl;
    return 0;
}