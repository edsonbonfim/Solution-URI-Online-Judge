#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    stack <char> s;
    int i;
    int k;
    char input[10000];
    
    while (scanf("%s", input) != EOF)
    {
        for (i = 0; input[i] != '\0'; i++)
        {
            if (s.empty() && input[i] == ')')
            {
                s.push('(');
                break;
            }

            if (input[i] == '(')
                s.push('(');

            if (input[i] == ')')
                s.pop();
        }

        if (s.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
        
        while (!s.empty())
            s.pop();
    }

    return 0;
}
