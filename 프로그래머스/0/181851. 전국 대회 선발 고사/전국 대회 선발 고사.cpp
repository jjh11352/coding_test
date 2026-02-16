#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int j=1,i=0;
    while(i<3){
        if(attendance[distance(rank.begin(),find(rank.begin(), rank.end(),j))]==true){
            answer= answer*100 + distance(rank.begin(),find(rank.begin(), rank.end(),j));
            i++;
        }
            
        j++;
    }
    

    return answer;
}