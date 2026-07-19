gcc -I modules tests/test_incomplete_course.c modules/course.c modules/courseResult.c -o test_incomplete_course.out
chmod +x test_incomplete_course.out
./test_incomplete_course.out