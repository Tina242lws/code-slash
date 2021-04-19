#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int ans = -1;

class Solution{
public:
    void dfs(vector<vector<int>> matrix,int x,int y,int t,int time,int row, int col){
        int right[2]={0,1};
        int down[2]={0,1};
        t+= matrix[x][y];
        if(x == row-1 && y== col-1 && t<=time){
            ans = max(ans,t);
        }else{
            int xr = x + right[0];
            int yr = y + right[1];
            if(xr < row && yr < col) dfs(matrix,xr,yr,t,time,row,col);
            int xd = x + down[0];
            int yd = y + down[1];
            if(xd < row && yd < col) dfs(matrix,xd,yd,t,time,row,col);
        }
        return;
    }
};

int main(){
    // Solution s1;
    // string s,fri;
    // unordered_map<string, string> list;
    // unordered_map<string, string>::iterator it;
    // int N;
    // cin>>N;
    // while(N-->0){
    //     cin>>s>>fri;
    //     list[s]=fri;
    // }

    // cout<<"Hello world C++"<<endl;

    // Solution s1;
    // queue<int> time;
    // unordered_map<int, int> list;
    // string temp;
    // int a,b;
    
    // while(cin>>temp){
    //     stringstream input(temp);
    //     while(getline(input,temp,',')){
    //         time.push(stoi(temp,0,10));
    //     }
    // }
    // while(cin>>a){
    //     char t = cin.get();
    //     if(t=='-'||t=='>'||t==',') continue;
        
    // }

    int row,col,time;
    cin>>row;
    cin>>col;
    cin>>time;
    if(row<=0||col<=0||time<=0) cout<<-1<<endl;

    vector<vector<int>> num(row,vector<int>(col));
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            int temp;
            cin>>temp;
            num[i][j] = temp;
        }
    }
    Solution s1;
    
    s1.dfs(num,0,0,0,time,row,col);

    cout<<ans<<endl;

    // vector<vector<int>> dp(row,vector<int>(col));
    // for(int i=0;i<row;++i){
    //     for(int j=0;j<col;++j){
    //         if(i==0 && j==0) dp[i][j]=num[i][j];
    //         else{
    //             if(i==0)
    //                 dp[i][j]=dp[i][j-1]+num[i][j];   
    //             else{
    //                 if(j==0)
    //                     dp[i][j]=dp[i-1][j]+num[i][j];
    //                 else  dp[i][j]=min(dp[i-1][j],dp[i][j-1])+num[i][j];  
    //             }
    //         }
    //     }
    // }
    // int max = INT_MIN;
    // for(int i=0;i<row;++i){
    //     for(int j=0;j<col;++j){
    //         if(dp[i][j]>max)
    //         {
    //             if(max<=time)
    //             max = dp[i][j];
    //         }
    //     }
    // }
    // cout<< max <<endl;
    // if(dp[row-1][col-1]<=time) cout<<dp[row-1][col-1]<<endl;
    // else cout<<-1<<endl;
        

    return 0;
}