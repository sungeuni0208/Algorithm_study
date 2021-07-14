#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int solution(vector<int> &A);
/*
풀이에 핵심은 배열을 정렬한 상태에서 인접한 세개의 인덱스간의 비교만 진행하면 됩니다.
(그리고 인덱스에 대한 대소조건을 보면, 인덱스를 고려해야 할 것 같지만, 실제로 인덱스는 중복되지만 않으면 괜찮습니다.) 
즉, 주어진 예제의 배열을 정리하면 1, 2, 5, 8, 10, 20으로 정렬되고, 인접한 세개의 인덱스간의 조건을 충족하는지 확인합니다.

그리고 4가지 경우에서 문제에 조건을 만족하는 경우는 1, 2, 5, 8, 10, 20가 있습니다.

그런데 이미 배열이 정렬되어 있기 때문에, 세가지 경우를 모두 확인하지 않고, 작은 인덱스 2개의 합과 나머지 큰 인덱스의 값만 비교하면 됩니다.

5 + 8 > 10 인 경우가 참이라면, 나머지 경우는 당연히 참일수 밖에 없습니다.
*/
int main(){
   vector<int> A;
   A.push_back(1);
    cout<< solution(A) <<endl;
    return 0;
}
int solution(vector<int> &A) {
    if(A.empty())
        return 0;
    int num=0;
    int size=int(A.size());
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(),A.end());
    for(int i=0;i<=size-3;i++){
        if((long)A[i]+A[i+1]>A[i+2]){
            //***int 형으로 표현될 수 있는 범위를 넘기 때문에 long으로 데이터타입 변환
            num=1;
        }
    }
    return num;
}
