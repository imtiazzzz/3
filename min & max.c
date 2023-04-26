main()
{
 int ar[1000],i,a;
 printf("Enter the number of elements : ");
 scanf("%d",&a);
 printf("Enter %d elements : ",a);
 for(i=1;i<=a;i++)
{
 scanf("%d",&ar[i]);
}
 int max=ar[1];
 int min=ar[1];
 for(i=1;i<=a;i++)
{
 if(ar[i]>max)
{
 max=ar[i];
}
 if(ar[i]<min)
{
 min=ar[i];
}
}
 printf("The maximum element : %d",max);
 printf("\nThe minimum element : %d",min);
}

