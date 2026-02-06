#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int st=-1;
    int ed = -1;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==2){
            if(st==-1)
                st=i;
            else
                ed=i;

        }
    }
    
    if(st==-1){
        answer.push_back(-1);
    }else if(ed==-1){
        answer.push_back(2);
    }else{
        for(int i=st;i<=ed;i++)
            answer.push_back(arr[i]);
    }
    return answer;
}