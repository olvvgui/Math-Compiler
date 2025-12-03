#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

class Expression
{

public:
    typedef struct node
    {
        char val;

        struct node *next;
    } node;

    typedef struct
    {
        node *first;
        node *last;
        int size;
    } list;

    void inicialize(list *l);
    void insert(char exp, list *l);
    void compile();
    bool verify_expression(list *l, list *no_space_list);

    bool isOperator(char op);
};

#endif