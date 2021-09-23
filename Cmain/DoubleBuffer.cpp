#include "DoubleBuffer.h"

void DoubleBuffer::InitBuffer()
{
	//���� ��ũ�� �ε����� 0
	screenIndex = 0;
	//ȭ��ũ�� x = BufferWidth, y = BufferHeight
	COORD size = { BufferWidth, BufferHeight };
	//���� : 0, ���� : 0, ������ : BufferWidth - 1, �Ʒ��� : BufferHeight - 1
	SMALL_RECT rect = { 0,0,BufferWidth - 1, BufferHeight - 1 };

	//0�� ���� �����
	hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//0�� ���� ������ ����
	SetConsoleScreenBufferSize(hBuffer[0], size);
	//0�� ���� ���� ������
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);

	//1�� ���� �����
	hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//1�� ���� ������ ����
	SetConsoleScreenBufferSize(hBuffer[1], size);
	//1�� ���� ���� ������
	SetConsoleWindowInfo(hBuffer[1], TRUE, &rect);

	//Ŀ�� ���� ��� -> ���ڱ��� �Ÿ��� Ŀ�� �Ⱥ��̰�
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	//0 & 1�� ���� Ŀ�� ���� ���
	SetConsoleCursorInfo(hBuffer[0], &info);
	SetConsoleCursorInfo(hBuffer[1], &info);
}

void DoubleBuffer::FlipBuffer()
{
	//�ش� ���� Ȱ��ȭ
	SetConsoleActiveScreenBuffer(hBuffer[screenIndex]);

	//0->1 // 1->0
	screenIndex = !screenIndex;
}

void DoubleBuffer::ClearBuffer()
{
	//������ġ
	COORD pos = { 0,0 };
	DWORD dw;

	//ȭ���� ' ' ä��
	FillConsoleOutputCharacter(hBuffer[screenIndex], ' ', BufferWidth * BufferHeight, pos, &dw);
}

void DoubleBuffer::WriteBuffer(int x, int y, const char* shape, int color)
{
	//pos.X = x * 2, pos.y = y;
	COORD pos = { x * 2, y };
	DWORD dw;

	//Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(hBuffer[screenIndex], pos);
	//���� �ٲٱ�
	SetConsoleTextAttribute(hBuffer[screenIndex], color);
	//�ش���ۿ� ����
	WriteFile(hBuffer[screenIndex], shape, strlen(shape), &dw, NULL);
}

void DoubleBuffer::DestroyBuffer()
{
	//���� ����
	CloseHandle(hBuffer[0]);
	CloseHandle(hBuffer[1]);
}
