// ConsoleScreen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "TextScreen.h"
#include "Player.h"
#include <crtdbg.h>

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 스택에 n바이트가 할당되었을것이다
    TextScreen NewScreen;

    Player NewPlayer;

    NewScreen.CreateScreen(3, 3, "□");

    NewScreen.SetPixel(NewPlayer.GetPos(), "★");

    NewScreen.PrintScreen();
}
