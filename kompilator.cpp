#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_map<string, stack<string>> variables; // map of stack where key is the variable and the value is the types it has been declared as
    stack<unordered_map<string, string>> scope; // keeps track of this scope
    unordered_map<string, string> new_map;
    scope.push(new_map);



    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        if (command == "{") {
            unordered_map<string, string> new_map;
            scope.push(new_map);
        } else if (command == "}") {

            for (auto& it : scope.top()) {
                variables[it.first].pop();
            }
            scope.pop();
        } else if (command == "TYPEOF") {
            string variable;
            cin >> variable;
            if (variables[variable].empty()) {
                cout << "UNDECLARED"
                     << "\n";
            } else {
                cout << variables[variable].top() << "\n";
            }
        } else if (command == "DECLARE") {
            string variable, type;
            cin >> variable;
            cin >> type;
            if (scope.top()[variable].empty()) {
                variables[variable].push(type);
                scope.top()[variable] = type;
            } else {
                cout << "MULTIPLE DECLARATION"
                     << "\n";
                break;
            }
        }
    }
}
