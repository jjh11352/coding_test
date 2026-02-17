#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    //vector<vector<int>> answer(n, vector<int>(n));
    vector<string> answer;
    for(int i=0;i<picture.size();i++){
        string newRow = "";
        for(int j=0;j<picture[i].length();j++){
            int re=0;
            while(re<k){
                newRow+=picture[i][j];
                re++;
            }
        }
        int re=0;
            while(re<k){
                answer.push_back(newRow);
                re++;
            }
    }
    return answer;
}