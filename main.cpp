#include <iostream>
#include "Expression.h"
using namespace std;

int main()
{
    Expression exp;
    Expression::list raw_list;
    Expression::list ns_list; // no space list
    exp.inicialize(&raw_list);

    cout << "Type your Expression:\n";
    char c;
    while (c = cin.get())
    {

        if (c == '\n')
            break;

        exp.insert(c, &raw_list);

        if (c != ' ')
            exp.insert(c, &ns_list);
    }
    exp.verify_expression(&raw_list, &ns_list);
}
