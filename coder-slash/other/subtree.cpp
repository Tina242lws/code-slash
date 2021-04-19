#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// class Solution{
// public:

// };
class Solution 
{
public:
    string reverseParentheses(string s) 
    {
        stack<string> stk;
        string word = "";
        for (char c: s)
        {
            if (c == '(')           //遇到左括号  就是一个新的台阶了
            {
                stk.push(word);     //当前的这一段作为一个整体，存进stack
                word = "";          //重新计新的一段
            }
            else if (c == ')')      //当前这一段  要翻转  与前面的一段接起来
            {
                reverse(word.begin(), word.end());
                word = stk.top() + word;
                stk.pop();          //前面这一段不要了
            }
            else
                word += c;          //统计进当前这一段
        }
        return word;
    }
};

int main(){

    string input;
    cin >> input;

    Solution s1;

    cout << s1.reverseParentheses(input) << endl;
            
    system("pause");
    return 0;

    // string input;
    // cin>>input;
    // int len = input.size();
    // stack<string> list;
    // if(len == 1) {
    //     cout << input << endl;
    //     return 0;
    // }

    // string temp;
    // string ans;

    // int idx = 0;
    // if(input.find('(')!=input.npos) {
    //     idx = input.find('(');
    //     if(idx == 0) ans = "";
    //     else    ans = input.substr(0,idx-1);
    // }
    // else {
    //     cout << input << endl;
    //     return 0;
    // }

    // for(int i = idx + 1; i<len ; ++i){
        
    //     if(input[i]=='('){
    //         list.push(temp);
    //         temp = "";
    //     }
    //     if(input[i]==')'){
    //         temp = reverseSub(temp);
    //     }
    //     else temp += input[i];
    // }

    cout << input << endl;
    
        
    system("pause");
    return 0;
}


