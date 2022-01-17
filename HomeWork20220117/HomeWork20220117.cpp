#include <iostream>

int StringLength(const char* Text)
{
	int Size = 0;
	while (Text[Size] != 0)
	{
		Size += 1;
	}
	return Size;
}

//_FindStr이 시작하는 위치 (0부터 찾기 시작)
int CountFirst(const char* _Text, int _Start,  const char* _FindStr)
{
	int TextSize = StringLength(_Text);
	int FindStrSize = StringLength(_FindStr);
	char temp[100] = { 0 };

	for (int i = _Start - 1; _Text[i] != 0; i += 1) 
	{
		for (int j = 0; j < FindStrSize; j += 1)
		{
			temp[j] = _Text[j+i];
		}
		if (strcmp(temp, _FindStr) == 0)
		{
			return i;
		}

	}
}
//_FindStr이 시작하는 위치 (마지막부터 찾기 시작)
int CountLast(const char* _Text, int End, const char* _FindStr)
{
    return 0;
}

int main()
{
    int Count = CountFirst("aaa eee ttt asdfasd", 0, "eee");
	int a = 0;
    int Count = CountLast("aaa eee ttt asdfasd", 50, "eee");
}
