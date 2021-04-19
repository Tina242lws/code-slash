#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    // ListNode* insert(ListNode *head){

    // }
    // ListNode* del(ListNode* head){

    // }
private:

};

int main(){
    Solution s1;
    int n,temp;
    cin>>n;
    ListNode dummy = ListNode(0);
    ListNode* pre = &dummy;

    while(n-->0){
        cin>>temp;
        ListNode node = ListNode(temp);
        pre->next = &node;
        pre = &node;
    }

    pre = &dummy;
    while(pre->next != NULL){
        cout<< pre->next->val <<"->";
        pre = pre->next;
    }

    delete(pre);

    //cout<<s1.output(1,2)<<endl;
    system("pause");
    // Solution* s1 = new Solution();
    // cout<<s1->output(1,2)<<endl;
    // delete(s1);
    // system("pause");
    return 0;
}