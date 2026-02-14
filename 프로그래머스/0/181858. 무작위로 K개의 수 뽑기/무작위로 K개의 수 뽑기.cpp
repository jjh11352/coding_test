#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i=0;i<arr.size();i++){
        if( find(answer.begin(),answer.end(),arr[i]) == answer.end() )
            answer.push_back(arr[i]);
    }
    
    //sort(answer.begin(), answer.end());
    if(k>answer.size()){
        for(int i=answer.size();i<k;i++)
            answer.push_back(-1);
    }else if(k<answer.size()){
        for(int i=answer.size()-1;i>=k;i--)
            answer.pop_back();
    }
    return answer;
}