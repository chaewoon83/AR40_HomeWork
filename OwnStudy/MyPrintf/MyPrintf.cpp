// MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void VarTest(const char* Value1, int Value2, int Value3, const char* Value4, int Value5)
{
    __int64 Adress1 = (__int64)&Value1;
    __int64 Adress2 = (__int64)&Value2;
    __int64 Adress3 = (__int64)&Value3;
    __int64 Adress4 = (__int64)&Value4;
    __int64 Adress5 = (__int64)&Value5;
}

void MyPrint_f(const char* const _Text, ... )
{
    char* Ptr = (char*)&_Text;
    int Count = 0;
    Ptr += 8;
    while (_Text[Count] != 0)
    {
        if (_Text[Count] == '%')
        {

            if (_Text[Count + 1] == 'd')
            {
                char tempArr[30] = {};
                int* tempPtr = (int*) Ptr;
                _itoa_s(*tempPtr, tempArr, 10);
                int ifCount = 0;
                while (tempArr[ifCount] != 0)
                {
                    putchar(tempArr[ifCount]);
                    ifCount += 1;
                }
            }
            if (_Text[Count + 1] == 's')
            {
                char** tempPtr = (char**)(__int64)Ptr;
                char* tempPtrPtr = *tempPtr;
                int ifCount = 0;
                while (tempPtrPtr[ifCount] != 0)
                {
                    putchar(tempPtrPtr[ifCount]);
                    ifCount += 1;
                }
            }
            Count += 2;
        }
        else
        {
            putchar(_Text[Count]);
            Count += 1;
        }

    }
}

int main()
{
    int a = 0;
    char ex[8] = "ABCDEFG";
    VarTest("ASDASDSADasddfasd", 10, 20, "aqwerqwerqwer", 40);
    MyPrint_f("%s 12345", "qweqweqweqwr");

    
}
