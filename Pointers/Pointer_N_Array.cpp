//
// Created by heict on 24/05/2019.
//

#include <iostream>

using namespace std;

int main(){
    int array[] = {5,6,7,8,9};
    int* Parray = &array[0];
    int i = 0;
    int** PParray = &Parray;
    while(i<sizeof(array) / sizeof(int)){
        cout<<*Parray<<endl;
        Parray++;
        i++;
    }
    cout<<PParray<<endl;
    cout<<**PParray<<endl;
    return 0;
}