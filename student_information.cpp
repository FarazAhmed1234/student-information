
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string gender;
    int roll_no;
    string uni_name;

public:
    // Method to get student information
    void getInfo(string n, string g, int r_n, string u_n) {
        name = n;
        gender = g;
        roll_no = r_n;
        uni_name = u_n;
    }

    // Method to display student information
    void display() {
        cout << "Name is: " << name << endl;
        cout << "Gender is: " << gender << endl;
        cout << "Roll No is: " << roll_no << endl;
        cout << "University Name is: " << uni_name << endl;
    }
};

int main() {
    Student student1, student2, student3;

    student1.getInfo("Faraz Ahmed", "Male", 101, "University A");
    student2.getInfo("Ali Ahmed", "Male", 102, "University B");
    student3.getInfo("Danish", "Male", 103, "University C");

    cout << "Student 1 information: " << endl;
    student1.display();
    cout << endl;

    cout << "Student 2 information: " << endl;
    student2.display();
    cout << endl;

    cout << "Student 3 information: " << endl;
    student3.display();
    cout << endl;

    return 0;
}