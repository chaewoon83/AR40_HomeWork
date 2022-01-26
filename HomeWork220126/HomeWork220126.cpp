// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt 
{
public:
    int Value;

public:
    //posfix
    MyInt operator++ (int);
    //prefix
    MyInt&operator++ ();
    //복사생성자
    MyInt& operator= (const MyInt& _Other);

    MyInt(int _Value);
};

int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;
    MyInt MyResult = 0;

    // ++ 쓰지마세요
    MyResult = MyValue++;
    MyResult = 0;
    MyValue = 0;
    MyResult = ++MyValue;
    int a = 0;
}

MyInt MyInt::operator++(int)
{
    //++Value;
    MyInt tempMyInt = *this;
    this->Value += 1;
    return tempMyInt;
};

MyInt& MyInt::operator++()
{
    //Value++;
    Value += 1;
    return *this;
};

MyInt& MyInt::operator=(const MyInt& _Other)
{
    Value = _Other.Value;
    return *this;
};

MyInt::MyInt(int _Value)
        :Value(_Value)
{

};



