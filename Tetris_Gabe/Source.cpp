#include <iostream>
using namespace std;

#include <Windows.h>

wsrtring tetromino[7];
int nFeildWidth = 12;
int nFeildHeight = 18;
unsigned char *pFeild = nullptr;

int nScreenWidth = 80;          // Console Screen Size X (Columns)
int nScreenHeight = 30;         // Console Screen Size Y (rows)

int Rotate(int px, int py, int r)
{
    Switch (r % 4)
    {
    case 0: return py * 4 + px;         // 0 degrees 
    case 1: return 12 + py - (px * 4);  // 90 degrees
    case 2: return 15 - (py * 4) - px;  // 180 degrees
	case 3: return 3 - py + (px * 4);   // 270 degrees
    }
    return 0;
}


int main()
{
 // create assests
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");

	tetromino[1].append(L"..X.");
	tetromino[1].append(L".XX.");
	tetromino[1].append(L".X..");
	tetromino[1].append(L"....");

	tetromino[2].append(L".X..");
	tetromino[2].append(L".XX.");
	tetromino[2].append(L"..X.");
	tetromino[2].append(L"....");

	tetromino[3].append(L"....");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L"....");

	tetromino[4].append(L"..X.");
	tetromino[4].append(L".XX.");
	tetromino[4].append(L"..X.");
	tetromino[4].append(L"....");

	tetromino[5].append(L"....");
	tetromino[5].append(L".XX.");
	tetromino[5].append(L"..X.");
	tetromino[5].append(L"..X.");

	tetromino[6].append(L"....");
	tetromino[6].append(L".XX.");
	tetromino[6].append(L".X..");
	tetromino[6].append(L".X..");

	pFeild =  new unsigned char[nFeildWidth*nFeildHieght]; // Create play feild buffer
	 for (int x = 0; x < nFeildWitdth; x++) // Board Boundary
		 for (int y = 0; y < nFeildHeight; y++)
			 pFeild[y*nFeildWidth + x] = (x == 0 || x == nFeildWidth - 1 || y == nFeildHeight - 1) ? 9 : 0;

    wchar_t *screen = new wchar_t[nScreenWitdh*nScreenHeight];
    for (int i = 0; i < nScreenWidth*nScreenHeight; i++) screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hCosole);
    DWORD dwBytesWritten = 0;

    return 0;
}
