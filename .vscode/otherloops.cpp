#include <iostream>
using namespace std;
void F(int n){for(int i = 0,j = 0;i < n; i += j,j++);}//O(n)

void F(int n){for (int i =1,r=1;i<n;i <<= r,r <<= 1);}//O(loglogn) can be seen as constant number

void F(int n){for(int i = 1;i<n;i=1 << i);}//O(logn)

void F(int n){for (int i = 1000; i < 1; i = 1000 >> i);}//O(log*n) 对其做对数运算的个数 log*N < 5,N = 10^81

int F(int n){return(n>0)?G(G(n-1)): 0;}//O(n^2)
int G(int n){return(n>0)?G(n-1)+2*n - 1: 0;}//O(n)

void F(int n){for(int i = 1;i < n/G(i,0);i++);}//O(n) i = n^(2/3)
int G(int n, int k){return(n<1)?k:G(n-2*k-1,k+1);}//o(n^(1/2))
//每次迭代调用一次 alternative:可估算n^(2/3)使G(n)返回n^(1/3)，使只用调用一次G(n)

int F(int n){return(n>0)?G(2,F(n-1)):1;}//2^n O(2^n)
int G(int n,int m){return(m>0) ? n + G(n,m-1):0;}//m*n O(m)

int F(int n){return(n>3)?F(n >> 1)+ F(n >> 2):n;}//O(n^0.694ss)

void F(int n){
    for(int i = n; 0 < i; i--)
        if(!(rand*%i))
            for(int j = 0; j < n;j++);//O(nlogn)
}



