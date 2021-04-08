#pragma once
class Obj
{
public:
	Obj();
	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual ~Obj();
};

