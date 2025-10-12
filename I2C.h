#include <stdio.h>
int main ()
{
  hallo_world();
    return 0;
}
void hallo_world(){
     int i;
     while (1) {
         printf("请输入 -1、0 或 1:");
         scanf("%d", &i);
         if (i == -1) {
             break;
         } else if (i == 0) {
             printf("helloworld\n");
         } else if (i == 1) {
             printf("HELLOWORLD\n");
         } else {
             printf("输入错误，请重新输入！\n");
         }
     }
 }
  
   
 