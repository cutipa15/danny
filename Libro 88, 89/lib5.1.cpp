#include <windows.h>
#include <string>
#include <sstream>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

HWND hwndBtns[16], hwndEdit;
std::wstring currentNumber;
double result;
char lastOperator;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    const wchar_t CLASS_NAME[] = L"Calculator";

    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, L"Calculadora",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL)
    {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

void AppendToNumber(int number)
{
    currentNumber += std::to_wstring(number);
    SetWindowText(hwndEdit, currentNumber.c_str());
}

void OnOperator(char op)
{
    double number = std::stod(currentNumber);
    switch (lastOperator)
    {
    case '+':
        result += number;
        break;
    case '-':
        result -= number;
        break;
    case '*':
        result *= number;
        break;
    case '/':
        result /= number;
        break;
    default:
        result = number;
    }

    currentNumber.clear();
    lastOperator = op;
}

void OnEqual()
{
    double number = std::stod(currentNumber);
    switch (lastOperator)
    {
    case '+':
        result += number;
        break;
    case '-':
        result -= number;
        break;
    case '*':
        result *= number;
        break;
    case '/':
        result /= number;
        break;
    default:
        result = number;
    }

    std::wstringstream ss;
    ss << result;
    std::wstring strResult = ss.str();
    SetWindowText(hwndEdit, strResult.c_str());

    currentNumber.clear();
    lastOperator = '\0';
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_CREATE:
    {
        hwndEdit = CreateWindowEx(
            0, L"EDIT", L"0",
            WS_CHILD | WS_VISIBLE | WS_BORDER | ES_RIGHT,
            10, 10, 380, 40,
            hwnd, NULL, NULL, NULL
        );

        int buttonWidth = 90;
        int buttonHeight = 50;
        int x = 10;
        int y = 60;
        wchar_t buttonText[16][2] = {
            L"7", L"8", L"9", L"/",
            L"4", L"5", L"6", L"*",
            L"1", L"2", L"3", L"-",
            L"0", L".", L"=", L"+"
        };

        for (int i = 0; i < 16; i++)
        {
            hwndBtns[i] = CreateWindow(
                L"BUTTON", buttonText[i],
                WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                x, y, buttonWidth, buttonHeight,
                hwnd, (HMENU)(i + 1), NULL, NULL
            );

            x += buttonWidth;
            if ((i + 1) % 4 == 0)
            {
                x = 10;
                y += buttonHeight;
            }
        }
    }
    break;

    case WM_COMMAND:
    {
        int id = LOWORD(wParam);
        if (id >= 1 && id <= 10)
        {
            AppendToNumber(id - 1);
        }
        else if (id == 11)
        {
            OnOperator('/');
        }
        else if (id == 12)
        {
            AppendToNumber(0);
        }
        else if (id == 13)
        {
            OnEqual();
        }
        else if (id == 14)
        {
            OnOperator('-');
        }
        else if (id == 15)
        {
            AppendToNumber('.');
        }
        else if (id == 16)
        {
            OnOperator('+');
        }
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