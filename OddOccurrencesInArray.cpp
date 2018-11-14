// you can use includes, for example:
// #include <algorithm>
#include <map>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    map<int,int> hashmap;
    map<int,int>::iterator iter;
    for(unsigned int ii=0;ii<A.size();ii++)
    {
        iter=hashmap.find(A[ii]);
     
        if(iter==hashmap.end())
        {
  
            hashmap[A[ii]]=ii;
        }
        else
        {
            hashmap.erase(iter);
        }
    }
    return hashmap.begin()->first;
    // write your code in C++14 (g++ 6.2.0)
}