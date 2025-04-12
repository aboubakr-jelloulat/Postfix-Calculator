#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


float MathOperation(float op1, float op2, char operat) 
{
    switch (operat) 
    {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        default:
            return 0;
    }
}


double   postfix_evaluate(string postfix)
{
    stack <double> stk;
    double  op2, op1, result = 0;

    for (int i = 0; i < postfix.length(); i++)
    {
        if (isdigit(postfix[i]))
            stk.push(postfix[i] - '0'); // Convert char to int check ascii table 
        
        else
        {
            op2 = stk.top();
            stk.pop();
        
            op1 = stk.top();
            stk.pop();

            result = MathOperation(op1, op2, postfix[i]);
            stk.push(result);
        }
    }
    return stk.top(); // store last result
}


int main(void)
{
    string  postfix = "382/+5-";

    cout << "Result : " << postfix_evaluate(postfix) << endl;

    return 0;
}

