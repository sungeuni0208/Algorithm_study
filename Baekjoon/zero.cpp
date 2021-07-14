#include <iostream>
#include <stack>

using namespace std;
//스택-제로
int main()
{
    int k;
    cin >> k;
    stack<int> stack;

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (x == 0 && !stack.empty())
        {
            stack.pop();
        }
        else if (x != 0)
        {
            stack.push(x);
        }
    }
    int sum = 0;
    while (!stack.empty())
    {
        sum += stack.top();
        stack.pop();
    }
    cout << sum << endl;
    return 0;
}
