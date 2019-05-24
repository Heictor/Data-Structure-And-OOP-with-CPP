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
    cout<<"Pointer's content: "<<pvar<<endl<<"Content at pointer's direction: "<<*pvar<<endl;
    cout<<"Variable's value: "<<var<<endl<<"Variable's Address: "<<&var<<endl;

    //Using void method "foo" to change "var's" value using pointers
    foo(pvar);

    cout<<"New 'var' value: "<<var<<endl<<"Pointing the value with '*pvar' pointer: "<<*pvar<<endl;

    return 0;
}