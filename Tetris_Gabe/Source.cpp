#include <iostream>
using namespace std;

#include <Windows.h>

wsrtring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
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

bool DoesPeiceFit(int nTetromino, int nRotation, int nPosX, int nPosY)
{
    for (int px = 0; px < 4; px++)
		for (int py = 0; py < 4; py++)
		{
            // Get index into peice
			int pi = Rotate(px, py, nRotation);

			// Get index into field
			int fi = (nPosY + py) * nFieldWidth + (nPosX + px);

			if (nPosX + px >= 0 && nPosX + px < nFieldWidth)
			{
				if (nPosY + py) >= 0 && nPosY + py < nFieldHeight
				{
		            if (tetromino[nTetromino][pi] == L'X' && pField[fi] != 0)
					    return false; // fail on first hit
				}
			}
		}

	
    return true;
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

	pField =  new unsigned char[nFieldWidth*nFieldHieght]; // Create play field buffer
	 for (int x = 0; x < nFieldWitdth; x++) // Board Boundary
		 for (int y = 0; y < nFieldHeight; y++)
			 pFeild[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;

    wchar_t *screen = new wchar_t[nScreenWitdh*nScreenHeight];
    for (int i = 0; i < nScreenWidth*nScreenHeight; i++) screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hCosole);
    DWORD dwBytesWritten = 0;



bool bGameOver = false;



	while (!bGameOver)
	{
		// GAME TIME ===================================


        // INPUT =======================================
		

        // GAME LOGIC ==================================
	

        // RENDER OUTPUT ===============================

		// Draw Field
		for (int x = 0; x < nFieldWidth; x++)
			for (int y = 0; y < nFieldHeight; y++)
				screen[(y + 2)*nScreenWidth + (x + 2)] = L" ABCDEFG=#"[pField[y*nFieldWidth + x]];
		
		// Dsiplay Frame
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0
	}
    return 0;
}
