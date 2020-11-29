// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
//#include <vector>
#include <iostream>
//#include <set>
#include <map>
//#include <algorithm>
//using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int queries = 0;
    int type = 0;
    std::map<std::string, int>m;
    
    int mark=0;
    std::string name;
    std::cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        std::cin >> type;
        if (type==1) 
        {
            std::cin >> name >> mark;
            std::map<std::string,int>::iterator itr=m.find(name);
            if (m.end() == itr)
                m.insert(make_pair(name, mark));
            else
                m[name] = m[name] + mark;
        }
        else if (type==2)
        {
            std::cin>>name;
            m.erase(name);
        }
        else if (type==3)
        {
            std::cin>>name;
            std::cout << m[name] << std::endl;
        }
        else std::cout << "There is no existing type" << std::endl;
    }
    return 0;
}