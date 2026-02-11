#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer=0;
    while(true){
        int re = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=50 && arr[i]%2==0){
                arr[i]/=2;
                re=0;
            }
            else if(arr[i]<50 && arr[i]%2==1){
                arr[i] = arr[i]*2 +1;
                re=0;
            }  
        }
        
        if(re==1)
            break;
        
        answer++;
    }
    return answer;
}