#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    int k;
    for(k=1;k<=n;k++){
        answer[0][k-1] = k;
    }
    int j=k-2;
    int i = 0;
    int dir = 1;

    while(k<=n*n){
        switch(dir){
            case 1:
                if(i==answer.size()-1 || answer[i+1][j]!=0){
                    dir++;
                    continue;
                }else{
                    i++;
                    answer[i][j]=k;
                    break;
                }
            case 2:
                if(j==0 || answer[i][j-1]!=0){
                    dir++;
                    continue;
                }else{
                    j--;
                    answer[i][j]=k;
                    break;
                }
            case 3:
                if(i==0 || answer[i-1][j]!=0){
                    dir++;
                    continue;
                }else{
                    i--;
                    answer[i][j]=k;
                    break;
                }
            case 4:
                if(j==answer[0].size()-1 || answer[i][j+1] != 0){
                    dir=1;
                    continue;
                }else{
                    j++;
                    answer[i][j]=k;
                    break;
                }
            
        }
        k++;
        
        
    }
    return answer;
}