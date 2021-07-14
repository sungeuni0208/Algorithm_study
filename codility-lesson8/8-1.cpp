#include <vector>
#include <map>
using namespace std;

//58
//dominator가 없을때 처리안해줌.
int solution(vector<int> &A);
int solution(vector<int> &A) {
    int half=A.size()/2;
    map<int,int> map;
    for(int i=0;i<A.size();i++){
        map[A[i]]=0;
        //map의 value값 0으로 초기화
    }
    for(int i=0;i<A.size();i++){
        map[A[i]]+=1;
        //value값 1씩 증가.
        if(map[A[i]]>half)
            return i;
        // 만약 value값이 half초과하면 현재 i 반환.
    }

}
//100
int solution(vector<int> &A) {
        int half=A.size()/2;
    map<int,int> map;
    for(int i=0;i<A.size();i++){
        map[A[i]]=0;
    }
    for(int i=0;i<A.size();i++){
        map[A[i]]+=1;
        if(map[A[i]]>half)
            return i;
    }
    return -1;
    //dominator없을때 처리.

}