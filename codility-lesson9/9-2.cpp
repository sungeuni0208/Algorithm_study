#include <vector>
#include <iostream>
using namespace std;

//44... timeout,[8 9 3 6 1 2]
int solution(vector<int> &A) {
    int s=A.size();
    int max=0;
    int result=0;
    vector<int> v;
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(A[j]>A[i] && max<A[j])
                max=A[j];
            else continue;
        }
        if(max>0)
            v.push_back(max-A[i]);
    }
    for(int i=0;i<v.size();i++){
        if(result<v[i])
            result=v[i];
    }
    return result;
}
//카데인 알고리즘 사용
int solution(vector<int> &A) {
    int s=A.size();
    int result=0;
    int min=A[0];
    vector<int> v;
    if(s<2) return 0;

    for(int i=1;i<s;i++){
        if(result<A[i]-min) //i=1일땐 0보다 작으면 수익이 없는것, 그 이상일땐 
            result=A[i]-min;    //현재 가격에서 현재까지의 최소값을 빼면 수익이 최대로 나는것
        if(A[i]<min)    //A[i]가 현재까지의 최소값이라면 min바꿈
            min=A[i];
    }
    return result;
}