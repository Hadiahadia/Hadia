التمرين// 1

#include<stdio.h>
int main() 
 {
   int i, j;
   char mat[5][5]=
   {
          {'1' ,'2' ,'3' ,'4' ,'5'},
         {'7' ,'a' ,'c' ,'8' ,'d'},
         {'c' ,'9' ,'4' ,'z', '8'},
         {'5' ,'6' ,'p' ,'n' ,'3'},
         {'2' ,'9' ,'t' ,'m' ,'k'}
   };
   
   for(i=0; i<5; i++) 
    {
    for(j=0; j<5; j++) {
    printf("%c \t", mat[i][j]);
    } 
    printf("\n");  
   }  
   
   printf(" les lignes pair sont=\n");
  for(i=0; i<5; i++) 
  {
    for(j=0; j<5; j++) {
     if(i%2==0)
       printf("%c \t", mat[i][j]);
    
     } 
    printf("\n");  
  }   
  
  
  printf(" les lignes impair sont=\n");
  for(i=0; i<5; i++) 
  {
    for(j=0; j<5; j++) {
     if(i%2 !=0)
       printf("%c \t", mat[i][j]);
    
     } 
    printf("\n");  
  }   
   
  printf(" la 1er diagonale= \n ");
  for(i=0 ;i<5 ;i++)
  printf("%c \t",mat[i][i]);
   
  printf(" la 2eme  diagonale= \n ");
  for(i=0 ; i<5 ;i++)
  for(j=0;j<5;j++)
  if(j+i==4)
  printf("%c \t", mat[i][j]);
  
  
  return 0;
 }
التمرين2 



#include <stdio.h>

int main() 
{
    int mat[4][4],x,c,i,j;
    
    
   printf("mat[4][4]=\n");
  c=1;
  for(i=0;i<4;i++){
  for(j=0;j<4;j++){
 mat[i][j]=c; 
 c++;}
 }
 

 printf("\n");
 for(i=0;i<4;i++){
 for(j=0;j<4;j++){
 printf("%d \t",mat[i][j]);
 }printf ("\n");
 }

 printf("\n");
    
 for (int i = 0; i < 4;i++) 
 {
    for (int j = i + 1; j < 4; j++)
    {
            x = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = x;
    }
 }   
 printf("nouveau mat est\n");
 for (int i = 0; i< 4; i++){
 for (int j= 0; j < 4; j++) 
        printf("%d ", mat[i][j]);
        
        printf("\n");
 }

 return 0;
}
