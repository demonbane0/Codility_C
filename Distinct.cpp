#include <set>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> num_set;
    for (unsigned int idx=0;idx<A.size();idx++)
    {
        if(!num_set.count(A[idx]))
        {
            num_set.insert(A[idx]);
        }
    }
    return num_set.size();
}