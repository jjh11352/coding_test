#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    for(int i=0;i<answer.length();i++)
        answer[i]+=49;
    return answer;
}