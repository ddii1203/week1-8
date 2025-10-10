#include <stdio.h>
#include <string.h>
void qiandao_ti()
{
    char answer[50];                                 //#签到题
    printf("请回答你是不是AI?例子:我不是AI\n");        //输入提示
    scanf("%s",answer);                            
    if (strstr(answer,"是")!=NULL && strstr(answer,"不")==NULL){
      printf("Yes\n"); //利用函数寻找不是两字
}else {
  printf("No\n");
} 
}
//#签到题
void hallo_world(){
     int i;
    while(1){ 
        printf ("请输入-1,0,1其中一个数字:");
        scanf("%d",&i);
     if (i==-1){
            printf("game over\n");
            break;
    }else if(i==1){
        printf("HALLOWORLD\n");
    }else if(i==0){
        printf("halloworld\n"); 
    }else{ 
    printf("输入错误,请重新输入\n");
    }
   } 
}
//#halloword题（增加了个报错，如果输入不是规定的数字会报错并重新输入）
struct GPIO
{
int GPIO_Speed;
}NO;
enum GPIOspeed{
GPIO_Speed_2MHz,
GPIO_Speed_10MHz,
GPIO_Speed_50MHz,
};
//#GPIO缺省配置题
void GPIO_StrutrueInit(struct GPIO*p ){
  p->GPIO_Speed=GPIO_Speed_2MHz;
}
int main(){
  struct GPIO NO;
  GPIO_StrutrueInit(&NO);
  printf ("默认GPIO速度为:%d\n",NO.GPIO_Speed);
  return 0;
}           