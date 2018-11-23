// you can use includes, for example:
 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

    vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>Ans(N,0);
    int MaxValue=0;
    int LastBase =0;
    for (unsigned int idx1=0;idx1<A.size();idx1++)
    {
     if(A[idx1]==N+1)
     {
        LastBase=MaxValue;
     }
     else
     {
         Ans[A[idx1]-1]=max(Ans[A[idx1]-1],LastBase);
         Ans[A[idx1]-1]++;
         MaxValue=max(MaxValue,Ans[A[idx1]-1]);
     }
    }
    for (int idx1=0;idx1<N;idx1++)
    {
        Ans[idx1]=max(LastBase,Ans[idx1]);
    }
    return Ans;
}