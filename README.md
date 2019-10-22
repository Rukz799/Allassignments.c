#include <stdio.h>
int main()
{
    int week;
  // variable declaration area
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    if(week == 1)
    {
        printf("Monday=ICT Sir Asfand yar");
    }
    else if(week == 2)
    {
        printf("Tuesday=Programming fundamentals Sir imran Ali");
    }
    else if(week == 3)
    {
        printf("Wednesday=Applied physics Sir Shams=ullah");
    }
    else if(week == 4)
    {
        printf("Thursday=English Sir Saadat Baloch");
    }
    else if(week == 5)
    {
        printf("Friday=Calculus Sir Dr Naveed");
    }
    else if(week == 6)
    {
        printf("Saturday=Holiday");
    }
    else if(week == 7)
    {
        printf("Sunday=Holiday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }
    return 0;
}


