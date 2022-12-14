再写流水灯的时候define最后加了；调试了一下午，最终写对了
太不容易了😓
#include "reg52.h"
#include<intrins.h>

typedef unsigned int u16;
typedef unsigned char u8;

#define led P2	//define?????
void delay(u16 i){
while (i--);
}
void main(){
u16 i;

led=0xfe;
delay(20000);
while(1){
for (i =0;i<7;i++){
led = _crol_(led,1);
delay(50000);
}
led=~led;
for (i=0;i<7;i++){
led = _cror_(led,1);
delay(50000);
}
led=~led;
}
}

