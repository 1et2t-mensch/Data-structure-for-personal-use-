#include <iostream>
using namespace std;
void cover(int n,int x,int y ,int dx,int dy){//start from middle's small blck,devide and conquer for 4 directions
    int s = 1 << (n-1);
    place(x+dx * (s-1),y+dy*(s-1),dy,dx);
    if(1<n){
        cover(n - 1,x,y,dx,dy);//SW
        cover(n - 1,x+dx*s,y+dy*s,dx,dy);//NE
        cover(n - 1,x+dx*(2*s - 1),y,-dx,dy);//SE
        cover(n - 1,x,y+dy*(2*s - 1),dx,-dy);//NW
    }
}//T(n) = O(4^n)
//T(N) = O(N^2) N = 2^n
//T(M) = O(M) M = 4^n - 1 three different references
