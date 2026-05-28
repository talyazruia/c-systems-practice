# include <stdio.h>
int swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;   
}
int main() {
    int x=3;
    int y=5;
    int *px=&x;
    int *py=&y;
    printf("numbers before swap %d, %d" ,x,y);
    swap(px,py);
      printf("numbers after swap %d, %d" ,x,y);


}