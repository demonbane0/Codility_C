// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> Int_array(A.size(),0);
    for (unsigned int idx1=0;idx1<A.size();idx1++)
    {
        if(A[idx1]>=1&&A[idx1]<=A.size())
        {
            Int_array[A[idx1]-1]=1;
        }
    }
    for (unsigned int idx1=0;idx1<A.size();idx1++)
    {
    if(Int_array[idx1]==0)
    return idx1+1;
    }
    return A.size()+1;
}