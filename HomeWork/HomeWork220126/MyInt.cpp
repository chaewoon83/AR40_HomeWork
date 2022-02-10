#include "MyInt.h"


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
