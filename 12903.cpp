#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int quotient = s.length() / 2;
    int remainder = s.length() % 2;
    if (remainder == 1){
        answer.push_back(s[quotient]);
    } else {
        answer.push_back(s[quotient-1]);
        answer.push_back(s[quotient]);
}
    return answer;
}