#include "List.h"
#include <iostream>
#include <string>
#include "PRINT.h"
#include "BOOK.h"
using namespace std;
int SafeInput(bool strict)
{
	int result;
	while (!(cin >> result) || (cin.peek() != '\n') || (strict && result <= 0)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "Введите корректное число!" << endl;
	}
	cin.get();
	return result;
}
List::~List()
{
	if (beg!=0)
	{
		delete[] beg;
		beg = nullptr;
	}
}
List::List(int size)
{
	this->size = size;
	beg = new Obj*[size];
	pos = 0;
}
void List::pushB()
{
	Obj* p;
	cout << "1) PRINT\t2)BOOK\n";
	int ch = -1;
	while (ch<=0&&ch>=3)
	{
		ch = SafeInput(1);
		if (ch <= 0 && ch >= 3)
		{
			cout << "Введите корректное число!" << endl;
		}
	}
	if (ch == 1)
	{
		PRINT* tmp = new(PRINT);
		tmp->Input();
		p = tmp;
		if (pos < size)
		{
			beg[pos] = p;
			pos++;
			size++;
		}
		else
		{
			cout << "\nОшибка!\n";
			return;
		}
	}
	else
	{
		BOOK* tmp = new(BOOK);
		tmp->Input();
		p = tmp;
		if (pos < size)
		{
			beg[pos] = p;
			pos++;
			size++;
		}
		else
		{
			cout << "\nОшибка!\n";
			return;
		}
	}
}
void List::show()
{
	if (size==0)
	{
		cout << "\nСписок пуст!\n";
	}
	else
	{
		Obj** tmp = beg;
		for (int i = 0; i < size; i++)
		{
			(*tmp)->Show();
			tmp++;
		}
	}
}
void List::del()
{
	if (size==0)
	{
		cout << "\nСписок пуст!\n";
	}
	pos--;
}
