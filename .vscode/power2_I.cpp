#include<iostream>
using namespace std;
__int64 power2_I(int n ){
    __int64 power = 1;
    __int64 p = 2;
    while(n > 0){//iterate only logn times,other operation only O(1)
        if(n & 1) power *= p;
        n >>= 1;
        p *= p;
    }
    return power;// only need o(1) space complexity
}
int main(){
    cout << power2_I(4) << endl;
    return 0;
}//can expand to any a^n