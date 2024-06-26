#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<string> spelled = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"}; 

    string conversion_string1;
    string conversion_string2; 

    char operation;

    cout << "Enter two values: \n";
    cin >> conversion_string1;
    cin >> conversion_string2;

    int index1 = -1;
    int index2 = -1;

    // Convert first input
    for(int i = 0; i < spelled.size(); i++){
        if(spelled.at(i) == conversion_string1){
            index1 = i;
            break;
        }
    }
    if(index1 == -1) {
        stringstream geek(conversion_string1); 
        geek >> index1;
    }

    // Convert second input
    for(int i = 0; i < spelled.size(); i++){
        if(spelled.at(i) == conversion_string2){
            index2 = i;
            break;
        }
    }
    if(index2 == -1) {
        stringstream geek(conversion_string2); 
        geek >> index2;
    }

    cout << "What operation ('+', '-', '*', '/') \n";
    cin >> operation; 

    switch(operation){
        case '+':
            cout << index1 + index2; 
            break;
        case '-':
            cout << index1 - index2; 
            break;
        case '*':
            cout << index1 * index2; 
            break;
        case '/':
            if(index2 != 0) {
                cout << index1 / index2; 
            } else {
                cout << "Error: Division by zero";
            }
            break;
        default:
            cout << "Error: Unknown operation";
            break;
    }

    return 0;
}
