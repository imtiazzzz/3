int main()
{
int disp[30][30];
int i, j,n,m,search;
printf("enter rows: ");
scanf("%d",&n);
printf("enter column: ");
scanf("%d",&m);
for(i=0; i<n; i++)
 {
for(j=0;j<m;j++)
 {
printf("Enter value for disp[%d][%d]:", i, j);
scanf("%d", &disp[i][j]);
 }
 }
printf("Two Dimensional array elements:\n");
for(i=0; i<n; i++)
 {
printf("\n");
for(j=0;j<m;j++) {
printf("%d ", disp[i][j]);
 }
}
printf("\nTo search\n");
scanf("%d",&search);
int count = 0;
for (i = 0; i < n; i++)
{
for(j=0;j<m;j++)
{
if (disp[i][j] == search)
count++;
};
}
if(count>0)
{
printf("Occurrence of %d is: %d\n", search, count);
}
else
{
printf("notfound");
}
}
