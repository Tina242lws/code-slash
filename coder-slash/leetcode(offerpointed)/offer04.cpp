#include <bits/stdc++.h>
using namespace std;

/*************************************************************************/
/****
 * 剑指offer 04.二维数组中的查找
 * 
在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

case：
输入：
现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
输出：
给定 target = 5，返回 true。
给定 target = 20，返回 false。
限制：
0 <= n <= 1000
0 <= m <= 1000
************************************************************/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int n,m;
        int i,j;
        if(matrix.size()==0) return false;
        n = matrix.size();
        m = matrix[0].size();
        if(m == 0) return false;

        for(i = m-1; i>=0; --i){
            if(matrix[0][i]<target) break;
        }
        for(j = 0; j<n; ++j){
            if(matrix[j][i]>=target)
            {
                if(matrix[j][i] == target) return true;
                else return false;
            }
        }

        return false;
    }
private:

};

int main(){
    int n, m, tempm;
    int temp;
    int target;
    vector<vector<int>> matrix;
    vector<int> row;
    cin>>n;
    cin>>m;
    tempm = m;
    while(n-->0){
        while(tempm-->0){
            cin>>temp;
            row.emplace_back(temp);
        }
        tempm = m;
        matrix.emplace_back(row);
        row.clear();
    }
    cin>> target;

    Solution s1;
    cout<< s1.findNumberIn2DArray(matrix,target) <<endl;
    system("pause");

    return 0;
}