int Factorial(int number)
{
 if(number>0)
 return number * Factorial(number-1);
 else
 return 1;
}
main()
{
 int i,number,fact=1;
 printf("enter an integer : ");
 scanf("%d",&number);
 printf("Factorial of %d is %d",number,Factorial(number));
}

