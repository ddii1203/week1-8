struct GPIO
{
int GPIO_Speed;
}NO;
enum GPIOspeed{
GPIO_Speed_2MHz,
GPIO_Speed_10MHz,
GPIO_Speed_50MHz
};
void GPIO_StrutrueInit(struct GPIO*p ){
  p->GPIO_Speed=GPIO_Speed_2MHz;
}
int main(){
  struct GPIO NO;
  GPIO_StrutrueInit(&NO);
  printf ("默认GPIO速度为:%d\n",NO.GPIO_Speed);
  return 0;
}           