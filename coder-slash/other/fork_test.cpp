#include <bits/stdc++.h>
#include <Windows.h>
#include <unistd.h>

using namespace std;
// pid_t fork();
int main(){
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si,sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi,sizeof(pi));

    if(!CreateProcess(NULL,
    "C:\\WINDOWS\\system32\\mspaint.exe",
    NULL,
    FALSE,
    0,
    NULL,
    NULL,
    &si,
    &pi)){
        fprintf(stderr,"Create Process Failed");
        return -1;
    }

    WaitForSingleObject(pi.hProcess,INFINITE);
    printf("Child Complete");

    //Close handles
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    //fork();
    cout<<"helloworld!"<<endl;
    return 0;
}