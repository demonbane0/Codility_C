// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> ConsZero(A.size(),0);
    vector<int> ConsOne(A.size(),0);
    int PairNo=0,LastCar=0,CumZero=0;
    long long Sum=0;
    for(unsigned int idx1=0;idx1<A.size();idx1++)
    {
        if(A[idx1]==0)
        {
            if(LastCar==1)
            PairNo++;
            ConsZero[PairNo]++;
            LastCar=0;
        }
        else
        {
            ConsOne[PairNo]++;
            LastCar=1;
        }
    }
    for(int idx1=0;idx1<PairNo+1;idx1++)
    {
        CumZero+=ConsZero[idx1];
        Sum+=CumZero*ConsOne[idx1];
        if(Sum>1000000000||Sum<0)
        return -1;
    }
    return Sum;
}