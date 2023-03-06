
#include <windows.h>

int main() {
    LPCWSTR pathSus = L"sus.wav"; //The "illuminati confirmed" sound - Honestly It's the x-files theme
    LPCWSTR pathErr = L"err.wav"; //Original WindowsXP error sound
    PlaySound(pathErr, NULL, SND_ASYNC); // play error sound after sounds are loaded.
    Sleep(100);
    while (1) {
        if (GetAsyncKeyState(VK_CONTROL) && (GetAsyncKeyState(86)) ) //ctr v
        {
            PlaySound(pathSus, NULL, SND_ASYNC);
        }
        if (GetAsyncKeyState(VK_CONTROL) && (GetAsyncKeyState(0x43))) //ctr c
        {
            PlaySound(pathErr, NULL, SND_ASYNC);
        }
        if (GetAsyncKeyState(VK_CONTROL) && (GetAsyncKeyState(0x53))) //ctrl s
        {
            PlaySound(pathErr, NULL, SND_ASYNC);
        }
        if (GetAsyncKeyState(VK_CONTROL) && (GetAsyncKeyState(VK_ESCAPE))) //ctrl & Excape
        {   
            break; //exit
        }
       Sleep(100);
    }
    return 0;
}