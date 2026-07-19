#ifndef GPA_H
#define GPA_H

#include "courseResult.h"

double getGradePoint(CourseResult result);
char *getLetterGrade(CourseResult result);
double calculateGPA(CourseResult results[], int n_results);

#endif