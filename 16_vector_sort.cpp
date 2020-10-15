#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    std::cin>>n;
    
    std::vector<int> v;
    int x=0;
    for(int i=0; i<n; i++)
    {
        std::cin >> x;
        v.push_back(x);
    } 
    
    std::sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        std::cout<<v[i]<<" ";
        
    }

    return 0;
}
