#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int st=0;
    while(my_string[st]==' '){
        st++;
    }
    int ed=my_string.length()-1;
    while(my_string[ed]==' '){
        ed--;
    }
    
    for(int i =st;i<=ed;i++){
        if(my_string[i]==' '){
            answer.push_back(my_string.substr(st,i-st));
            st=i;
            while(my_string[st]==' '){
                st++;
                i++;
            }
        }
    }
    answer.push_back(my_string.substr(st,ed-st+1));
    
    
    return answer;
}