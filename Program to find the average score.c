/*
  A program to find grade of a student
(70-100:A 60-69 :B 50-59 :C 40-49 :D 0-39 :Fail)
*/
#include <stdio.h>

int main ()
{
int Chem, Bio, Phy, avg;
  printf("Enter marks for Chem, Bio and Phy  ");
  scanf("%d %d %d", &Chem, &Bio, &Phy);


  avg = (Chem + Bio + Phy)/3;
  printf("The average score is %d", avg);


if (avg>=70 && avg <=100)
    {
      printf("\nGrade A");
    }
  else if (avg>=60 && avg <=69)
  {
    printf("\nGrade B");
  }
  else if (avg>=50 && avg<=59)
  {
    printf("\nGrade C");
  }
  else if (avg>=40 && avg<=49)
  {
    printf("\nGrade D");
  }
  else if (avg>=0 && avg<=39)
    {
      printf("\nFail");
    }
  else
  {
    printf("\nInaccurate, kindly enter marks between 0-100");
  }
    return 0;
}
