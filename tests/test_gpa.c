#include <assert.h>
#include <stdio.h>

#include "../modules/course.h"
#include "../modules/courseResult.h"
#include "../modules/gpa.h"

int main()
{
    Course c1 = createCourse("CSE4107", "SP I", 3.0);
    Course c2 = createCourse("CSE4203", "Discrete Mathematics", 3.0);

    CourseResult r1 = createCourseResult(&c1, 240); // 80%
    CourseResult r2 = createCourseResult(&c2, 225); // 75%

    assert(getGradePoint(r1) == 4.00);
    assert(getGradePoint(r2) == 3.75);

    assert(calculateGPA((CourseResult[]){r1, r2}, 2) == 3.875);

    printf("GPA module tests\n");
    printf("Passed 3/3 tests\n");

    return 0;
}