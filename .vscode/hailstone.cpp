#include<iostream>
using namespace std;
template <typename T> struct Hailstone{
    virtual void operator()(T& e){
        int step = 0;
        while(1 != e){
            (e%2) ? e =3*e +1 : e /= 2;
            step++;
        }
        e = step;
    }
}

// might not be a alogrithm for it may not end(not proved)