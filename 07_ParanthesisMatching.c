#include "06_StackLinkedList.c"
#include <string.h>

int is_Paranthesis_Balanced(char exp[])
{
    int len = strlen(exp);
    struct stack *S = create_stack();

    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '(')
        {
            push(S, exp[i]);
        }
        if (exp[i] == ')')
        {
            if (!isEmpty(S))
            {
                pop(S);
            }
            else
            {
                return 0;
            }
        }
    }

    if (isEmpty(S))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_Multiple_Paranthesis_Balanced(char exp[])
{
    int len = strlen(exp);
    struct stack *S = create_stack();

    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(S, exp[i]);
        }
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (!isEmpty(S))
            {
                if (exp[i] == ')')
                {
                    if (peek(S, 1) == '(')
                    {
                        pop(S);
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (exp[i] == '}')
                {
                    if (peek(S, 1) == '{')
                    {
                        pop(S);
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (exp[i] == ']')
                {
                    if (peek(S, 1) == '[')
                    {
                        pop(S);
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else
            {
                return 0;
            }
        }
    }
    if (isEmpty(S))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    char *exp = "{(3+ 3) - 4(5*6) +()";

    if (!is_Multiple_Paranthesis_Balanced(exp))
    {
        printf("Not Perfect");
    }
    else
    {
        printf("Perfect");
    }

    return 0;
}
