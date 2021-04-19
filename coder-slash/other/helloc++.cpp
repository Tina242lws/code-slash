#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

class Solution {
public:
    int findNum(string s1, string s2, int k){
        if(k <= 0){
            if(s1 == s2) {
                ans= (ans+1)%1000000007;
                return ans;
            }
            else return ans;
        }
        if(dic.find(s1)==dic.end()) dic.insert(s1); 
        else return ans;
        int len = s1.size();
        for(int i=0; i<len-1; ++i){
            string l = s1.substr(0,i+1);
            // cout << "k =" << k <<" "<< "l = " << l << endl;
            string r = s1.substr(i+1,len-1);
            // cout << "k =" << k <<" "<< "r = " << r << endl;
            temp = r + l;
            // cout << "k =" << k <<" "<< "s1 = " << temp << endl;
            findNum(temp, s2, k-1);

        }
       
        return ans;
    }
    
private:
    set<string> dic;
    string temp;
    int ans = 0;
}; 

int main(){
    
    string s1,s2;
    int k;
    cin>>s1;
    cin>>s2;
    cin>>k;

    Solution sol;

    int ans = 0;
    int len = s1.size();
    if( len != s2.size()) return 0;

    bool flag = (k%2)?true:false;

    ans = sol.findNum(s1,s2,k);


    cout << ans << endl;
        
    system("pause");
    return 0;
}