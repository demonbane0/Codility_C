#include <algorithm> 
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort (A.begin(), A.end());
    int max_value = -1000000000;
    max_value = max(max_value,A[0]*A[1]*A[A.size()-1]);
    max_value = max(max_value,A[A.size()-3]*A[A.size()-2]*A[A.size()-1]);       
    return max_value;
}