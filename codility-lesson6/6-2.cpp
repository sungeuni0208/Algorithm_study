// you can use includes, for example:
#include <algorithm>
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty())
        return 0;
    
    int mult=1;
    int size=int(A.size());
    
    sort(A.begin(),A.end());

    for(int i=size-3;i <= size-1;i++){
        mult=mult*A[i];
    }

    if(A[0]<0 & A[1]<0){
        int mult2 = A[0]*A[1]*A[size-1];
        if(mult2>mult)
            return mult2;
        else
            return mult;
    }
    else{
        return mult;
    }
