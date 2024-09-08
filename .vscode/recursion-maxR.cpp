#include<iostream>
using namespace std;
int maxR(int A[],int n)
{
    if(n < 2)//Recusive case
        return A[n-1];
    else //Base case
        return max(maxR(A,n-1),A[n-1]);//O(n)
}
int main(){
    int A[5] = {5,10,2,0,4};
    cout << maxR(A,5) <<endl;
    return 0;
}