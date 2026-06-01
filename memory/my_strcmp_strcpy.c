#include <stdio.h>

size_t my_strlen(const char *str)
{
 const char* temp=str;
   while(*temp!='\0')
    temp++;
   size_t len=(size_t)(temp-str);
   return temp-str;
}
char *strcpy(char *dest, const char *src)
{
size_t len=my_strlen(src);
size_t len_dest=my_strlen(dest);
if(len_dest<len)
{
    return NULL;
}
for(int i=0; i<len+1;i++)
{
    dest[i]=src[i];
}
return dest;
}
int my_strcmp(const char *s1, const char *s2){
    int flag=0;
    size_t len_s1=my_strlen(s1);
    size_t len_s2=my_strlen(s2);
    int i,j;
    for( i=0, j=0;i<len_s1 && j<len_s2;i++,j++){
        if(s1[i]!=s2[j]){
            if(s1[i]<s2[j]){
               return -1;     
            }
            else
            {
                return 1;
            }

        }
        
    }
    if(i<len_s1)
    return -1;
    else if(j<len_s2)
    return 1;
    return 0;
}

int main()
{
  const char s1[]="aaa";
  const char s2[]="aaa";
  const char s3[]="aaa";
  const char s4[]="aaaaaaa";
  const char s5[]="aaa";
  const char s6[]="aab";
  char a[4]="aab";
  char* c=strcpy(a,s6);
  printf("%d\n%d\n%d\n%s",my_strcmp(s1,s2),my_strcmp(s3,s4),my_strcmp(s5,s6),c);
}