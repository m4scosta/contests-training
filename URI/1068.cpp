#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string expr;
	stack<char> pilha;

	while(cin >> expr)
	{
		int correto = 1;
		
		while(!pilha.empty()) {
			pilha.pop();
		}
		
		for (int i = 0; i < expr.length(); ++i) {
			char c = expr[i];
			if (c == '(' || c == ')') {
				if (c == ')') {
					if (pilha.empty() || pilha.top() == ')') {
						correto = 0;
						break;
					} else {
						pilha.pop();
						continue;
					}
				}
				pilha.push(c);
			}
		}

		if (!correto || (!pilha.empty() && pilha.top() == '(')) {
			cout << "incorrect" << endl;
		} else {
			cout << "correct" << endl;
		}
	}

	return 0;
}