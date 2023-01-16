#ifndef BLINK_H
#define BLINK_H
#include "air32f10x.h"                  // Device header

#define GPIO_GROUP_TEST GPIOB
#define GPIO_MODE_TEST GPIO_Mode_Out_PP
#define GPIO_SPEED_TEST GPIO_Speed_50MHz
#define GPIO_PIN1_TEST GPIO_Pin_2
#define GPIO_PIN2_TEST GPIO_Pin_10
#define GPIO_PIN3_TEST GPIO_Pin_11

#define blinkTime 600
void GPIO_Configuration(void);

#endif
