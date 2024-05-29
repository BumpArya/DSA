#include "06_StackLinkedList.c"
#include <string.h>

int isOperator(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        return 1;
    }
    return 0;
}

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }

    return 0;
}

char *InfixToPostfix(char exp[])
{
    int len = strlen(exp);
    struct stack *s = create_stack();
    char *PostFix = (char *)malloc((len + 1) * sizeof(char));

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (isOperator(exp[i]))
        {
            if (isEmpty(s))
            {
                push(s, exp[i]);
            }
            else
            {
                while (precedence(peek(s, 1)) >= precedence(exp[i]))
                {
                    PostFix[j] = pop(s);
                    j++;
                }
                push(s, exp[i]);
            }
        }
        else
        {
            PostFix[j] = exp[i];
            j++;
        }
    }
    while (!isEmpty(s))
    {
        PostFix[j] = pop(s);
        j++;
    }
    return PostFix;
}

int main()
{
    char exp[] = "x+y*z-k";
    printf("%s", InfixToPostfix(exp));
    return 0;
}
