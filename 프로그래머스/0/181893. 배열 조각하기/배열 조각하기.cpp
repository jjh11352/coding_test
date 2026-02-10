#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
        for (int i = 0; i < query.size(); i++) {
        int q = query[i];

        if (q < 0 || q >= arr.size()) continue;

        if (i % 2 == 0) {
            arr.erase(arr.begin() + q + 1, arr.end());
        } else {
            arr.erase(arr.begin(), arr.begin() + q);
        }
    }
    return arr;
}