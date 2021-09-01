#include "print.h"
#include "init.h"
#include "interrupt.h"
#include "debug.h"
void main(void){
    put_str("I am kernel.\n");
    init_all();
    asm volatile("sti");	
    put_str("Init finished.\n");
    
    while (1);
}