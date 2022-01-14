

#include <iostream>

static int space = 32;

void StringTromRemove(const char* _Left, char* _Right)
{
	int Count_left = 0;
	int Count_right = 0;
	while (_Left[Count_left] != 0)
	{
		if (_Left[Count_left] != space)
		{
			_Right[Count_right] = _Left[Count_left];
			Count_right += 1;
		}
		Count_left += 1;
	}

}

int main()
{
	char Text[10000] = { ' '};

	StringTromRemove("a  a a    bbb    ccc  ddd", Text);

	printf_s(Text);

}


