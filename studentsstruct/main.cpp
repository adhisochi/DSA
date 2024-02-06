#include <iostream>
#include <string>

// Grade structure
struct Grade {
    int mark;
    char the_grade;
};

// Course structure
struct Course {
    std::string course_code;
    std::string course_name;
};

// Student structure
struct Student {
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;
};

// Function to calculate grade based on the mark
void calculateGrade(Grade& grade) {
    if (grade.mark > 69)
        grade.the_grade = 'A';
    else if (grade.mark > 59)
        grade.the_grade = 'B';
    else if (grade.mark > 49)
        grade.the_grade = 'C';
    else if (grade.mark > 39)
        grade.the_grade = 'D';
    else
        grade.the_grade = 'E';
}

int main() {
    const int MAX_STUDENTS = 40;
    Student students[MAX_STUDENTS];

    int numStudents;
    std::cout << "Enter the number of students (up to 40): ";
    std::cin >> numStudents;

    // Input student details
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nEnter details for student " << i + 1 << ":\n";
        std::cout << "Registration Number: ";
        std::cin >> students[i].registration_number;

        std::cout << "Name: ";
        std::cin.ignore(); // Ignore the newline character left in the buffer
        std::getline(std::cin, students[i].name);

        std::cout << "Age: ";
        std::cin >> students[i].age;

        std::cout << "Course Code: ";
        std::cin >> students[i].course.course_code;

        std::cout << "Course Name: ";
        std::cin.ignore(); // Ignore the newline character left in the buffer
        std::getline(std::cin, students[i].course.course_name);

        std::cout << "Mark: ";
        std::cin >> students[i].grades.mark;

        // Calculate grade
        calculateGrade(students[i].grades);
    }

    // Display student details
    std::cout << "\nStudent details:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nStudent " << i + 1 << ":\n";
        std::cout << "Registration Number: " << students[i].registration_number << std::endl;
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Age: " << students[i].age << std::endl;
        std::cout << "Course Code: " << students[i].course.course_code << std::endl;
        std::cout << "Course Name: " << students[i].course.course_name << std::endl;
        std::cout << "Mark: " << students[i].grades.mark << std::endl;
        std::cout << "Grade: " << students[i].grades.the_grade << std::endl;
    }

    return 0;
}
