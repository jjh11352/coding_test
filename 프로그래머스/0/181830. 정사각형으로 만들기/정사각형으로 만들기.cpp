#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int re=0;
    if(re=(arr.size() - arr[0].size()) == 0){
        return arr;
    }else if(arr.size() > arr[0].size()){
        int re=arr.size() - arr[0].size();
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<re;j++)
                arr[i].push_back(0);
        }
    }else {
        int re = arr[0].size() - arr.size();
        vector<int> arr1;
        for(int i=0;i<arr[0].size();i++)
            arr1.push_back(0);
        for(int i=0;i<re;i++)
            arr.push_back(arr1);
    }
    return arr;
}