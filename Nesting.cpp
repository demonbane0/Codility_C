#include <stack>
using namespace std;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    if (S.size() ==0) return 1;
    if (S.size() %2==1) return 0;
    
    stack<char> char_stack;
    for (unsigned int idx=0;idx<S.size();idx++)
    {
        if(S[idx]=='(')
        {
            char_stack.push(S[idx]);
        }
        else 
        {
            if(char_stack.top()=='(')
                char_stack.pop();
            else
                return 0;
        }
    }
    return (char_stack.empty()) ? 1 : 0;
}