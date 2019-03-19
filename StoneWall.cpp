#include <stack>
using namespace std;
int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    if(H.size()==0) return 1;
    
    stack<int> height_stack;
    height_stack.push(H[0]);
    int block_num=1;
    for (unsigned int idx=1;idx<H.size();idx++)
    {
        if(H[idx]>height_stack.top())
        {
            height_stack.push(H[idx]);
            block_num++;
        }
        else if(H[idx]<height_stack.top())
        {
         while((!height_stack.empty())&& (H[idx]<height_stack.top()))
         {
             height_stack.pop();
             if(height_stack.top()==H[idx])
             {
                 height_stack.pop();
                 block_num--;
             }
         }
         height_stack.push(H[idx]);
         block_num++;
        }
    }
    return block_num;
}