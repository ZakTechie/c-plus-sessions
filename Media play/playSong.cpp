#include<iostream>
#include <windows.h>
#include <shellapi.h>

using namespace std ;
int main() {
    // SW_SHOWNORMAL
    // SW_SHOWMINIMIZED
    // SW_MAXIMIZE
   ShellExecute(NULL, "open", "Epic Motivational - by StereojamMusic  Epic Motivational Music.mp3", NULL, NULL, SW_SHOWNORMAL);
    cin.get();
    return 0;
}
