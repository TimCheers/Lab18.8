#pragma once
#include "Obj.h"
class List
{
public:
	List(int size);
	~List();
	void pushB();
	void pushB(Obj* p);
	void del();
	void show();
	int sizeList() { return size; }
private:
	int size;
	Obj** beg;
	int pos;
};

