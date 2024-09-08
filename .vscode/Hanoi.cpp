#include<iostream>
using namespace std;
void hanoi(int n ,int Stack<Disk>& Sx,int Stack<Disk>& Sy,int Stack<Disk>& Sz){
    if(n > 0){
        hanoi(n - 1,Sx,Sz,Sy);
        move(Sx,Sz);
        hanoi(n - 1,Sy,Sx,Sz);
    }
}// O(2^n)
//www.hanuota.com
//the key here is that you can divide and conquer
//or just take n-1 problem as sth you will solve later