// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::vector<int> v;
    int n;
    std::cin>>n;
    int x;
    for (int i=0; i<n; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }

    //erase 1 element
    int k;
    std::cin>>k;
    v.erase(v.begin()+k-1);

    //erase the element based on range
    int r1,r2;
    std::cin>>r1;
    std::cin>>r2;
    v.erase(v.begin()+r1-1, v.begin()+r2-1);

    std::cout<<v.size()<<std::endl;
    for(int i=0; i<v.size(); i++)
    {
        std::cout<<v[i]<< " ";
    }
    return 0;
}
