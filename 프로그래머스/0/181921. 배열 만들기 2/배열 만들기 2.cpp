#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int i = 0;
    while(true){
        i++;
        int num = stoi(bitset<8>(i).to_string())*5;
        if(l>num)
            continue;
        else if(num>r)
            break;
        else
            answer.push_back(num);
    }
    if(answer.size()==0)
        answer.push_back(-1);
    return answer;
}