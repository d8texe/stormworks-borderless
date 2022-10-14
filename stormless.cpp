#include <iostream>
#include <Windows.h>

int main()
{
    HWND hWin;

    hWin = FindWindow(NULL, L"Stormworks");

    if(hWin == NULL)
    {
        std::cout << "Stormworks not found!" << std::endl;
        getchar();
        return 1;
    }

    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);
    SetWindowLongPtr(hWin, GWL_STYLE, WS_VISIBLE | WS_OVERLAPPED);
    SetWindowPos(hWin, HWND_TOP, 0, 0, w, h, SWP_FRAMECHANGED);
    ShowWindow(hWin, SW_MAXIMIZE);
}