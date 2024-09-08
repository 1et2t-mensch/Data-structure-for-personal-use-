#include <iostream>
using namespace std;
void F(int n){
    for(int j = 0;j < n ;j++)
        for(int i = 0; i < n ;i++);
}

void F/2(int n){
    for(int i = 0; i < n ; i++)
        for(int j = i, j < n;j++);
}

void F/2013(int n){
    for(int i = 0; i < n ; i++)
        for(int j = 0, j < i;j+=2013);
}

void F3(int n){
    for(int i = 0; i < n/2 ; i++)
        for(int j = i, j < n;j++);
}

void F4(int n){
    for(int i = n/2; i < n ; i++)
        for(int j = i, j < n-i;j++);
}

