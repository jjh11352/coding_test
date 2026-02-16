#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 1;
    int arr[31] = {0};
    for(int i=0;i<strArr.size();i++){
        arr[strArr[i].size()]++;
    }
    
    for(int i=1;i<=30;i++){
        if(answer<arr[i])
            answer=arr[i];
    }
    return answer;
}