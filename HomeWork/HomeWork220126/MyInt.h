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
    MyInt& operator++ ();
    //복사생성자
    MyInt& operator= (const MyInt& _Other);

    MyInt(int _Value);
};


