#include <bits/stdc++.h>
#include <queue>
#include <thread>
using namespace std;

int main(){
    int a=0,p=0,c=0;
    int* watcha = &a;
    int* watchp = &p;
    int* watchc = &c;
    a = (int)malloc(sizeof(int));
    watcha = (int*)a;
    watchp = (int*)malloc(sizeof(int));
    int* d = (int*)malloc(sizeof(int));
    int* pnew = new int(1);
    watchc = new int(1);
    //a = 1;
    p = 1;
    //system("pause");
    //free(a);
    free(watcha);
    //free(&a);
    free(watchp);
    free(d);
    //free(c); 不可以

    delete pnew;

    // priority_queue<int, vector<int>, greater<int>> list;

    // return 0;
}