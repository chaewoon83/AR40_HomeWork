﻿// GameArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

// 
class GameArray 
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize() 
    {
        return Size_;
    }

    DataType& operator[](int _Index) 
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);

        // 이걸 쉘로우 카피 
        // 혹은 얕은 복사라고 한다.
        //this->ArrData_ = _Other.ArrData_;
        //this->Size_ = _Other.Size_;

        // 이걸 딥 카피
        // 혹은 깊은 복사라고 한다.
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            ArrData_[i] = Data;
        }
    }


    inline void Release() 
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }
    void CopyArr(DataType* _Left, const DataType* _Right, int _Size)
    {
        for (size_t i = 0; i < _Size; i++)
        {
            _Left[i] = _Right[i];
        }
    }

    void ReSize(unsigned int _Size)
    {
        DataType* tempArrData = new DataType[Size_];

        if (Size_ >= _Size)
        {
            CopyArr(tempArrData, ArrData_, _Size);
        }
        if (Size_ < _Size)
        {
            CopyArr(tempArrData, ArrData_, Size_);
        }
        Release();
        ArrData_ = new DataType[_Size];
        Size_ = _Size;
        CopyArr(ArrData_, tempArrData, Size_);

    }

public:
    GameArray(unsigned int _Size)
        : ArrData_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    ~GameArray()
    {
        Release();
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameArray NewArray = GameArray(10);
    GameArray NewArray2 = GameArray(20);
    GameArray NewArray3 = GameArray(5);
    int Size = sizeof(GameArray);


    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        NewArray2[i] = 2*i;
    }

    //NewArray.AllValueSetting(0);

    //NewArray2 = NewArray;


    NewArray2.ReSize(10);

    for (size_t i = 0; i < NewArray2.GetSize(); i++)
    {
        std::cout << NewArray2[i] << std::endl;
    }

    NewArray2.ReSize(30);

    for (size_t i = 0; i < NewArray2.GetSize(); i++)
    {
        std::cout << NewArray2[i] << std::endl;
    }



    //int Arr[10];
    //int Arr2[10];

    //for (size_t i = 0; i < 10; i++)
    //{
    //    Arr[i] = Arr2[i];
    //}

    std::cout << "Hello World!\n";
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
