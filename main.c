#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))//RCGC
#define GPIO_PORTF_AHB_DEN_R    (*((volatile unsigned long *)0x4005D51C))//DEN
#define GPIO_PORTF_AHB_DIR_R    (*((volatile unsigned long *)0x4005D400))//DIR
#define Janne                   (*(volatile unsigned long *)0x4005D000)) //DATA
#include <windows.h>



int main() {
 //TODO Add the needed pointers to the needed addresses to init the microcontroller. 
 //That is the base, DIR, DEN. You can also include the header file and use those macros/defines if you dont want to declare them yourselfs
 SYSCTL_RCGCGPIO_R = 0x20;
 GPIO_PORTF_AHB_DEN_R = 0x2;
 GPIO_PORTF_AHB_DIR_R = 0x2;
 
    while (1) {
      Janne = 0x2;
      sleep(1);
      Janne = 0x0;
      sleep(1);
      //TODO add logic to set the GPIO_PORTF_DIR_R data so R/G/B can be turned on/off
      //dir_gpio
      //den_gpio
      //data_gpio
      //RCGC_GPIO
      //0x4005d000 DATA
      //0x4005d400 DIR
      //0x4005d51c DEN
      //0x400fe608 RCGC //#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))kjöhkuyvgukvipyvukyuoivigipu

      //ofoahpubOBOÅTB
      
    }
    //return 0;
}
