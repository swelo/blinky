int main() {
    *((unsigned int *)0x400FE608U) = 0x20U;
    *((unsigned int *)0x40025400U) = 0x0EU;
    *((unsigned int *)0x4002551CU) = 0x0EU;

    while (1) {
      //TODO add logic to set the GPIO_PORTF_DIR_R data so R/G/B can be turned on/off

    }
    //return 0;
}
