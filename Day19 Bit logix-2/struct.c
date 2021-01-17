#include <stdio.h>
#include <string.h>

struct subject
{
    char subject_name[50];
    int subject_code;
};

int main()
{

    struct subject subject1; /* Declare subject1 of type SUBJECT */
    struct subject subject2; /* Declare SUBJECT2 of type SUBJECT */

    /* subject 1 specification */
    strcpy(subject1.subject_name, "Programming and Data structure");
    subject1.subject_code = 6495407;
    struct subject *subject1_ptr = &subject1;

    /* SUBJECT  2 specification */
    strcpy(subject2.subject_name, "INTRODUCTION TO SQL");
    subject2.subject_code = 6495700;
    struct subject *subject2_ptr = &subject2;

    /* print SUBJECT1 info */
    printf("SUBJECT 1 title : %s\n", subject1_ptr->subject_name);
    printf("SUBJECT 1 subject_code : %d\n", subject1_ptr->subject_code);

    /* print SUBJECT2 info */
    printf("SUBJECT 2 title : %s\n", subject2_ptr->subject_name);
    printf("SUBJECT 2 subject_id : %d\n", subject2_ptr->subject_code);

    return 0;
}