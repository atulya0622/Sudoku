#include<stdio.h>
int main()
{ 
int easy[9][9]={0,0,6,8,0,0,0,9,4,0,2,0,0,6,0,7,0,0,7,0,0,4,0,2,0,0,0,0,0,0,0,0,0,0,1,0,6,4,0,0,2,8,3,5,0,0,9,0,5,0,1,0,0,2,4,0,6,0,3,0,0,5,0,0,0,0,1,0,0,0,3,8,0,9,0,0,0,1,2,0};
int medium[9][9]={2,0,0,5,0,1,4,0,0,0,3,0,8,0,0,6,0,0,8,0,1,0,7,0,0,0,0,0,0,6,0,0,3,9,0,5,4,0,0,1,0,7,0,2,0,0,5,0,0,0,9,0,0,8,0,8,0,6,0,0,0,0,1,6,0,0,0,3,2,0,9,0,0,7,0,0,0,0,5,0,2};
int hard[9][9]={0,0,0,0,0,0,2,0,0,0,8,0,0,0,7,0,9,0,6,0,2,0,0,0,5,0,0,0,7,0,0,6,0,0,0,0,0,0,0,9,0,1,0,0,0,0,0,0,0,2,0,0,4,0,0,0,5,0,0,0,6,0,3,0,9,0,4,0,0,0,7,0,0,0,6,0,0,0,0,0,0};
int i,j,k,l,m,n,ch,y,x,z,p,q,a,s,o;
int value[9][9];
 int total_row[9];
 int total_col[9];
int easya[9][9]={1,5,6,8,3,7,2,9,4,9,2,4,1,6,5,7,3,8,7,8,3,4,9,2,5,6,1,2,7,5,3,4,6,8,1,9,6,4,1,9,2,8,3,5,7,3,9,8,5,7,1,6,4,2,4,1,2,6,8,3,9,7,5,5,6,7,2,1,9,4,8,3,8,3,9,7,5,4,1,2,6};
int mediuma[9][9]={2,6,7,5,9,1,4,8,3,5,3,9,8,2,4,6,1,7,8,4,1,3,7,6,2,5,9,1,2,6,4,8,3,9,7,5,4,9,8,1,5,7,3,2,6,7,5,3,2,6,9,1,4,8,9,8,2,6,4,5,7,3,1,6,1,5,7,3,2,8,9,4,3,7,4,9,1,8,5,6,2};
int harda[9][9]={9,5,7,6,1,3,2,8,4,4,8,3,2,5,7,1,9,6,6,1,2,8,4,9,5,3,7,1,7,8,3,6,4,9,5,2,5,2,4,9,7,1,3,6,8,3,6,9,5,2,8,7,4,1,8,4,5,7,9,2,6,1,3,2,9,1,4,3,6,8,7,5,7,3,6,1,8,5,4,2,9};
system("clear");
quit:
printf("WELCOME TO THE GAME OF SUDOKU\n");
back:
printf("CHOOSE YOUR CHOICE\n\n 1.START THE GAME\n 2.TO FIND THE SOLUTION OF A SUDOKU\n");
scanf("%d", &o);
if(o==2)
{
system("clear");
printf("\n\n\n");
 printf("ENTER THE INPUTS OF SUDOKU AND CHECK WHETHER ITS CORRECT OR NOT\n");
printf("\n INPUT NO. OF ROWS X COLUMNS \n");

scanf("\n%d",&k);
 scanf("\t%d",&l);
system("clear");
printf("\n\n\n");
printf("values\n");
 for(i=0;i<k;i++)
 { 

 
 total_row[i]=0;
 for(j=0;j<l;j++)
 {
 scanf("%d",&value[i][j]);
 
 total_row[i]=total_row[i]+value[i][j];
 }
 }
 
sol:
for(j=0;j<l;j++)
 {
 total_col[j]=0;
 for(i=0;i<k;i++)
 {
 
 total_col[j]=total_col[j]+value[i][j];

}
 }
system("clear");
printf("\n\n\n\n");
for(i=0;i<k;i++)
 {
 printf("\n");
 for(j=0;j<l;j++)
 {
 printf(" \t %d ",value[i][j]);
 }
 }

s=((k*(k+1))/2);
for(n=0;n<k;n++)
{
 if((total_col[n])!=s)
 
 
 printf("\n incorrect i/p's col_%d ",n+1 );
 
 else if((total_row[n])!=s)
 
 printf(" incorrect i/p's row_%d ",n+1);
 else if(total_row[n] && s && total_col[n])
 
 printf("\n correct i/p for both %d row and col ",n+1);
 
 else if(total_row[n] && s )
 
 printf("\n correct i/p for %d row ",n+1);
 else if(s && total_col[n])
 
 printf("\n correct i/p for %d col ",n+1);
 
 
 else
 {
 }
}
}
else
{
system("clear");
printf("\n\n\n");
printf("ENTER YOUR LEVEL CHOICE\n 1. EASY\n 2. MEDIUM\n 3. HARD\n");
scanf("%d", &ch);
system("clear");
printf("\n\n\n");
if(ch==1)
{for (i=0;i<=8;i++)
{
for (j=0;j<=8;j++)
{
printf("%d   ", easy[i][j]);
}
printf("\n");
}
}
if(ch==2)
{for (i=0;i<=8;i++)
{
for (j=0;j<=8;j++)
{
printf("%d   ", medium[i][j]);
}
printf("\n");
}
}
if(ch==3)
{for (i=0;i<=8;i++)
{
for (j=0;j<=8;j++)
{
printf("%d   ", hard[i][j]);
}
printf("\n");
}
}
printf("CLICK '1' TO START THE GAME\n CLICK '2' FOR THE SOLUTION OF THE GAME\n CLICK '3' TO GO BACK\n CLICK '4' TO QUIT\n\n");
scanf("%d", &x);
system("clear");
printf("\n\n\n");
switch(x)
{
case 1: {
printf("Enter the appropriate values in the places of zeroes\n");
printf("What was your level choice\n 1. EASY\n 2. MEDIUM\n 3. HARD\n");
scanf("%d", &y);
system("clear");
printf("\n\n\n\n");
if(y==1)
{
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{
printf("%d  ", easy[i][j]);
}
printf("\n");
}
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{

if(easy[i][j]==0)
{
printf("ENTER THE APPROPRIATE VALUE IN %d PLACE \n", i+j);
scanf("%d", &easy[i][j]);
system("clear");
printf("\n\n\n\n");
for (p=0;p<9;p++)
{ 
for(q=0;q<9;q++)
{

printf("%d  ", easy[p][q]);
}
printf("\n");
}
}
}

}
}
if(y==2)
{
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{
printf("%d  ", medium[i][j]);
}
printf("\n");
}
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{

if(medium[i][j]==0)
{
printf("ENTER THE APPROPRIATE VALUE IN %d PLACE \n", i+j);
scanf("%d", &medium[i][j]);
system("clear");
printf("\n\n\n\n");
for (p=0;p<9;p++)
{ 
for(q=0;q<9;q++)
{
printf("%d   ", medium[p][q]);
}
printf("\n");
}
}
}
}
}
if (y==3)
{
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{
printf("%d  ", hard[i][j]);
}
printf("\n");
}
for (i=0;i<9;i++)
{ 
for(j=0;j<9;j++)
{

if(hard[i][j]==0)
{
printf("ENTER THE APPROPRIATE VALUE IN %d PLACE \n", i+j);
scanf("%d", &hard[i][j]);
system("clear");
printf("\n\n\n\n");
for (p=0;p<9;p++)
{ 
for(q=0;q<9;q++)
{
printf("%d   ", hard[p][q]);
}
printf("\n");
}
}
}
}
}
system("clear");
printf("\n\n\n\n");
goto back;

         break;
case 2: { printf("WHAT WAS YOUR LEVEL CHOICE\n 1.EASY\n 2.MEDIUM\n 3.HARD\n");
		scanf("%d", &y);
	system("clear");
	printf("\n\n\n");
		if(y==1)
		{
	for(i=0;i<=8;i++)
          {  for(j=0;j<=8;j++)
            { printf("%d   ", easya[i][j]);
             }
               printf("\n");
          }
	}
	else 
	if (y==2)  
	{ for(i=0;i<=8;i++)
          {  for(j=0;j<=8;j++)
            { printf("%d  ", mediuma[i][j]);
             }
               printf("\n");
          }
	}
         else
	{ for(i=0;i<=8;i++)
          {  for(j=0;j<=8;j++)
            { printf("%d  ", harda[i][j]);
             }
               printf("\n");
          }
	}
		}
		break;
case 3: goto back;
	break;
case 4: goto quit;
	break; 
default: printf("ENTER VALID CHOICE\n");
}
} 
return 0;
}
}
