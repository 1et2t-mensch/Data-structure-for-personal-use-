#include <iostream>
using namespace std;
int maxR(int A[],int left,int right){
    if (left+1 == right)
        return A[left];
    else{
        int mid = (left + right) >> 1;
        return max(maxR(A,left,mid),maxR(A,mid,right));
        }
}
int main(){
    int A[8] = {0,5,8,2,5,8,1,12};
    cout << maxR(A,0,6) << endl;
    return 0;
}