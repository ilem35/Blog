#include "delay.h"
#include "Blink.h"
#include "air32f10x.h"

int main(void)
{
	Delay_Init();				        //延时初始化
	GPIO_Configuration();

	while (1)
	{
		GPIO_SetBits(GPIO_GROUP_TEST, GPIO_PIN1_TEST);
		Delay_Ms(200);
		GPIO_SetBits(GPIO_GROUP_TEST, GPIO_PIN2_TEST);
		Delay_Ms(200);
		GPIO_SetBits(GPIO_GROUP_TEST, GPIO_PIN3_TEST);
		Delay_Ms(200);
		
		GPIO_ResetBits(GPIO_GROUP_TEST, GPIO_PIN1_TEST);
		Delay_Ms(200);
		GPIO_ResetBits(GPIO_GROUP_TEST, GPIO_PIN2_TEST);
		Delay_Ms(200);
		GPIO_ResetBits(GPIO_GROUP_TEST, GPIO_PIN3_TEST);
		Delay_Ms(200);
	}
}
