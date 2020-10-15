#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    char tmp;

    std::cin >> a;
    std::cin >> b;

    std::cout << a.size() << " " << b.size() << std::endl;
    std::cout << a+b << std::endl;
    tmp = b[0];
    b[0] = a[0];
    a[0] = tmp;
    std::cout << a << " " << b << std::endl;
  
    return 0;
}
