// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    std::vector<int> v;
    int x;
    int q;
    int y;

    std::cin >> n;
    for (int i=0; i<n; i++)
    {
        std::cin>>x;
        v.push_back(x);
    }


    std::cin >> q;
    std::vector<int>::iterator low;
    for (int i=0; i<q; i++)
    {
        std::cin >> y;
        
        low=std::lower_bound (v.begin(), v.end(), y);
        if (v[low-v.begin()] == y)
            std::cout << "Yes" << " ";
        else
            std::cout << "No" << " ";
        std::cout << low-v.begin()+1 << std::endl;
        
    }
    return 0;
}
