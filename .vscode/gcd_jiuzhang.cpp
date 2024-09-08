#include <iostream>
using namespace std;
__int64 gcdCN(__int64 a,__int64 b){
    int r = 0;
    while(!((a&1)||(b&1))){
        a >>= 1;b >>= 1; r++;
    }
    while(1){
        while(!(a&1)) a>>= 1;
        while(!(b&1)) b>>= 1;
        (a > b) ? a = a - b: b=b - a;
        if(a==0)return b;
        if(b==0)return a;
    }

__int64 gcdE(__int64 a, __int64 b){
    while (b!=0){__int64 r = a%b;a=b;b=r;return a;}
    //a%b will naturally swap a and b if a > b
}
    
}
int main(){

}