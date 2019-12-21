#include <stdio.h>

int main()
{
double income,TAX;
printf("Enter the income of a person : ");
scanf("%lf",&income);
if(income<=120000)
{
TAX=0;
}
else if(income>140000 && income<=160000)
{
TAX=(income-140000)/4;
}
else if(income>160000 && income<=180000)
{
TAX=(((income-160000)/10)*2)+3000;
}
else if(income>1800000)
{
TAX=(((income-1800000)/10)*3)+13000;
}
printf("The income TAX Payable of a person is :%.21f ",TAX);
return 0;
}
