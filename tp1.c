#include <stdio.h >
int main () {
int matrix [5][5]=
{ {1,2,3,4,5},{7,a,c,8,d},{c,9,4,2,8},{5,6,p,n,3},{2,9,t,m,k}};
for(int i=0;i<5;i++)
{
      for(int j =0;j<5;j++)
    {
        printf ("%c /t" ,matrix [i][j]);
        printf ("/n");
    }  
}
for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        if(i%2=0)
        {
              printf ("%c /t"; matrix [i][j]);
              printf ("/n");
        }
   }
for(i=0;i<5;i++)
{
     for(j=0;j<5;j++)
     if (i%2!=0)
    {
         printf ("%c /t"; matrix [i][j]);
         printf ("/n");
    }
}
for(i=0;i<5;i++)
{
     for(j=0;j<5;j
    if(i=j)
    {
        printf ("%c /t"; matrix [i][j]);
        printf ("/n");
    }
for(i=0;i<5;i++)
{
     for(j=0;j<5;j++)
     if(i+j=n_1)
     {
           printf ("%c /t"; matrix [i][j]);
           printf ("/n");
     }
 return 0;
}
التمرين الثاني :
#include <stdio.h >
int main () {
int mat[10] [10]
int i ,j , x;
for(i=0;i<10;i++)
     for(j=0;j<10;j++)
           if(i=j)
       mat[i][j]=-20;
       else  
       if (i>j)
       x=mat[i][j]
       mat [i][j]=mat [j][i]
       for(i=0;i<10;i++)
             for (j=0;j<10;j++)
             printf("%c ,/t",matrix[i][j]);
             printf("\n");
             return 0;
               }
