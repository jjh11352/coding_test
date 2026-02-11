#include <string>
#include <vector>
#include <cctype> 

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    if (myString.length() < pat.length())
        return 0;
    
    for(int i=0;i<=myString.length()-pat.length();i++){
        answer =1;
        for(int j=0;j<pat.length();j++){
            
            if(toupper(myString[i+j])!=toupper(pat[j])){
                answer = 0;
                break;
            }
        }
        
        if(answer == 1)
            break;
    }
    return answer;
}