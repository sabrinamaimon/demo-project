#ifndef COURSE_RESULT_H
#define COURSE_RESULT_H

#include "course.h"

typedef struct CourseResult
{
    Course *course;
    double marks;
} CourseResult;

CourseResult createCourseResult(Course *course, double marks);

double getGradePoint(CourseResult result);
char *getLetterGrade(CourseResult result);
double calculateGPA(CourseResult results[], int n_results);

void viewCourseResult(CourseResult result);

#endif