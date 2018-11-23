// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int* numArray =NULL;
    numArray = new int [A.size()];
    for (unsigned int idx=0;idx<A.size();idx++)
    {
        numArray[idx]=0;
    }
    for (unsigned int idx=0;idx<A.size();idx++)
    {
        if(A[idx]-1>A.size())
        {
            return 0;
        }
        else if(numArray[A[idx]-1]==0)
        {
            numArray[A[idx]-1]++;
        }
        else
        {
            return 0;
        }
    }
    
    delete []numArray;
    numArray =NULL;
    return 1;
}