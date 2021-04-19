#include <bits/stdc++.h>
using namespace std;

/*************************************************************************/
/****
 * LC 415: 字符串相加
 * 
给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。

链接：https://leetcode-cn.com/problems/add-strings

提示：
num1 和num2 的长度都小于 5100
num1 和num2 都只包含数字 0-9
num1 和num2 都不包含任何前导零
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式

************************************************************/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int len1 = num1.size()-1;
        int len2 = num2.size()-1;

        while(len1 >=0 || len2 >=0 || add > 0)
        {
            a = len1 >=0? num1[len1--]-'0' : 0;
            b = len2 >=0? num2[len2--]-'0' : 0;
            res = a + b + add;
            add = res/10;

            ans += (res)%10 + '0';
        }

        return reverse(ans);
    }
    //     while(len1>=0 && len2>=0){
    //         a = num1[len1--] - '0';
    //         b = num2[len2--] - '0';
    //         if(c) {
    //             a += 1;
    //             c = false;
    //         }
    //         if( a+b >=10)
    //             c = true;
    //         ans += (a+b)%10 + '0';
    //     }

    //     while(len1>=0){
    //         a = num1[len1--] - '0';
    //         if(c) {
    //             b = 1;
    //             c = false;
    //         }else b = 0;

    //         if( a+b >= 10)
    //             c = true;
    //         ans += (a+b)%10 + '0';
    //     }
    //     while(len2>=0){
    //         b = num2[len2--] - '0';
    //         if(c) {
    //             a = 1;
    //             c = false;
    //         }else a = 0;

    //         if( a+b >= 10)
    //             c = true;
    //         ans += (a+b)%10 + '0';
    //     }
    //     if(c){
    //         c = false;
    //         ans += '1';
    //     }
    //     return reverse(ans);
    // }

    string subStrings(string num1, string num2) {
        return num1;
    }
    string mulStrings(string num1, string num2) {
        return num1;
    }

private:
    // bool c = false;
    int add = 0;
    int a = 0;
    int b = 0;
    int res = 0;
    string reverse(string ans){
        int len = ans.size();
        for(int i =0;i<len/2;++i){
            swap(ans[i],ans[len-i-1]);
        }
        return ans;
    }
};

int main(){
    Solution s1;

    string a;
    string b;
    cin>>a;
    cin>>b;

    cout<< s1.addStrings(a,b) << endl;
    //cout<< s1.subStrings(a,b) << endl;
    //cout<< s1.mulStrings(a,b) << endl;

    system("pause");

    return 0;
}