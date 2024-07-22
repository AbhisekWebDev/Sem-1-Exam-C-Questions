#include <stdio.h>
#include <string.h>

// C Program to show the
// use of structure

// Structure student declared
struct student {
	char name[20];
	int roll_no;
	char address[50];
	char branch[50];
};

struct student1 {
    int roll;
    char name1[20];
    float marks;
} s = {1, "Abhi", 98.65};

// Driver code
int main()
{
    // these are compile time initialization

	struct student obj;

	strcpy(obj.name, "Abhishek Kumar");
	obj.roll_no = 03;
	strcpy(obj.address, "Durgapur");
	strcpy(obj.branch, "Computer Science And Engineering");

	// Accessing members of student obj

	printf("Name: %s\n", obj.name);
	printf("Roll_No: %d \n", obj.roll_no);
	printf("Address: %s\n", obj.address);
	printf("Branch: %s \n\n", obj.branch);


	struct student1 s1, s3;
    struct student1 s2 = {2, "Abhinav", 99.99};
    s1 = s2;
    printf("%s \n", s1.name1); // s1 - is object name, . - is dot operator/member operator, name - is member name (syntax - objectName.memberName)
    printf("%f \n", s.marks);
    s.marks = 9.2;
    printf("%f \n\n", s.marks);

    // we cannot assign a string literal directly to an array. Instead, we should use the strcpy function from the <string.h> header to copy the string.
    // s.name = "Abhisek";

    // Correct way to assign a string to an array

    strcpy(s.name1, "Abhisek");
    printf("%s \n\n", s.name1);


    // these are runtime initialization

    printf("Enter info for s3 :- \n");
    printf("Enter roll : ");
    scanf("%d", &s3.roll);
    printf("Enter name : ");
    scanf("%s", &s3.name1);
    printf("Enter marks : ");
    scanf("%f", &s3.marks);

    printf("%d %s %f \n", s3.roll, s3.name1, s3.marks);

	return 0;
}
