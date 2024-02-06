#include <iostream>
#include <string>
#include <vector> // Include the vector library

// Grade class
class Grade {
public:
    int mark;
    char the_grade;

    // Constructor to set initial values
    Grade(int initialMark) : mark(initialMark) {
        calculateGrade();
    }

    // calculate grade based on the mark
    void calculateGrade() {
        if (mark > 69)
            the_grade = 'A';
        else if (mark > 59)
            the_grade = 'B';
        else if (mark > 49)
            the_grade = 'C';
        else if (mark > 39)
            the_grade = 'D';
        else
            the_grade = 'E';
    }
};

// Course class
class Course {
public:
    std::string course_code;
    std::string course_name;

    // set initial values
    Course(const std::string& code, const std::string& name)
        : course_code(code), course_name(name) {}
};

// Student class
class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;

    // set initial values
    Student(const std::string& regNum, const std::string& studentName, int studentAge,
            const Course& studentCourse, int initialMark)
        : registration_number(regNum), name(studentName), age(studentAge),
          course(studentCourse), grades(initialMark) {}

    // edit a student's details
    void editDetails(int newAge) {
        age = newAge;
    }

    // calculate grades
    void calculateGrades(int newMark) {
        grades.mark = newMark;
        grades.calculateGrade();
    }

    // Function to get the grade
    char getGrade() const {
        return grades.the_grade;
    }
};

int main() {
    // Vector to hold students
    std::vector<Student> students;

    // Add 40 students
    Course cs101("CS101", "Introduction to Computer Science");
    students.push_back(Student("12345", "John Doe", 20, cs101, 75));

    // Edit a student’s details (if needed)
    students[0].editDetails(21);

    // Add marks and calculate grades (if needed)
    students[0].calculateGrades(85);

    // Access grade (if needed)
    std::cout << "Grade: " << students[0].getGrade() << std::endl;

    return 0;
}
