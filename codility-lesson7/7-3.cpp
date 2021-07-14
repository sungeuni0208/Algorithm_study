#include <iostream>
#include <stack>
#include <vector>
using namespace std;
//100 12min O(N)
//7-1과 비슷한 과정.
int solution(string &S);
int solution(string &S){
    stack<char> stack;

    if(S.empty())
        return 1;

    for(int i=0;i<S.size();i++){
        char c=S.at(i);
        
        if(stack.empty())
            stack.push(c);
        else if(c=='('){
            stack.push(c);
        }
        else if(c==')'){
            char top=stack.top();
            if(top=='(')
                stack.pop();
        }
        
    }
    if(stack.empty())
        return 1;
    else
        return 0;
}