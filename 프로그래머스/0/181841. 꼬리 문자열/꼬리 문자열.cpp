#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(int i=0;i<str_list.size();i++){
        if(ex.length()<=str_list[i].length()){
            int re=1;
            for(int j=0;j<=str_list[i].length()-ex.length();j++){
                if(ex ==  str_list[i].substr(j, ex.length())){
                    re=0;
                    break;
                }       
            }
            
            if(re==0)
                continue;
        }
        
        answer += str_list[i];
    }
    return answer;
}