// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
// https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    
    int **arr = new int*[n];
    int a[n];

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i] = k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    
    for(int i = 0; i < q; i++) {
        int idx, elem;
        cin >> idx >> elem;
        cout << arr[idx][elem] << endl;
    }
    return 0;

}

