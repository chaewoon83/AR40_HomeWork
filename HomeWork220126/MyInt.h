// HomeWork220126.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
    //���������
    MyInt& operator= (const MyInt& _Other);

    MyInt(int _Value);
};


