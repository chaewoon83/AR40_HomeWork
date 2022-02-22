#include "Head.h"
#include <conio.h>

Head::Head()
	:PrevKey(0)
{
}

Head::~Head() 
{
}


void Head::Update() 
{
	int Value = _getch();
	if (PrevKey == 0)
	{
		switch (Value)
		{
		case 'a':
		case 'A':
			// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
			InScreenMovement({ -1, 0 });
			PrevKey = Value;
			break;
		case 'd':
		case 'D':
			InScreenMovement({ 1, 0 });
			PrevKey = Value;
			break;
		case 'w':
		case 'W':
			InScreenMovement({ 0, -1 });
			PrevKey = Value;
			break;
		case 's':
		case 'S':
			InScreenMovement({ 0, 1 });
			PrevKey = Value;
			break;
		case 'q':
		case 'Q':
			// �������ΰ��� ��������
			// ������ ����ȴ�.
			Death();
			return;
		default:
			break;
		}
	}
	else
	{
		switch (PrevKey)
		{
		case 'a':
		case 'A':
			switch (Value)
			{
			case 'a':
			case 'A':
				// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
				InScreenMovement({ -1, 0 });
				PrevKey = Value;
				break;
			case 'w':
			case 'W':
				InScreenMovement({ 0, -1 });
				PrevKey = Value;
				break;
			case 's':
			case 'S':
				InScreenMovement({ 0, 1 });
				PrevKey = Value;
				break;
			case 'q':
			case 'Q':
				// �������ΰ��� ��������
				// ������ ����ȴ�.
				Death();
				return;
			default:
				break;
			}
			break;
		case 'd':
		case 'D':
			switch (Value)
			{
			case 'd':
			case 'D':
				InScreenMovement({ 1, 0 });
				PrevKey = Value;
				break;
			case 'w':
			case 'W':
				InScreenMovement({ 0, -1 });
				PrevKey = Value;
				break;
			case 's':
			case 'S':
				InScreenMovement({ 0, 1 });
				PrevKey = Value;
				break;
			case 'q':
			case 'Q':
				// �������ΰ��� ��������
				// ������ ����ȴ�.
				Death();
				return;
			default:
				break;
			}
			break;
		case 's':
		case 'S':
			switch (Value)
			{
			case 'a':
			case 'A':
				// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
				InScreenMovement({ -1, 0 });
				PrevKey = Value;
				break;
			case 'd':
			case 'D':
				InScreenMovement({ 1, 0 });
				PrevKey = Value;
				break;
			case 's':
			case 'S':
				InScreenMovement({ 0, 1 });
				PrevKey = Value;
				break;
			case 'q':
			case 'Q':
				// �������ΰ��� ��������
				// ������ ����ȴ�.
				Death();
				return;
			default:
				break;
			}
			break;
		case 'w':
		case 'W':
			switch (Value)
			{
			case 'a':
			case 'A':
				// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
				InScreenMovement({ -1, 0 });
				PrevKey = Value;
				break;
			case 'd':
			case 'D':
				InScreenMovement({ 1, 0 });
				PrevKey = Value;
				break;
			case 'w':
			case 'W':
				InScreenMovement({ 0, -1 });
				PrevKey = Value;
				break;
			case 'q':
			case 'Q':
				// �������ΰ��� ��������
				// ������ ����ȴ�.
				Death();
				return;
			default:
				break;
			}
			break;
		}
	}

	return;
}



void Head::OverLap(ConsoleObject* _Link)
{
	AllBody.push_back((Body*)_Link);
}