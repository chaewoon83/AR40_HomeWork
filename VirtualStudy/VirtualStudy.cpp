// 69Virtual.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit
{
protected:
    int Hp;
    int Att;
    int Def;
    int Barriar;

public:
    virtual int GetCalAtt()
    {
        return Att;
    }

    void Damage(FightUnit* _FightUnit)
    {
        // 같은 자료형은 내부에서 public으로 동작하게 됩니다.
        int CurAtt = _FightUnit->GetCalAtt();
        CurAtt -= Def;
    }

public:
    FightUnit()
        : Hp(100)
        , Att(10)
    {

    }
};

class Player : public FightUnit
{
public:
    int Lv;


    // 나는 부모의 함수를 재구현 했다.
    int GetCalAtt()
    {
        return Lv;
    }


};

class Monster : public FightUnit
{
public:
    virtual void Cry()
    {
        std::cout << "저는 몬스터입니다." << std::endl;
    }
};

class Orc : public Monster
{
    void Cry() override
    {
        std::cout << "꾸웨웩" << std::endl;
    }
};

class Dragon : public Monster
{
    void Cry() override
    {
        std::cout << "으아아아" << std::endl;
    }
};

int main()
{
    FightUnit* FightPtr;

    // Monster* NewMonster = new Dragon();

    Monster* NewMonsters[1000];

    NewMonsters[0] = new Dragon();
    NewMonsters[1] = new Orc();

    NewMonsters[0]->Cry();


    Player* PlayerPtr;

    Player NewPlayer;
    Monster NewMonster;

    NewMonster.Damage(&NewPlayer);

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
