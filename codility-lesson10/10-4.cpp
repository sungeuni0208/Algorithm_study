#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> &A);
int main(){
    vector<int> v;
    int x;
    cin >>x;
    cout <<"return"<< solution(v)<< endl;;
    return 0;
}
//100- 구글 참고
int solution(vector<int> &A){
    //peak구하기
    int size=int(A.size());
    vector<int> peak;
    for(int i=1;i<size-1;i++){
        if(A[i]>A[i-1]&&A[i]>A[i+1]){
            peak.push_back(i);
        }
    }
    //peak가 없는 경우 0 반환
    if(peak.size()==0)
        return 0;

    //블록은 peak개수 이상 나올 수 없음. 블록이 될수있는 최대 개수부터 줄어들면서 조건만족하는지 검사.
    for(int i=int(peak.size());i>=1;i--){
        if(size%i==0){  //블록안의 숫자 개수는 모두 같아야함. 나누어 떨어지는지 검사.
            int divide = size/i;    //블록안의 숫자 개수
            int count=0;    //블록안의 peak가 포함되었는지 인덱스를 검사하기위한 변수.
            for(int j=0;j<int(peak.size());j++){    //peak에 해당하는 인덱스가 블록안에 포함되었는지 차례로 검사
                                                    //ex) 3번, 5번, 10번이 각 블록 내에 있는지 확인
                int start = divide*count;           //블록의 시작 인덱스
                int end= divide *(count+1);         //블록의 끝 인덱스 
                if(start<=peak[j] && end>peak[j]){  //만족 안하면 다음 블록에 포함된것이 아님.
                    count++;                    //포함되면 다음 블록으로 넘어가기 위해 1더함.
                }
            }
            if(count==i)        //블록의 개수와 블록에 포함된 peak개수가 같다면 리턴.
                return i;
        }
    }
    return 1;       //peak가 존재하지만 
}
//힌트
// 우선 빈 array는 아니지만 array이 크기가 3보다 작으면 Peak을 만들수 없으니 0을 반환합니다.
 
// 그리고 Paek을 구하고
// Peak의 갯수에서 1씩 줄여가면서 가능한 block인지를 파악합니다.
 
// 동일한 갯수의 블럭인지 확인을 위해 v.size%i ==0을 적용하였고
// 각 block에 최소 1개의 Peak이 존재하면 되기 때문에 한번이라도 checkCount로 각 block에 최소 1개의 Peak이 포함되어 있는지 체크합니다. 
// 그렇게 다 연산을 했는데 결과가 나오지않으면 만족하는 block은 1이기 때문에 마지막에 return 1을 합니다.
