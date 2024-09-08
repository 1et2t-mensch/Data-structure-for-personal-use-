#include<iostream>
using namespace std;
class Fib{
    private:
        int f,g;//f = fib(k-1) g =fib(k)
    public:
        Fib(int n){f=0;g=1;while(g < n) next();}
        int get(){return g;}
        int next(){g += f;f = g - f;return g;}
        int prev(){f = g - f;g -= f;return g;}
};


int main(){
    Fib fib(10);
    cout << "Current number" << fib.get() << endl;
    cout << "Previous number" << fib.prev() << endl;
    cout << "Next number" << fib.next() << endl;
    return 0;
}