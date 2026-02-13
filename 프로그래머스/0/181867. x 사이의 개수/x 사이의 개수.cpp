#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int re=0;
    for(int i=0;i<myString.length();i++){
        if(myString[i]=='x'){
            answer.push_back(re);
            re=0;
        }else{
            re++;
        }
    }
    answer.push_back(re);
    return answer;
}