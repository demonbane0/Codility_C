#include <algorithm>
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(A.size()<3)
    return 0;
    
    sort(A.begin(),A.end());
    
    long long sum=0;
    for (unsigned int idx=0;idx<A.size()-2;idx++)
    {
        sum=(long long)A[idx]+(long long)A[idx+1];
        
        if((A[idx]>0)&&(sum>(long long)A[idx+2]))
        return 1;
    }
    return 0;
}