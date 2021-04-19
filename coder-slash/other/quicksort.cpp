#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    // you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

    int quicksort(vector<int> &D, vector<int> &C, int left, int right){
        int l = left;
        int r = right;
        while(l<r){
            while(l<r && D[r]>=D[left]) 
            {
                if(D[r]==D[left] && C[left]>C[r])
                swap(C[left],C[r]);
                r--;
            }
            while(l<r && D[l]<=D[left]) {
                if(D[l]==D[left] && C[left]>C[l])
                swap(C[left],C[l]);
                l++;
            }
            swap(D[l],D[r]);
            swap(C[l],C[r]);
        }
        swap(D[left],D[r]);
        swap(C[left],C[r]);
        return l;

    }
    void recur(vector<int> &D,vector<int> &C,int start,int end){
        if(start>=end) return;
        int idx = quicksort(D,C,start,end);
        recur(D,C,start,idx-1);
        recur(D,C,idx+1,end);
    }

    int solution(vector<int> &D, vector<int> &C, int P) {
        // write your code in C++14 (g++ 6.2.0)
        int len = D.size();
        int len2 = C.size();
        int ans=0;
        if(len!=len2) return -1;
        recur(D,C,0,len-1);       

        for(int i:C){
            cout<<"C:"<<i<<endl;
            if(P-i>=0)
            {
                P-=i;
                ans++;
            }
            else return ans;
        }
        return ans;
        // for(int i:D){
        //     cout<<"D: "<<i<<endl;
        // }
        // for(int i:C){
        //     cout<<"C: "<<i<<endl;
        // }
        // quicksort(D,C,0,len-1);
    }

};

int main(){
    Solution s1;
    int test =INT_MIN;
    vector<int> D{5,5,5,5};
    vector<int> C{8,3,3,4};
    int P = 6;
    cout << s1.solution(D,C,P) <<endl;
    system("pause");
    return 0;
}