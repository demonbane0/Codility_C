// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> Ans(P.size(),0);
    vector<int> AcuNucRow(4,0);
    vector<vector<int>> AcuNuc2D(S.size()+1,AcuNucRow);
    vector<int>CurValue(4,0);
    int CurAns = 0;
    for(unsigned int idx1=0;idx1<S.size();idx1++)
    {
            CurValue.assign(4,0);
            switch(S[idx1])
            {
             case 'A':
             CurValue[0]=1;
             break;
             case 'C':
             CurValue[1]=1;
             break;
             case 'G':
             CurValue[2]=1;
             break;  
             case 'T':
             CurValue[3]=1;
             break;               
            }
            for(int idx2=0;idx2<4;idx2++)
            {   
                AcuNuc2D[idx1+1][idx2]=AcuNuc2D[idx1][idx2]+CurValue[idx2];
            }
    }
    
    for(unsigned int idx1=0;idx1<P.size();idx1++)
    {

        CurAns=0;
        for(int idx2=0;idx2<4;idx2++)
        {
        CurAns++;            
        if(AcuNuc2D[Q[idx1]+1][idx2]-AcuNuc2D[P[idx1]][idx2]>0)
            {
            Ans[idx1]=CurAns;
            break;
            }
        }
    }
    return Ans;
}