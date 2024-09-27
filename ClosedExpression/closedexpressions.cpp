//
//  closedexpressions.cpp
//  All Libraries
//
//  Created by Caden Finley on 10/4/23.
//
#include <iostream>
#include <string>
#include "p2stack2.h"
using namespace std;
bool checkExpression(const string expression) {
    Stack<char> st;
    for (char ch : expression) {
        if (ch == '(' || ch == '[') {
            st.push(ch);
        } 
        else if (ch == ')' || ch == ']') {
            if (st.isEmpty()) {
                return false;
            } 
            else {
                char top = st.pop();
                if ((ch == ')' && top != '(') || (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
    }
    return st.isEmpty();
}
void printHelloWorld(){
    
}
int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;
    if (checkExpression(expression)) {
        cout << "The expression " << expression << " is well-formed." << endl;
    } else {
        cout << "The expression "<< expression << " is not well-formed." << endl;
    }
}


