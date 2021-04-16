#include <iostream>
#include <string>
#include "PRINT.h"
#include "BOOK.h"
using namespace std;
int main()
{
    system("chcp 1251>nul");
	
    PRINT* A = new PRINT;
    A->Input();
    A->Show();

    BOOK* B = new BOOK;
    B->Input();
    B->Show();
    return 0;
}

