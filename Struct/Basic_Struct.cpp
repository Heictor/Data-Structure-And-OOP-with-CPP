//
// Created by heict on 24/05/2019.
//
#include <iostream>
#include <cstring>

using namespace std;

typedef struct profile{
    char name[12];
    int age;
}prof;

int main(){
    prof prof1;

    strcpy(prof1.name, "Heictor");
    prof1.age = 19;

    cout<<"Name: "<<prof1.name<<endl;
    cout<<"Age: "<<prof1.age<<endl;
    return 0;
}
