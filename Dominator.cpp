#include <unordered_map>
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0) return -1;
    else if(A.size()==1) return 0;
    
    unordered_map<int,unsigned int> num_map;
    unordered_map<int,unsigned int>::iterator it;
    for (unsigned int idx=0;idx<A.size();idx++)
    {
        if((it=num_map.find(A[idx]))==num_map.end())
        {
            num_map.insert(make_pair(A[idx],1));
        }
        else
        {
            it->second++;
            if(it->second>A.size()/2) return idx;
        }
    }
    return -1;
}