#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int getSum(int x, vector<int> &A);
int solution1(vector<int> &A);
int solution2(vector<int> &A);
int solution3(vector<int> &A);

//연속된 부분합의 최대값 구하기(카데인알고리즘 사용)
int main(){
    vector<int> v;
    v.push_back(-2);
    v.push_back(1);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(-5);
    v.push_back(4);

    cout <<"return"<< solution3(v)<< endl;;
    return 0;
}
//61
int solution1(vector<int> &A) {
    int size=int(A.size());
    vector<int> v;
    int max=v[0];
    
    for (int i = 0; i < size; i++)
    {
        v.push_back(getSum(i,A));
        v.push_back(A[i]);
    }
    if(size==0)
        return 0;
    else
        return *max_element(v.begin(),v.end());
    
}
int getSum(int x, vector<int> &A){
    if(x==0)
        return A[0];
        
    return getSum(x-1,A)+A[x];
}
//
int solution2(vector<int> &A) {
    int size=int(A.size());
    vector<int> v;
    int max=v[0];
    int i=size-1;
    int sum=0;
    while(A[i]>0){
        v.push_back(A[i]);
        sum+=A[i];
        if(A[i-1]<0 && i>0){
            v.push_back(sum);
            sum=0;
            i--;
        }
    }
    if(size==0)
        return 0;
    else
        return *max_element(v.begin(),v.end());
    
}
//카데인 알고리즘-100
int solution3(vector<int> &A){
    int localmax=A[0]; //첫번째 값으로 초기화
    int globalmax=A[0];

    for (int i = 1; i < int(A.size()); i++)
    {   //2번째부터 시작
        localmax=max(A[i],A[i]+localmax);
        //현재값과 연속된 앞부분 값 더한것 비교하여 큰것을 localmax로 설정
        if(localmax>globalmax){
            //지금까지의 연속된 부분합보다 크다면 globalmax 변경
            globalmax=localmax;
        }
    }
    return globalmax;
}