// Name: Bapilar, Miguel C.
// Year & Section: D.I.T. 1-2
// 1: Declaring Variables

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age = 18;                  // integer  
    float height = 1.60;           // floating-point 
    double gpa = 3.56;             // double  float
    bool isStudent = true;         // boolean 
    char name[] = "Miguel";        // string 

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("GPA: %.2lf\n", gpa);
    printf("Is Student: %s\n", isStudent ? "Yes" : "No");

    return 0;
}

