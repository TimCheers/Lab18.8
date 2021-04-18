#include <iostream>
#include <string>
#include "PRINT.h"
#include "BOOK.h"
#include "List.h"
#include "Dialog.h"
using namespace std;
int main()
{
    system("chcp 1251>nul");
    /*PRINT* A = new PRINT;
    A->Input();
    BOOK* B = new BOOK;
    B->Input();
    
    List l(2);
    Obj* p = A;
    l.pushB(p);
    p = B;
    l.pushB(p);
    l.show();
    l.del();
    cout << "\n---------------------------------------------------------\n";
    cout << "\nsize: " << l.sizeList();
    cout << "\n---------------------------------------------------------\n";*/
    Dialog D(2);
    D.Execute();
    return 0;
}

