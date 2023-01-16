#include "Blink.h"

void GPIO_Configuration(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); //??GPIOB??

	GPIO_InitStructure.GPIO_Pin = GPIO_PIN1_TEST | GPIO_PIN2_TEST | GPIO_PIN3_TEST;
	GPIO_InitStructure.GPIO_Speed = GPIO_SPEED_TEST; //??50MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_MODE_TEST;	 //????
	GPIO_Init(GPIO_GROUP_TEST, &GPIO_InitStructure); //???GPIOB.2,10,11
}
