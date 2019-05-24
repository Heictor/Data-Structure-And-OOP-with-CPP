//
// Created by heict on 23/05/2019.
//

#include <iostream>

using namespace std;

void foo(int* n){
    *n = 15;
}

int main(){
    //Declare both variable and pointer
    int var = 10;
    int* pvar;

    //Initialize pointer
    pvar = &var;
    var = 20;
    //The pointer pvar will get var's memory address
    cout<<pvar<<endl<<*pvar<<endl;
    cout<<var<<endl<<&var<<endl;

    foo(pvar);
    cout<<*pvar<<endl<<var<<endl;

    return 0;
}