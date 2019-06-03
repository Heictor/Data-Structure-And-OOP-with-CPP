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
    prof p[3]; //Instantiate 3 objects from the struct
    prof pon; //Instantiate a object
    prof* ppon; //Instantiate a struct pointer

    ppon = &pon;

    strcpy(p[0].name, "Heictor");
    p[0].age = 19;

    strcpy(p[1].name, "Brennus");
    p[1].age = 20;

    strcpy(ppon->name, "Julio");
    ppon->age = 18;

    cout<<"Name: "<<p[0].name<<endl;
    cout<<"Age: "<<p[0].age<<endl;

    cout<<"Name: "<<p[1].name<<endl;
    cout<<"Age: "<<p[1].age<<endl;

    //Common way
    cout<<"Name: "<<pon.name<<endl;
    cout<<"Age: "<<pon.age<<endl;
    //Pointer way
    cout<<"Name: "<<ppon->name<<endl;
    cout<<"Age: "<<ppon->age<<endl;

    return 0;
}
