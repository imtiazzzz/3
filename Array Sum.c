total(int *x,int y)
{
int sum=0;
for (int i = 0; i < y; i++)
{
sum = sum+*(x+i);
}
return sum;
}
main( )
{
int i,n,arr[100];
printf("enter number of elements: ");
scanf("%d",&n);
printf("enter %d elements: ",n);
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int result = total(arr,n);
printf("sum of array is : %d",result);
}
