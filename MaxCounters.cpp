// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

    vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>Ans(N,0);
    int MaxValue=0;
    for (unsigned int idx1=0;idx1<A.size();idx1++)
    {
     if(A[idx1]==N+1)
     {
        Ans.assign(N,MaxValue);
     }
     else
     {
         Ans[A[idx1]-1]++;
         MaxValue=MaxValue>Ans[A[idx1]-1]? MaxValue: Ans[A[idx1]-1];
     }
    }
    return Ans;
}