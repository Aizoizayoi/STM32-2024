#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void){

	//库函数模式通过调用各种函数来进行配置和输出，在使用之前
	//要弄明白期间的驱动模式，然后根据函数说明进行配置
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	//总线的中断使能两个参数
	//第一个参数是选择总线，根据要控制的IO口在哪条线选
	//第二个参数是该总线中断的使能
	
	GPIO_InitTypeDef GPIO_InitStruct;
	//初始化IO口用的结构体，类型为GPIO_InitTypeDef
	//结构体名子为GPIO_InitStruct
	
	
	//结构体内的变量
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	//初始化输出模式，推挽、上拉、开漏等
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
	//初始化GPIOA或GPIOB中哪个具体的一位引脚
	//如果每个都要初始化可以用 GPIO_Pin_All
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	//初始化输出频率
	
	

	GPIO_Init(GPIOC, &GPIO_InitStruct);
	//IO口初始化函数，第一个参数选择要初始化的引脚
	//第二个参数是一个结构体，结构体里包含了要初始化的三个参数
	
	//四个用于输出电平的函数:
	//GPIO_SetBits(GPIOC,GPIO_Pin_13);
	//输出低电平
	//GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	//输出高电平
	
	//GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_SET);
	//第三个参数为Bit_RESET输出低电平
	//GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_RESET);
	//第三个参数为Bit_SET输出高电平
	while(1){
		
	}
	
}
