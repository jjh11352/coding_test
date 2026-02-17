#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int ed=0;
    int i=1;
    while(a.length()>=i || b.length()>=i){
        if(a.length()<i){
            answer = to_string((+(b[b.length()-i]-'0') + ed)%10) + answer;
            ed = ((b[b.length()-i]-'0') + ed)/10;
        }else if(b.length()<i){
            answer = to_string((+(a[a.length()-i]-'0') + ed)%10) + answer;
            ed = ((a[a.length()-i]-'0') + ed)/10;
        }else{
            answer = to_string(((a[a.length()-i]-'0') +(b[b.length()-i]-'0') + ed)%10) + answer;
            ed = ((a[a.length()-i]-'0') +(b[b.length()-i]-'0') + ed)/10;
        }              
        i++;
    }
    if(ed!=0)
        answer = to_string(ed) +answer;
    return answer;
}