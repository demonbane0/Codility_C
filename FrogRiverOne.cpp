// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
int *LeafPos=new int[X];
int PosOccuCount=0;
int Ans=0;
for (int idx=0;idx<X;idx++)
{
 LeafPos[idx]=0;   
}
for(unsigned int idx=0;idx<A.size();idx++)
{
 if(LeafPos[A[idx]-1]==0)
 {
     PosOccuCount++;
     LeafPos[A[idx]-1]++;
 }
 if(PosOccuCount==X)
 {
     Ans=idx;
     break;
 }
}
delete[]LeafPos;
LeafPos=NULL;
Ans = (PosOccuCount==X)? Ans:-1;
return Ans;
}