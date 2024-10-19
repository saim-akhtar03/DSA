#include <iostream>
#include <vector>
using namespace std;

void ans(int arr[], int n, int sum) {
    vector<int> a;
    int tempsum = 0;
    
    for (int i = 0; i < n; i++) {
        tempsum = 0;
        a.clear();
        
        for (int j = i; j < n; j++) {
            tempsum += arr[j];
            a.push_back(arr[j]);
            
            if (tempsum == sum) {
                for (int k = 0; k < a.size(); k++) {
                    cout << a[k];
                    if (k < a.size() - 1)
                        cout << ",";
                }
                cout << endl;
            }
            
            if (tempsum >= sum)
                break;
        }
    }
}

int main() {
    int arr[8] = {1, 6, 3, 4, 1, 2, 3, 1};
    ans(arr, 8, 7);
    return 0;
}
