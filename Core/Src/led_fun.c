#include "stm32f4xx.h"
#include "led.h"
#include "main.h"

void LED_Init() {
    // Enable GPIOA clock
    RCC->AHB1ENR |= GPIOAEN;

    // Configure PA0 as output
    GPIOA->MODER &= ~(3U << (0 * 2));
    GPIOA->MODER |=  (1U << (0 * 2));

    // Configure PA4 as output
    GPIOA->MODER &= ~(3U << (4 * 2));
    GPIOA->MODER |=  (1U << (4 * 2));

    // Configure PA7 as output
    GPIOA->MODER &= ~(3U << (7 * 2));
    GPIOA->MODER |=  (1U << (7 * 2));

    // Configure PA12 as output
    GPIOA->MODER &= ~(3U << (12 * 2));
    GPIOA->MODER |=  (1U << (12 * 2));
}

void LED_On(uint16_t pin) {
    GPIOA->ODR |= pin;
}

void LED_Off(uint16_t pin) {
    GPIOA->ODR &= ~pin;
}

void delayMs(int n) {
    for (; n > 0; n--)
        for (volatile int i = 0; i < 7000; i++);
}
