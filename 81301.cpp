#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str = "";
    
    vector<string> number{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // print out number
    // for (int i = 0; i < number.size(); i++) {
    //     cout << number.at(i) << endl;
    // }
    
    for (int i = 0; i < s.length(); i++) {
        // ASCII 65
        if (s[i] < 'A') {
            str.push_back(s[i]);
        }
        else if (s[i] == 'z') {
            str.push_back('0');
        }
        else if ((s[i] == 'o') && (s[i+1] == 'n')){
            str.push_back('1');
        }
        else if ((s[i] == 't') && (s[i+1] == 'w')){
            str.push_back('2');
        }
        else if ((s[i] == 't') && (s[i+1] == 'h')){
            str.push_back('3');
        }
        else if ((s[i] == 'f') && (s[i+1] == 'o')){
            str.push_back('4');
        }
        else if ((s[i] == 'f') && (s[i+1] == 'i')){
            str.push_back('5');
        }
        else if ((s[i] == 's') && (s[i+1] == 'i')){
            str.push_back('6');
        }
        else if ((s[i] == 's') && (s[i+1] == 'e')){
            str.push_back('7');
        }
        else if ((s[i] == 'e') && (s[i+1] == 'i')){
            str.push_back('8');
        }
        else if ((s[i] == 'n') && (s[i+1] == 'i')){
            str.push_back('9');
        }
    }
//         for (int j = 0; j < number.size(); j++) {
//             // number.at(j) // "one"
//             for (int k = 0; k < (number.at(j)).size(); k++) {
//                 // cout << number.at(j)[k] << endl; // z, e, r, o
//                 // cout << j << endl;
//                 // if ((s[i] == (number.at(j))[k]) && (s[i-1] == (number.at(j))[k-1])) {
//                 //     str.push_back(j);
//                 // } else if ((s[i] == (number.at(j))[k]) && (s[i+1] == (number.at(j))[k+1])) {
//                 //     str.push_back(j);
//                 // }
                
//             }
//         }
    
    // cout << stoi(str) << endl;
    answer = stoi(str);
    
    return answer;
}