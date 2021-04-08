#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "PRINT.h"
class BOOK :public PRINT
{
public:
	BOOK();
	BOOK(int quanP, int Group, string publish, string name, string author);
	BOOK(const BOOK& other);
	int get_quantity() { return quanP; }
	int get_Group() { return Group; }
	string get_publish() { return publish; }
	void set_quantity(int quanP) { this->quanP = quanP; }
	void set_Group(int Group) { this->Group = Group; }
	void set_publish(string publish) { this->publish = publish; }
	BOOK& operator = (const BOOK& other);
private:
	int quanP;
	int Group;
	string publish;
};

