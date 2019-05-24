//
// Created by heict on 24/05/2019.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char word[30];
    int size;
    char* p;
    char* pstart;

    cout<<"Type a word: ";
    cin>>word;

    size = strlen(word);
    p = &word[size-1];
    pstart = &word[0];
    cout<<size<<endl;
    cout<<p<<endl;
    cout<<pstart<<endl;

    while(true){
        cout<<*p;
        if(p==pstart)
            break;
        p--;
    }
    return 0;
}