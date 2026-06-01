#include <stdio.h>
#include <stdlib.h>
size_t my_strlen(const char *str)
{
 const char* temp=str;
   while(*temp!='\0')
    temp++;
   size_t len=(size_t)(temp-str);
   printf("str len is %zu", len);
   return temp-str;
}
int main()
{
const char a[]="abc";
size_t az=my_strlen(a);
}