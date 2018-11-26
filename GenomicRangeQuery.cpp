// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> Ans(P.size(),4);
    int SValue=0;
    for(unsigned int idx1=0;idx1<P.size();idx1++)
    {
        for(int idx2=P[idx1];idx2<=Q[idx1];idx2++)
        {
            switch(S[idx2])
            {
             case 'A':
             SValue=1;
             break;
             case 'C':
             SValue=2;
             break;
             case 'G':
             SValue=3;
             break;  
             case 'T':
             SValue=4;
             break;               
            }
            Ans[idx1]=min(Ans[idx1],SValue);
        }
    }
    return Ans;
}