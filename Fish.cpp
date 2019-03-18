#include <stack>
using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> a_stack,b_stack;
    int tmp_a,tmp_b;
    a_stack.push(A[0]);
    b_stack.push(B[0]);
    for (unsigned int idx=1;idx<A.size();idx++)
    {
        if((B[idx]==1))
        {
                a_stack.push(A[idx]);
                b_stack.push(B[idx]);
        }
        else
        {
            tmp_a = A[idx];
            tmp_b = B[idx];
            while(!a_stack.empty() && b_stack.top()==1)
            {
                if(tmp_a<a_stack.top())
                {
                    tmp_a = a_stack.top();
                    tmp_b = b_stack.top();
                    a_stack.pop();
                    b_stack.pop();                    
                    break;
                }
                    a_stack.pop();
                    b_stack.pop();                 
            }
            a_stack.push(tmp_a);
            b_stack.push(tmp_b);             
        }

    }
    return a_stack.size();
}