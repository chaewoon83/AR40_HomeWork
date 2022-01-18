

//void Heal(int _Hp) 
//{
//    _Hp += 10;
//}

void Heal(int* _Hp)
{
    *_Hp += 10;
}

// 

//int Heal(Image* _Hp)
//{
//    _Hp += 10;
//    return _Hp;
//}

int main()
{
    int PlayerHp = 0;

    int* Ptr = &PlayerHp;
    Heal(&PlayerHp);
    int a = 0;
}
