#include<iostream>
using namespace std;
void reverse(int *A,int lo,int hi){
    if(lo < hi){swap(A[lo],A[hi]);reverse(A,lo+1,hi-1);}
    //continuous distribution of elements makes it ez for cache to activatew which improve performance
}
int shift2(int* A,int n,int k ){
    k%= n;
    reverse(A,0,k-1);
    reverse(A,k,n-1);
    reverse(A,0,n-1);//(R+L) = (L+R)'
    return 3*n;// 3/2*(k+n-k+n) = T(3n) = O(n)
}