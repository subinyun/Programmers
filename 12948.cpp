#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for (int i = 0; i < phone_number.length(); i ++) {
        if ( (phone_number.length() - i) < 5) {
            answer.push_back(phone_number[i]);
        } else {
            answer.push_back('*');
        }
    }
    return answer;
}