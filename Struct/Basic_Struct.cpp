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
    prof p[3];

    strcpy(p[0].name, "Heictor");
    p[0].age = 19;
    strcpy(p[1].name, "Brennus");
    p[1].age = 20;    

    cout<<"Name: "<<p[0].name<<endl;
    cout<<"Age: "<<p[0].age<<endl;
    cout<<"Name: "<<p[1].name<<endl;
    cout<<"Age: "<<p[1].age<<endl;
    return 0;
}
