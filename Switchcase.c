#include<stdio.h>
int main()
{
int num;
printf("Enter a random number from 1 to 5:");
scanf("%d",&num);
switch(num)
{
case'1':
printf("Food item- sandwich\n Price- Rs 179");
break;
case'2':
printf("Food item- French Fries\n Price- Rs 99");
break;
case'3':
printf("Food Item- Pasta\n Price- Rs 179");
break;
case'4':
printf("Food Item- Burger\n Price- Rs 129");
break;
case'5':
printf("Food Item- Pizza\n Price- Rs 239");
break;
default:
printf("Not valid");
}
return 0;
}
