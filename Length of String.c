main()
{
char name1[100];
char name2[100];
char name3[100];
printf("enter first string: ");
gets(name1);
printf("enter second string: ");
gets(name2);
strcpy(name3,name2);
printf("Entered string : %s",strcat(name1,name3));
printf("\nlength of string : %d",strlen(name1));
}

