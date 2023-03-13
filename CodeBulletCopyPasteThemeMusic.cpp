
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
/*//TODO: Delete this comments
Did you know, in C & C++ the following 3 references are all actually valid and gets compiled correctly? ps. you'll need to include <iostreem> to use the std:: library - 

#include <iostream>
int toDelete() {
    int tab[3] = { 1,2,3 };
    std::cout << tab[1] << std::endl;
    std::cout << 1[tab] << std::endl;
    std::cout << NULL[tab + 1] << std::endl;
}*/