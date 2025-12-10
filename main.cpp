#include <iostream>
#include "Expression.h"
using namespace std;

int main()
{
    Expression exp;
    Expression::queue raw_queue;
    Expression::queue ns_queue; // no space queue
    Expression::queue posfix;
    exp.inicialize_queue(&raw_queue);
    exp.inicialize_queue(&ns_queue);
    exp.inicialize_queue(&posfix);

    // system("clear");

    cout << "Example of a valid expression\n(-4) + 3 * 5^4 * (3/4)\n\n";
    cout << "Type your Expression:\n";

    while (true)
    {
        char c = cin.get();

        if (c == '\n')
            break;

        exp.enqueue(c, &raw_queue);

        if (c != ' ')
            exp.enqueue(c, &ns_queue);
    }
    if (!exp.verify_expression(&raw_queue, &ns_queue))
    {
        cout << "false";
        return 1;
    }



    exp.infix_to_posfix(&ns_queue, &posfix);

    exp.print(&ns_queue, &posfix);
}
