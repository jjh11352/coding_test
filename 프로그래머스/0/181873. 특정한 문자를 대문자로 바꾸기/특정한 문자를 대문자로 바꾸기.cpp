#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for(int i=0;i<my_string.length();i++){
        if(alp[0] == my_string[i])
            my_string[i]=toupper(my_string[i]);
    }
    answer=my_string;
    return answer;
}