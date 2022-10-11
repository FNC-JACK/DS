#include<iostream.h>
#include<conio.h>
void main()
{
int mat[3][3];
clrscr();
cout<<"Enter element of matrix.\n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>mat[i][j];
}
}
cout<<"Row major.\n";
for(i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<mat[i][j];
cout<<"row-["<<i+1<<"]\n";
}
}
getch();
}