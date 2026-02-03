#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for(int i=0;i<my_string.length();i++){
        answer.push_back(my_string.substr(i,my_string.length()-i));
    }
    int n = sizeof(answer) / sizeof(answer[0]);
    sort(answer.begin(),answer.end());
    return answer;
}