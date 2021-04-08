#include "BOOK.h"
#include <iostream>
#include <string>
using namespace std;
BOOK::BOOK()
{
	quanP = 0;
	Group = 0;
	publish = "";
}
BOOK::BOOK(int quanP, int Group, string publish, string name, string author) :PRINT(name, author)
{
	this->quanP = quanP;
	this->Group = Group;
	this->publish = publish;
}
BOOK::BOOK(const BOOK& other)
{
	this->name = other.name;
	this->author = other.author;
	this->quanP = other.quanP;
	this->Group = other.Group;
	this->publish = other.publish;
}