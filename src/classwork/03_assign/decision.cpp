#include "decision.h"
//cpp
char get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100) 
    {
        return 'A';
    }

    else if(grade >= 80 && grade < 90) 
    {
        return 'B';
    }

    else if(grade >= 70 && grade < 80) 
    {
        return 'C';
    }

    else if(grade >= 60 && grade < 70) 
    {
        return 'D';
    }

    else if(grade >= 0 && grade < 60) 
    {
        return 'F';
    }
}

char get_letter_grade_using_switch(int grade)
{
    grade -= (grade % 10);

    switch (grade)
    {
    case 0:
        return 'F';
        break;
    case 10:
        return 'F';
        break;
    case 20:
        return 'F';
        break;
    case 30:
        return 'F';
        break;
    case 40:
        return 'F';
        break;
    case 50:
        return 'F';
        break;
    case 60:
        return 'D';
        break;
    case 70:
        return 'C';
        break;
    case 80:
        return 'B';
        break;
    case 90:
        return 'A';
        break;
    case 100:
        return 'A';
        break;
    default:
        return ' ';
        break;
    }
}
