
/* C CODE TO FIND THE Nth FIBONACCI NUMBER, WHEN N IS LARGE... CODE BY Amogh Nagunoori(2012143) */



#include<stdio.h>
char f1[5000];
char f2[5000];
char result[5000];
void sum(char a[],char b[],char result[])
{  int carry=0;
  for(int j=4999;j>=0;j--)
  {
    int value=( a[j]-'0')+(b[j]-'0')+carry;
    result[j]=(value%10)-'0';
    carry=value/10;
  }
  
}
void cpy(char a[],char b[])
{ for(int i=4999;i>=0;i--)
  a[i]=b[i];}
int main()
{ for(int i=0;i<5000;i++)
  {  f1[i] =  f2[i]=  result[i]='0'; }
  f2[4999]='1';

 int num;
 printf("enter the number\n");
 scanf("%d",&num);

  if(num==0 || num==1)
  {  return num;}
  for(int i=2;i<num;i++) 
  { sum(f1,f2,result);
    cpy(f1,f2);
    cpy(f2,result);
  }
 int start=0;
 for(int i=0;i<5000;i++)
 { if((start==0) && (result[i]=0))
   continue;
   if((start==0) && (result[i]!=0))
   { start=1;
    printf("%c",result[i]);
   }
   printf("\n");
 }
 


return 0;
}
