#ifndef LED_H_
#define LED_H_

#include <stdint.h>

void LED_Init(void);
void LED_On(uint16_t pin);
void LED_Off(uint16_t pin);
void delayMs(int n);

#endif
