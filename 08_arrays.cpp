#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int a[n];
    int i;
    std::cin >> n;

    for (i=0;i<n;i++)
    {
        std::cin >> a[i];
    }

    for (i=0;i<n;i++)
    {
        std::cout << a[n-1-i];
    }

    return 0;
}
