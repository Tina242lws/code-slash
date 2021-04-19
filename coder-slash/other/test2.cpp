// // you can use includes, for example:

#include <bits/stdc++.h>
using namespace std;


#define INT_MAX		2147483647
#define INT_MIN		(-INT_MAX-1)
// // you can write to stdout for debugging purposes, e.g.
// // cout << "this is a debug message" << endl;

class Solution{
public:
int solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int N = A.size();
    int res = INT_MAX;
    int head = 0;
    int len = N-K+1;
    
    while(true){
        int maxEle = INT_MIN;
        int minEle = INT_MAX;
        for(int i=0;i<N;++i){
            if(i>=head && i <(head+K)) continue;
            if(A[i] < minEle) minEle = A[i];
            if(A[i] > maxEle) maxEle = A[i];
        }
        int amp = maxEle - minEle;
        if(amp <res) res = amp;
        head++;
        if(head >=len) break;
    }
    return len;
    }
};


int main(){
    Solution s1;
    vector<int> A{5,3,6,1,3};
    int K =2;
    s1.solution(A,K);
    return 0;
}