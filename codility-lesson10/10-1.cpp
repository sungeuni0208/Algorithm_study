#include <iostream>
#include <stack>
using namespace std;
int solution(int N);

int main(){
    int x;
    cin >>x;
    cout <<"return"<< solution(x)<< endl;;
    return 0;
}
//46- n=16,36 일때 d==m인 경우 생각못함

int solution(int N) {
    stack<int> s1;
    stack<int> s2;
    if(N==1)
        return 1;
    s1.push(1);
    s2.push(N);
    for(int i=2;i<N;i++){
        if(i<s2.top() && N%i==0){
            int m=N/i;
            s1.push(i);
            s2.push(m);
        }
        else if(i>=s2.top())
            break;
    }
    return s1.size()+s2.size();
}
//85 - time out
int solution(int N) {
    stack<int> s1;
    stack<int> s2;
    if(N==1)
        return 1;
    s1.push(1);
    s2.push(N);
    for(int i=2;i<N;i++){
        if(i<s2.top() && N%i==0){
            int m=N/i;
            s1.push(i);
            if(m!=i)
                s2.push(m);
        }
        else if(i>=s2.top())
            break;
    }
    return s1.size()+s2.size();
}
//100- 굳이 스택을 두개 사용할 필요가 없다! 벡터로 써도 상관x
int solution(int N) {
    stack<int> s1;
    if(N==1)
        return 1;   
    s1.push(1);
    s1.push(N); //처음에 1과 n을 넣어줌.

    for(int i=2;i<N;i++){
        if(i<N/(i-1) && N%i==0){    //나머지0이고, 이전 인덱스로 나눈 몫보다 작으면 푸쉬
            int m=N/i;
            s1.push(i);
            if(m!=i)
                s1.push(m); //d==m인 경우 처리, 한개만 넣어줘야함.
        }
        else if(i>=N/(i-1))
            break;  //인덱스가 넘어가면 break
    }
    return s1.size();
}