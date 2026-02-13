#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int a,b,st=0;
    string op;
    for(int i=0;i<3;i++){
        if(i==0){
            a = stoi(binomial.substr(st , binomial.find(' ',st)-st));
            st = binomial.find(' ',st)+1;
        }else if(i==1){
            op = binomial.substr(st , binomial.find(' ',st)-st);
            st = binomial.find(' ',st)+1;
        }
            
        else
            b = stoi(binomial.substr(st , binomial.find(' ',st)-st));
    }
    
    switch(op[0]){
        case '+':
            answer =a+b;
            break;
        case '-':
            answer =a-b;
            break;
        case '*':
            answer =a*b;
            break;
    }
    
    //python 에는 eval() 가 있어서 바로 할 수 있는데...
    return answer;
}