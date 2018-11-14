// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long long remain=(1+A.size()+1)*(A.size()+1)/2;
    for (int ind1=0;ind1<A.size();ind1++)
    {
        remain-=(long long)A[ind1];
    }
    return (int)remain;
}