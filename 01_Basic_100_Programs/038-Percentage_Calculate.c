#include<stdio.h>

int main()
{
    float physics; float chemistry; float mathematics; float marksObtained; 
    float totalMarks = 220; float percentage;

    printf("Enter Your Physics, Chemistry & Mathematics Marks:\n");

    printf("Enter Your Physics Marks: ");
    scanf("%f", &physics);

    printf("Enter Your Chemistry Marks: ");
    scanf("%f", &chemistry);

    printf("Enter Your Mathematics Marks: ");
    scanf("%f", &mathematics);

    marksObtained = physics + chemistry + mathematics;
    printf("Marks Obtained = %.2f\n",marksObtained);
    printf("Total Marks = %.2f\n",totalMarks);

    percentage = (marksObtained / totalMarks) * 100;
    printf("Percentage = %.2f\n",percentage);

    return 0;
}