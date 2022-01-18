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

	if (FindStrSize > TextSize)
	{
		return -1;
	}
	if (_Start > TextSize)
	{
		return -1;
	}

	for (int i = _Start; _Text[i] != 0; i += 1) 
	{
		for (int j = 0; j < FindStrSize; j += 1)
		{
			temp[j] = _Text[j+i];
		}
		if (strcmp(temp, _FindStr) == 0)
		{
			return  i - _Start + 1;
		}

	}
	return -1;
}
//_FindStr이 시작하는 위치 (마지막부터 찾기 시작)
int CountLast(const char* _Text, int _End, const char* _FindStr)
{
	int TextSize = StringLength(_Text);
	int FindStrSize = StringLength(_FindStr);
	int End = 0;
	char temp[100] = { 0 };

	if (FindStrSize > TextSize)
	{
		return -1;
	}
	if (_End > TextSize - FindStrSize)
	{
		End = TextSize -1;
	}
	else
	{
		End = _End - 1;
	}

	for (int i = End; _Text[i] != 0; i -= 1)
	{
		for (int j = 0; j < FindStrSize && j + i < TextSize; j += 1)
		{
			temp[j] = _Text[j + i];
		}
		if (strcmp(temp, _FindStr) == 0)
		{
			return End - i + 1;
		}

	}
	return -1;
}

int main()
{
    int Count = CountFirst("aaa eee ttt asdfasd", 0, "eee");
	int Count2 = CountFirst("aaa eee ttt asdfasd", 3, "eee");
    int Count3 = CountLast("aaa eee ttt asdfasd", 10, "eee");
	int Count4 = CountLast("aaa eee ttt asdfasd", 1013, "eee");
	int Count5 = CountLast("aaa ee ttt asdfasd", 1013, "eee");
	int Count6 = CountLast("aaa ee ttt asdfasd", 1013, "as");
	int Count7 = CountLast("abcd efg hijk", 7, "c");
	int a = 0;
}
