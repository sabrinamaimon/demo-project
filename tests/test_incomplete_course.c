#include <assert.h>
#include <stdio.h>

#include "../modules/course.h"
#include "../modules/courseResult.h"

int main()
{
    Course c = createCourse("CSE4107", "Structured Programming I", 3.0);

    CourseResult completed = createCompletedCourseResult(&c, 240);
    CourseResult incomplete = createIncompleteCourseResult(&c);

    assert(completed.completed == 1);
    assert(completed.marks == 240);

    assert(incomplete.completed == 0);
    assert(incomplete.marks == 0);

    printf("Incomplete course tests\n");
    printf("Passed 4/4 tests\n");

    return 0;
}