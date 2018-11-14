// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ans=0;
    for (int ii=0;ii<A.size();ii++)
    {
        ans^=A[ii];
    }
    return ans;
}