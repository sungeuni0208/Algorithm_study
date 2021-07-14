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
// //50점- 101, 36 에러, 타임아웃
// int solution(int N){
//     if(N==1)
//         return 4;
//     int min=1;
//     int result=0;
//     for(int i=2;i<N;i++){
//         if(N%i==0 && N/(min)>i){
//             min=i;
//             continue;
//         }
//         else if(N%i==0 && N/(min)<=i){
//             min=i;
//             result=2*(min+N/min);
//             break;
//         }
//         else
//             continue;
//     }
//     return result;
// }
// //70
// int solution(int N){
//     if(N==1)
//         return 4;
//     int min=1;
//     int result=0;
//     for(int i=2;i<N;i++){
//         if(N%i==0 && N/(min)>i){
//             min=i;
//             continue;
//         }
//         else if(N/(min)<=i){
//             //min=i;
//             result=2*(min+N/min);
//             break;
//         }
//         else
//             continue;
//     }
//     return result;
// }
//90- 982,451,653 타임아웃
int solution(int N){
    int min=1;
    if(N==1)
        return 2*(min+N/min);
    for(int i=2;i<N;i++){
        if(N%i==0 && N/(min)>i){
            min=i;
            continue;
        }
        else if(N/(min)<=i){
            break;
        }
        else
            continue;
    }
    return 2*(min+N/min);
}
//100 - N까지 다 돌 필요 없음. sqrt(N)까지만 돌아도됨.
//i*i<N: 36에서 에러남. i*<=N
int solution(int N){
    int min=1;
    if(N==1)
        return 2*(min+N/min);
    for(int i=2;i*i<=N;i++){
        if(N%i==0 && N/(min)>i){
            min=i;
            continue;
        }
        else if(N/(min)<=i){
            break;
        }
        else
            continue;
    }
    return 2*(min+N/min);
}