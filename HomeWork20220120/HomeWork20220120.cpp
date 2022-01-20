// HomeWork20220120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    __int64 ex1;
    int Hp;
    int Att;
    char ex;
    __int64 Att1;
    char Hp1;
    int Att2;
    char Name[10];
    char Name1;
    int Att3[10];
    char Name2;
};
class Ex1
{
    char Hp1;
    char Name1;
    int Att;
};
int main()
{
    Player NewPlayer = Player();
    Ex1 NewEx1 = Ex1();
    __int64 HpPtr = (__int64)&NewPlayer.ex1;
    __int64 HpPtr0 = (__int64)&NewPlayer.Hp;
    __int64 HpPtr1 = (__int64)&NewPlayer.Att;
    __int64 HpPtr1_2 = (__int64)&NewPlayer.ex;
    __int64 HpPtr2 = (__int64)&NewPlayer.Att1;
    __int64 HpPtr3 = (__int64)&NewPlayer.Hp1;
    __int64 HpPtr4 = (__int64)&NewPlayer.Att2;
    __int64 HpPtr5 = (__int64)&NewPlayer.Name;
    __int64 HpPtr6 = (__int64)&NewPlayer.Name1;
    __int64 HpPtr7 = (__int64)&NewPlayer.Att3;
    __int64 HpPtr8 = (__int64)&NewPlayer.Name2;
    int Ex1Size = sizeof(NewEx1);

    int a = 0;
}


