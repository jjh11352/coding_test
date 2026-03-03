#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> arr1(1001);
    for(int i=0;i<array.size();i++){
        arr1[array[i]]++;
    }
    
    int num = 0;
    for(int i=0;i<arr1.size();i++){
        if(num<arr1[i]){
            answer = i;
            num = arr1[i];
        }else if(num==arr1[i]){
            answer = -1;
        }
    }
    return answer;
}