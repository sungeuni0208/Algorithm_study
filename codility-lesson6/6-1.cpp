// you can use includes, for example:
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A);
int main(){
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    solution(A);
    return 0;
}
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty())
        return 0;

    int size=int(A.size());
    int count=1;
    sort(A.begin(),A.end());

    for(int i=1;i<size;i++){
        if(A[i]!=A[i-1])
        count++;
    }
    return count;
}
//setㅇㅣ용


// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/* 
int (vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> h_set;
    
    //for_each(A.begin(), A.end(), [&](auto& num){
      // h_set.insert(num); 
    //});
    
    return h_set.size();
}
*/