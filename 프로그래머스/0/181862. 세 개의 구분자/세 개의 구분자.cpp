#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    int st=0;
    while(st!=myStr.length() && (myStr[st]=='a'||myStr[st]=='b'|| myStr[st]=='c')){
        st++;
    }
    
    for(int i=st;i<myStr.length();i++){
        if(myStr[i]=='a'||myStr[i]=='b'||myStr[i]=='c'){
            answer.push_back(myStr.substr(st,i-st));
            
            st=++i;

            while(st!=myStr.length()){
                if(myStr[st]!='a'&&myStr[st]!='b'&&myStr[st]!='c')
                    break;
                st++;
                i++;
            }
            
        }
    }
    if(myStr[myStr.length()-1]!='a'&& myStr[myStr.length()-1]!='b'&& myStr[myStr.length()-1]!='c'){
        answer.push_back(myStr.substr(st,myStr.length()-st)); 
    }

    if(answer.size()==0)
        answer.push_back("EMPTY");
    return answer;
}