#include <iostream>
using namespace std;

wsrtring tetromino[7];

int main()
{
 // create assests
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");
tetromino[0].append(L"..X.");

	
	return 0;
}

int Rotate(int px, int py, int r)
{
	switch (r % 4)
	{
	case 0: return py * 4 + px;             // 0 degrees
	case 1: return 12 + py - (px * 4);      // 90 degrees
	case 2: return 15 - (py * 4) - px;      // 180 degrees
	case 3: return 3 - py + (px * 4);       // 270 degrees
	}
	return 0;
}
