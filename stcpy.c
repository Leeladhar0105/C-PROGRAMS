#include<stdio.h>
//#include<string.h>
char* stcpy(char *,char *);

int main()
{

    char s[20]="hello",t[10]="world";
   // char s1[20];
    //*s="hello";
    //*t="world";

    s[20]=stcpy(s,t);

       // printf("%s",s1);
       int i=0;
        while(s[i]!='\0')
        {


            printf("%c",s[i]);
            i++;
        }
        return 0;


}

  char* stcpy(char *s,char *t)
    {
        int i=0;
        while((s[i]=t[i])!='\0')
             i++;
        return s;


    }


