#include<stdio.h>
#include<string.h>
int main()
{
int i,j,str1,str2,count=0,k;
char m_name[20],f_name[20],fla[]={"flames"},res;
printf("\n enter male name:\n");
scanf("%s",&m_name);

printf("\n enter female name:\n");
scanf("%s",&f_name);
str1=strlen(m_name);
str2=strlen(f_name);
for(i=0;i<str1;i++)
{
for(j=0;j<str2;j++)\
{
if(m_name[i]==f_name[j])
{
m_name[i]='\0';
f_name[j]='\0';
}
}
}
//printf("\n REMAINING LATTERS:\n");
for(i=0;i<str1;i++)
{
if(m_name[i]!='\0')
{
count++;
//printf("%c \t",m_name[i]);
}
}
printf("\n");
for(j=0;j<str2;j++)
{
if(f_name[j]!='\0')
{
count++;
//printf("%c \t",f_name[j]);
}
}





//printf("\n count=%d\n",count);



k=-1;



for(i=0;i<5;i++)



{



for(j=1;j<=count;j++)



{



k++;





if(k>=6)



{



k=0;



}



if(fla[k]=='\0')



{



do





{



k++;



if(k>=6)



{



k=0;



}



}while(fla[k]=='\0');





}



}



fla[k]='\0';



}



for(i=0;i<6;i++)



{



if(fla[i]!='\0')





{



res=fla[i];



}



}



switch(res)



{



case 'f':





printf("friends\n");



break;



case 'l':



printf("lovers\n");



break;



case 'a':



printf("ansisters\n");





break;



case 'm':



printf("marriage\n");



break;



case 'e':



printf("enimies\n");



break;





case 's':



printf("sisters\n");



break;



}



}
