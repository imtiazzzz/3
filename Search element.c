main()
{
 int ar[1000],i, a,search;
 printf("Enter the number of elements : ");
 scanf("%d",&a);
 printf("Enter %d elements : ",a);
 for(i=0;i<a;i++)
{
 scanf("%d",&ar[i]);
}
 printf("enter element to search : ");
 scanf("%d",&search);
 for(i=0;i<a;i++)
{
 if(search==ar[i])
 {
 printf("%d found at position %d",search,i+1);
 return 0;
 }
}
 printf("%d not found",search);
}

