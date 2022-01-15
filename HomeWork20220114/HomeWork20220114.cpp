// HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>


int StringLength(const char* Text)
{
	int Size = 0;
	while (Text[Size] != 0)
	{
		Size += 1;
	}
	return Size;
}

void Replace(const char* _Source ,const char* _Left, const char* _Right)
{
	int LeftLength = StringLength(_Left);
	int RightLength = StringLength(_Right);

}


void ToUpper(const char* _Left, char* _Right)
{
	int Count = 0;
	int Num = 0;
	while (_Left[Count] != 0)
	{

		if (97 <= _Left[Count] && _Left[Count] <= 122)
		{
			_Right[Count] = _Left[Count] - 32;
		}
		else
		{
			_Right[Count] = _Left[Count];
		}

		Count += 1;
	}
}

// 좀 어려울거다.
int Result = 0;
	int ToInt(const char* _Left)
{
	
	for ( int i = 0; _Left[i] != 0; i += 1)
	{
		if (i != 0)
		{
			Result *= 10;
		}
		Result += _Left[i] -48;
	}
	return Result;
}

// 좀 어려울거다.
void CharChange(char* _Text, char _Prev, char _Next)
{
	for (int i = 0; _Text[i] != 0; i += 1)
	{
		if (_Text[i] == _Prev)
		{
			_Text[i] = _Next;
		}
	}
}

void Rervers(const char* _Source, char* _Result)
{
	int SourceCount = StringLength(_Source) -1;
	int ResultCount = 0;
	while (SourceCount >= 0)
	{
		_Result[ResultCount] = _Source[SourceCount];
		ResultCount += 1;
		SourceCount -= 1;
	}
}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{

}

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int TextOriCount = 0;
	char TextOriginal[3000] = {};
	strcpy_s(TextOriginal, _Text);
	int TextCount = 0;
	int PrevLength = StringLength(_Prev);
	int NextLength = StringLength(_Next);
	char CompareInstance[100] = {};
	int Lengthdiff = NextLength - PrevLength;
	int TextLength = StringLength(_Text);
	int sametimes = 0;
	while (TextOriginal[TextOriCount] != 0)
	{
		for (int InstanceCount = 0; InstanceCount < PrevLength ; InstanceCount += 1)
		{
			if (TextOriCount + InstanceCount > TextLength)
			{
				CompareInstance[InstanceCount] = 0;
			}
			CompareInstance[InstanceCount] = TextOriginal[TextOriCount + InstanceCount];
		}
		if (strcmp(CompareInstance, _Prev) == 0)
		{
			sametimes += 1;
			TextLength += Lengthdiff;
			for (int i = 0; i < TextLength; i += 1)
			{
				int k = 0;
				if (TextCount <= i && i < TextCount + NextLength)
				{
					_Text[i] = _Next[k];
					k += 1;
				}
				else if (TextCount + NextLength <= i)
				{
					_Text[i] = TextOriginal[i-sametimes*Lengthdiff];
				}
			}
			TextOriCount += PrevLength - 1;
			TextCount += Lengthdiff + PrevLength - 1 ;
		}
		TextCount += 1;
		TextOriCount += 1;
		printf_s("%c\n", _Text[TextCount]);
		printf_s("%c\n",TextOriginal[TextOriCount]);
		int a = 0;
	}
}
//+		_Text	        0x00000052831ff560 "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds"	char *
//+		TextOriginal	0x00000052831fdea0 "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds"	char[3000]


int main()
{

	{
		//a 97 b 98 z 122 A 65 B 66
		char single = 'z';
		char single2 = 'Z';
		char Text[100] = {0};

		ToUpper("pP1231dcwsec", Text);
		//      "12ABCCEEE"
		printf_s(Text);
		printf_s("\n");

	}

	{
		char Text[100] = {0};

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"

		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text = '1';
		int Count = '2';

		int Value = ToInt("15815");
		printf_s("%d", Value);
		printf_s("\n");
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text[100] = { 0 };
		Rervers("0123456789", Text);
		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text[100] = { 0 };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		printf_s(Text);
		printf_s("\n");
		//??? '2' 랑 '7'을 찾은 후 그 사이의 값을 써야하는건지
		//아니면 2번째 7번째 사이의 값을 써야하는건지
	}

	{
		// 이건 질문 안하셔도 됩니다.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		printf_s(Text);
		printf_s("\n");
	}

}


