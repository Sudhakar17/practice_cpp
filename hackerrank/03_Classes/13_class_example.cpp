// // https://www.hackerrank.com/challenges/c-tutorial-class/problem
#include <iostream>
#include <sstream>



class Student
{
    private:
        int age;
        int standard;
        std::string first_name;
        std::string last_name;

    public:
        void set_age(int age_val){
            age = age_val;
        }

        void set_standard(int std_val){
            standard = std_val;
        }

        void set_first_name(std::string f_name){
            first_name = f_name;
        }

        void set_last_name(std::string l_name){
            last_name = l_name;
        }

        int get_age()
        {
            return age;
        }

        std::string get_first_name(){
            return first_name;
        }

        std::string get_last_name(){
            return last_name;
        }

        int get_standard(){
            return standard;
        }

        std::string to_string(){
            std::stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    std::string first_name, last_name;
    std::stringstream ss();
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    return 0;
}

