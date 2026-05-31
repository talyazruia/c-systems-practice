#include <stdio.h>
#include <stdlib.h>
size_t my_strlen(const char *str)
{
    char* temp=str;
   while(*temp!='\0')
   {
    temp++;

   }
   printf("str len is %zu", temp-str);
   return temp-str;
}
int main()
{
const char a[]="abc";
size_t az=my_strlen(a);
}