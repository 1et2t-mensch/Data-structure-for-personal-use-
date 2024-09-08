#include<iostream>
using namespace std;
int ackermann(int m ,int n){
    if(m == 0)return n+1;
    if((m>0)||(n=0))return ackermann(m-1,n);
    if((m>0)||(n>0))return ackermann(m-1,(ackermann(m,n-1)));
}// A(4,m) = 2^2 .... m times
int main(){
    int a = ackermann(8,10);
    cout << a << endl;
    return 0;
//(3,3)is 61 ; (3,4) is 125 ; (4,0) is 13 ; (4,1) is 65535