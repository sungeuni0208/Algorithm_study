#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;
int solution(string &S);

int solution(string &S){
    stack<char> stack;

    if(S.empty())
        return 1;
    for(int i=0;i<S.size();i++){
        char x=S.at(i);
        if(stack.empty()){  //스택이 비었을 경우
            stack.push(x);
        }
        else{
            char c=stack.top();
            if(x=='}'){
                if(c=='{')
                    stack.pop();
                else
                    stack.push(x);
            }
            else if(x==']'){
                if(c=='[')
                    stack.pop();
                else
                    stack.push(x);
            }
            else if(x==')'){
                if(c=='(')
                    stack.pop();
                else{
                stack.push(x);
                
                }
            }
            else if(x=='{'||x=='('||x=='[')
                stack.push(x);
        }
    }

    for(int i=0;i<stack.size();i++)
        cout<< stack.top() <<endl;
    //stack 사이즈 체크
    if(stack.empty())
        return 1;
    else
        return 0;

}