/**
 * The function isValid takes a string as input, 
 * which may contain three kinds of brackets: '(', ')', '{', '}', '[', ']'. 
 * A valid input should not contain any unmatched, extra or hanging brackets of any kind. 
 * And they must close in the correct order. 
 * Your function should ignore any characters other than these three types of brackets.
 * 
 * Example
 * "()[]{}!"       // valid
 * "([cs225)]"     // invalid
 **/

#include <string>
#include <stack>

using namespace std;

bool isValid(string input) {
    stack<char> s;
    for (char c : input) {
        if      (c == '{') {
            s.push('}');
        } else if (c == '[') {
            s.push(']');
        } else if (c == '(') {
            s.push(')');
        } else if (c=='}') {
            if (s.empty()) {
                return false;
            } else if (s.top()==c) {
                s.pop();
            } else {
                return false;
            }
        } else if (c==']') {
            if (s.empty()) {
                return false;
            } else if (s.top()==c) {
                s.pop();
            } else {
                return false;
            }
        } else if (c==')') {
            if (s.empty()) {
                return false;
            } else if (s.top()==c) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();   // modify this!
}