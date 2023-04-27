#include <iostream>
#include <conio.h>
#include <windows.h>
bool gameOver;
using namespace std;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
   
}
void Draw()
{
    system("cls");
    for (int i = 0; i < width +1; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
           
            else
            
                cout << " ";
            
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width+1 ; i++)
        cout << "#";
    cout << endl;

}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Sleep(10);


    }
    return 0;
}

