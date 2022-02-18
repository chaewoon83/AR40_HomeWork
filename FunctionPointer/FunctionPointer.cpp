// 70FunctionSize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test
{
public:
    void FunctionFalse()
    {
        std::cout << "거짓" << std::endl;
    }

    virtual void FunctionTrue()
    {
        std::cout << "참" << std::endl;
    }
};

class ExChild : public Test
{
public:
    void FunctionTrue() override
    {
        std::cout << "참참" << std::endl;
    }
};

void TestGlobalFunctionFalse()
{
    std::cout << "실패" << std::endl;
}

void TestGlobalFunctionTrue()
{
    std::cout << "성공" << std::endl;
}

class Button
{
public:
    void(*FPtr)();


    // 버튼이 눌렸을때 이게 호출될거야.
    void Click()
    {
        FPtr();
    }
};

int main()
{
    {
        // 함수의 정의처럼 보인다.
        void(*FPtr)() = nullptr;

        bool Check = false;

        if (true == Check)
        {
            FPtr = &TestGlobalFunctionTrue;
        }
        else {
            FPtr = &TestGlobalFunctionFalse;
        }

        (*FPtr)();
    }

    {
        Test NewTest;

        void(Test:: * FPtr)() = nullptr;

        bool Check = false;

        if (true == Check)
        {
            FPtr = &Test::FunctionTrue;
        }
        else {
            FPtr = &Test::FunctionFalse;
        }

        (&NewTest->*FPtr)();

        // function();
    }

    std::cout << sizeof(Test);
    std::cout << sizeof(Button);
    std::cout << sizeof(ExChild);
    int a = 0;
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
