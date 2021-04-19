#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// class Solution{
// public:

// };

int main(){
    // Solution s1;
    vector<int> e;
    vector<int> c;
    int N,i=0,temp;
    cin>>N;
    i = N;
    while(N-->0){
        cin>>temp;
        e.emplace_back(temp);
    }
    N = i;
    while(N-->0){
        cin>>temp;
        c.emplace_back(temp);
    }

    N = i;
    // N: 充电桩数目（给出） rest: 当前剩余电量 e[i],c[i]:每个节点充电量和耗电量 ans:输出
    int rest = 0;
    int ans = INT_MAX;
    for(int j = 0; j<N;++j){
        rest = e[j];
        for(int k = j;k<N+j;++k){
            rest -= c[k%N];
            if(rest<0) break;
            rest += e[(k+1)%N];
        }
        if(rest>=0) ans = min(j,ans);
    }
    if(ans == INT_MAX) ans = -1;
    cout<<ans<<endl;
        
    system("pause");
    return 0;
}