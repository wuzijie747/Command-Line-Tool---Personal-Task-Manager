#include <windows.h>
#include <iostream>
#include <fstream>

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
HMENU hMenu; // 全局菜单句柄

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    // 注册窗口类
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = 0;
    wc.lpfnWndProc = WindowProcedure;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "myWindowClass";
    wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    if (!RegisterClassEx(&wc)) {
        return 0;
    }
    hMenu = CreateMenu();
    HMENU hFileMenu = CreatePopupMenu();
    AppendMenuW(hFileMenu, MF_STRING, 3, L"&github项目网站");
    InsertMenuW(hMenu, -1, MF_POPUP | MF_STRING, (UINT_PTR)hFileMenu, L"&关于");
    // 创建窗口
    hwnd = CreateWindowExW(
            WS_EX_CLIENTEDGE,
            L"myWindowClass",
            L"任务笔记管理器",
            WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT, CW_USEDEFAULT, 600, 400,
            NULL, hMenu, hInstance, NULL);

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // 消息循环
    while (GetMessage(&Msg, NULL, 0, 0) > 0) {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return Msg.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_COMMAND: {
            if (LOWORD(wParam) == 1) { // 假设按钮的ID是1
                int msgboxID = MessageBoxW(
                        NULL,
                        (LPCWSTR)L"代码未编写",
                        (LPCWSTR)L"文件任务管理器",
                        MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
                );

                switch (msgboxID)
                {
                    case IDCANCEL:
                        // TODO: add code
                        break;
                    case IDTRYAGAIN:
                        // TODO: add code
                        system("start cmd");
                        break;
                    case IDCONTINUE:
                        // TODO: add code
                        break;
                }

                return msgboxID;
            }
            if (LOWORD(wParam) == 2){
                exit(0);
            }
            if (LOWORD(wParam) == 3){
                system("start https://github.com/wuzijie747/Command-Line-Tool---Personal-Task-Manager");
            }
        }
            break;
        case WM_CREATE: {
            // 创建按钮
            CreateWindowW(L"BUTTON", L"新建任务", WS_VISIBLE | WS_CHILD, 10, 10, 100, 30, hwnd, (HMENU) 1, NULL, NULL);
            CreateWindowW(L"BUTTON", L"退出", WS_VISIBLE | WS_CHILD, 130, 10, 50, 30, hwnd, (HMENU) 2, NULL, NULL);
        }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}
