#include <vector>
#include <iostream>
using namespace std;
int solution(int x);

//다이나믹프로그래밍
int main(){
    int num;
    cin >>num;
    cout << solution(num) <<endl;
    return 0;
}
int solution(int x){
    int result=0;
        if(x==0)
            return 0;
        else if(x==1)
            return 1;
    for(int i=2;i<=x;i++){
        result=solution(i-1)+solution(i-2);
    }
    return result;
}