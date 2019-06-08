 
#ifndef __STM8L15x_H
 #define __STM8L15x_H


// 01111111 = 127
// 10000000 = -128
// 11111111 = -1







//	int s_GSINIT ;reset 0x8000
//	int 0x0000 ;trap	0x8004 Software interrupt
//	int 0x0000 ;int0	0x8008 TLI External Top level Interrupt
//	int 0x0000 ;int1	0x800c FLASH end of programing/ write attempted toprotected page interrupt
//	int 0x0000 ;int2	0x8010 DMA1 channels 0/1 half transaction/transaction complete interrupt
//	int 0x0000 ;int3	0x8014 DMA1 channels 2/3 half transaction/transaction complete interrupt
//	int 0x0000 ;int4	0x8018 RTC alarm A/ wakeup
//	int 0x0000 ;int5	0x801c External interrupt port E/F  PVD interrupt
//	int 0x0000 ;int6	0x8020 External interrupt port B/G
//	int 0x0000 ;int7	0x8024 External interrupt port D/H
//	int 0x0000 ;int8	0x8028 EXTI0
//	int 0x0000 ;int9	0x802c EXTI0
//	int 0x0000 ;int10	0x8030 EXTI0
//	int 0x0000 ;int11	0x8034 EXTI0
//	int 0x0000 ;int12	0x8038 EXTI0
//	int 0x0000 ;int13	0x803c EXTI0
//	int 0x0000 ;int14	0x8040 EXTI0
//	int 0x0000 ;int15	0x8044 EXTI0
//	int 0x0000 ;int16	0x8048 LCD IT
//	int 0x0000 ;int17	0x804c CLK system clock switch/CSS interrupt/TIM 1 break/DAC
//	int 0x0000 ;int18	0x8050 COMP1 interruptCOMP2 interruptACD1 end of conversion/analog watchdog/overrun interrupt
//	int 0x0000 ;int19	0x8054 TIM2 update/overflow/ trigger/break interrupt
//	int 0x0000 ;int20	0x8058 TIM2 capture/compare interrupt
//	int 0x0000 ;int21	0x805c TIM3 update/overflow/ trigger/break interrupt
//	int 0x0000 ;int22	0x8060 TIM3 capture/compare interrupt
//	int 0x0000 ;int23	0x8064 TIM1 Update /overflow/trigger/COM
//	int 0x0000 ;int24	0x8068 TIM1 Capture/compare
//	int 0x0000 ;int25	0x806c TIM4 update/overflow/trigger interrupt
//	int 0x0000 ;int26	0x8070 SPI1 TX buffer empty/RX buffer not empty/error/wakeup interrupt
//	int 0x0000 ;int27	0x8074 USART1 transmit data register empty/transmission complete interrupt
//	int 0x0000 ;int28	0x8078 USART1 received data ready/overrun error/idle line detected/parity error/global error interrupt
//	int 0x0000 ;int29	0x807c I2C1 interrupt(3

#define VREFINT_Factory_CONV	*(unsigned char*)0x4910    //-VREFINT_Factory_CONV  Internal reference voltage factory conversion
#define TS_Factory_CONV_V90		*(unsigned char*)0x4911    //-TS_Factory_CONV_V90   Temperature sensor output voltage

#define  UID0  		*(unsigned char*)0x4926    //- X co-ordinate on the wafer
#define  UID1 		*(unsigned char*)0x4927    //- X co-ordinate on the wafer
#define  UID2 	 	*(unsigned char*)0x4928    //- Y co-ordinate on the wafer
#define  UID3  		*(unsigned char*)0x4929    //- Y co-ordinate on the wafer
#define  UID4 		*(unsigned char*)0x492A    //- Wafer number
#define  UID5  		*(unsigned char*)0x492B    //- Lot number
#define  UID6 		*(unsigned char*)0x492C    //- Lot number
#define  UID7  		*(unsigned char*)0x492D    //- Lot number
#define  UID8  		*(unsigned char*)0x492E    //- Lot number
#define  UID9  		*(unsigned char*)0x492F    //- Lot number
#define  UID10  	*(unsigned char*)0x4930    //- Lot number
#define  UID11  	*(unsigned char*)0x4931    //- Lot number

#define PCL  *(unsigned char*)0x7F03

#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */

/*!< Signed integer types  */
typedef   signed char     int8_t;
typedef   signed short    int16_t;
typedef   signed long     int32_t;

/*!< Unsigned integer types  */
typedef unsigned char     uint8_t;
typedef unsigned short    uint16_t;
typedef unsigned long     uint32_t;

/*!< STM8Lx Standard Peripheral Library old types (maintained for legacy purpose) */

typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;


#define U8_MAX     (255)
#define S8_MAX     (127)
#define S8_MIN     (-128)
#define U16_MAX    (65535u)
#define S16_MAX    (32767)
#define S16_MIN    (-32768)
#define U32_MAX    (4294967295uL)
#define S32_MAX    (2147483647)
#define S32_MIN    (-2147483648uL)


#define PIN_0 ((uint8_t)0x01)
#define PIN_1 ((uint8_t)0x02)
#define PIN_2 ((uint8_t)0x04)
#define PIN_3 ((uint8_t)0x08)
#define PIN_4 ((uint8_t)0x10)
#define PIN_5 ((uint8_t)0x20)
#define PIN_6 ((uint8_t)0x40)
#define PIN_7 ((uint8_t)0x80)
#define PIN_All ((uint8_t)0xFF)




#define OPT_POR *(unsigned char*)0x4800
#define OPT_POR_bres(X) __asm bres 0x4800,X __endasm
#define OPT_POR_bset(X) __asm bset 0x4800,X __endasm
#define OPT_POR_bcpl(X) __asm bcpl 0x4800,X __endasm
#define OPT_POR_clr() __asm clr 0x4800 __endasm

#define OPT_UBC *(unsigned char*)0x4802
#define OPT_UBC_bres(X) __asm bres 0x4802,X __endasm
#define OPT_UBC_bset(X) __asm bset 0x4802,X __endasm
#define OPT_UBC_bcpl(X) __asm bcpl 0x4802,X __endasm
#define OPT_UBC_clr() __asm clr 0x4802 __endasm

#define OPT_PCODESIZE *(unsigned char*)0x4807
#define OPT_PCODESIZE_bres(X) __asm bres 0x4807,X __endasm
#define OPT_PCODESIZE_bset(X) __asm bset 0x4807,X __endasm
#define OPT_PCODESIZE_bcpl(X) __asm bcpl 0x4807,X __endasm
#define OPT_PCODESIZE_clr() __asm clr 0x4807 __endasm

#define OPT_WDG *(unsigned char*)0x4808
#define OPT_WDG_bres(X) __asm bres 0x4808,X __endasm
#define OPT_WDG_bset(X) __asm bset 0x4808,X __endasm
#define OPT_WDG_bcpl(X) __asm bcpl 0x4808,X __endasm
#define OPT_WDG_clr() __asm clr 0x4808 __endasm

#define OPT_XTSTARTUP *(unsigned char*)0x4809
#define OPT_XTSTARTUP_bres(X) __asm bres 0x4809,X __endasm
#define OPT_XTSTARTUP_bset(X) __asm bset 0x4809,X __endasm
#define OPT_XTSTARTUP_bcpl(X) __asm bcpl 0x4809,X __endasm
#define OPT_XTSTARTUP_clr() __asm clr 0x4809 __endasm

#define OPT_BOR *(unsigned char*)0x480A
#define OPT_BOR_bres(X) __asm bres 0x480A,X __endasm
#define OPT_BOR_bset(X) __asm bset 0x480A,X __endasm
#define OPT_BOR_bcpl(X) __asm bcpl 0x480A,X __endasm
#define OPT_BOR_clr() __asm clr 0x480A __endasm

#define GPIOA_ODR *(unsigned char*)0x5000
#define GPIOA_ODR_bres(X) __asm bres 0x5000,X __endasm
#define GPIOA_ODR_bset(X) __asm bset 0x5000,X __endasm
#define GPIOA_ODR_bcpl(X) __asm bcpl 0x5000,X __endasm
#define GPIOA_ODR_clr() __asm clr 0x5000 __endasm

#define GPIOA_IDR *(unsigned char*)0x5001
#define GPIOA_IDR_bres(X) __asm bres 0x5001,X __endasm
#define GPIOA_IDR_bset(X) __asm bset 0x5001,X __endasm
#define GPIOA_IDR_bcpl(X) __asm bcpl 0x5001,X __endasm
#define GPIOA_IDR_clr() __asm clr 0x5001 __endasm

#define GPIOA_DDR *(unsigned char*)0x5002
#define GPIOA_DDR_bres(X) __asm bres 0x5002,X __endasm
#define GPIOA_DDR_bset(X) __asm bset 0x5002,X __endasm
#define GPIOA_DDR_bcpl(X) __asm bcpl 0x5002,X __endasm
#define GPIOA_DDR_clr() __asm clr 0x5002 __endasm

#define GPIOA_CR1 *(unsigned char*)0x5003
#define GPIOA_CR1_bres(X) __asm bres 0x5003,X __endasm
#define GPIOA_CR1_bset(X) __asm bset 0x5003,X __endasm
#define GPIOA_CR1_bcpl(X) __asm bcpl 0x5003,X __endasm
#define GPIOA_CR1_clr() __asm clr 0x5003 __endasm

#define GPIOA_CR2 *(unsigned char*)0x5004
#define GPIOA_CR2_bres(X) __asm bres 0x5004,X __endasm
#define GPIOA_CR2_bset(X) __asm bset 0x5004,X __endasm
#define GPIOA_CR2_bcpl(X) __asm bcpl 0x5004,X __endasm
#define GPIOA_CR2_clr() __asm clr 0x5004 __endasm

#define GPIOB_ODR *(unsigned char*)0x5005
#define GPIOB_ODR_bres(X) __asm bres 0x5005,X __endasm
#define GPIOB_ODR_bset(X) __asm bset 0x5005,X __endasm
#define GPIOB_ODR_bcpl(X) __asm bcpl 0x5005,X __endasm
#define GPIOB_ODR_clr() __asm clr 0x5005 __endasm

#define GPIOB_IDR *(unsigned char*)0x5006
#define GPIOB_IDR_bres(X) __asm bres 0x5006,X __endasm
#define GPIOB_IDR_bset(X) __asm bset 0x5006,X __endasm
#define GPIOB_IDR_bcpl(X) __asm bcpl 0x5006,X __endasm
#define GPIOB_IDR_clr() __asm clr 0x5006 __endasm

#define GPIOB_DDR *(unsigned char*)0x5007
#define GPIOB_DDR_bres(X) __asm bres 0x5007,X __endasm
#define GPIOB_DDR_bset(X) __asm bset 0x5007,X __endasm
#define GPIOB_DDR_bcpl(X) __asm bcpl 0x5007,X __endasm
#define GPIOB_DDR_clr() __asm clr 0x5007 __endasm

#define GPIOB_CR1 *(unsigned char*)0x5008
#define GPIOB_CR1_bres(X) __asm bres 0x5008,X __endasm
#define GPIOB_CR1_bset(X) __asm bset 0x5008,X __endasm
#define GPIOB_CR1_bcpl(X) __asm bcpl 0x5008,X __endasm
#define GPIOB_CR1_clr() __asm clr 0x5008 __endasm

#define GPIOB_CR2 *(unsigned char*)0x5009
#define GPIOB_CR2_bres(X) __asm bres 0x5009,X __endasm
#define GPIOB_CR2_bset(X) __asm bset 0x5009,X __endasm
#define GPIOB_CR2_bcpl(X) __asm bcpl 0x5009,X __endasm
#define GPIOB_CR2_clr() __asm clr 0x5009 __endasm

#define GPIOC_ODR *(unsigned char*)0x500A
#define GPIOC_ODR_bres(X) __asm bres 0x500A,X __endasm
#define GPIOC_ODR_bset(X) __asm bset 0x500A,X __endasm
#define GPIOC_ODR_bcpl(X) __asm bcpl 0x500A,X __endasm
#define GPIOC_ODR_clr() __asm clr 0x500A __endasm

#define GPIOC_IDR *(unsigned char*)0x500B
#define GPIOC_IDR_bres(X) __asm bres 0x500B,X __endasm
#define GPIOC_IDR_bset(X) __asm bset 0x500B,X __endasm
#define GPIOC_IDR_bcpl(X) __asm bcpl 0x500B,X __endasm
#define GPIOC_IDR_clr() __asm clr 0x500B __endasm

#define GPIOC_DDR *(unsigned char*)0x500C
#define GPIOC_DDR_bres(X) __asm bres 0x500C,X __endasm
#define GPIOC_DDR_bset(X) __asm bset 0x500C,X __endasm
#define GPIOC_DDR_bcpl(X) __asm bcpl 0x500C,X __endasm
#define GPIOC_DDR_clr() __asm clr 0x500C __endasm

#define GPIOC_CR1 *(unsigned char*)0x500D
#define GPIOC_CR1_bres(X) __asm bres 0x500D,X __endasm
#define GPIOC_CR1_bset(X) __asm bset 0x500D,X __endasm
#define GPIOC_CR1_bcpl(X) __asm bcpl 0x500D,X __endasm
#define GPIOC_CR1_clr() __asm clr 0x500D __endasm

#define GPIOC_CR2 *(unsigned char*)0x500E
#define GPIOC_CR2_bres(X) __asm bres 0x500E,X __endasm
#define GPIOC_CR2_bset(X) __asm bset 0x500E,X __endasm
#define GPIOC_CR2_bcpl(X) __asm bcpl 0x500E,X __endasm
#define GPIOC_CR2_clr() __asm clr 0x500E __endasm

#define GPIOD_ODR *(unsigned char*)0x500F
#define GPIOD_ODR_bres(X) __asm bres 0x500F,X __endasm
#define GPIOD_ODR_bset(X) __asm bset 0x500F,X __endasm
#define GPIOD_ODR_bcpl(X) __asm bcpl 0x500F,X __endasm
#define GPIOD_ODR_clr() __asm clr 0x500F __endasm

#define GPIOD_IDR *(unsigned char*)0x5010
#define GPIOD_IDR_bres(X) __asm bres 0x5010,X __endasm
#define GPIOD_IDR_bset(X) __asm bset 0x5010,X __endasm
#define GPIOD_IDR_bcpl(X) __asm bcpl 0x5010,X __endasm
#define GPIOD_IDR_clr() __asm clr 0x5010 __endasm

#define GPIOD_DDR *(unsigned char*)0x5011
#define GPIOD_DDR_bres(X) __asm bres 0x5011,X __endasm
#define GPIOD_DDR_bset(X) __asm bset 0x5011,X __endasm
#define GPIOD_DDR_bcpl(X) __asm bcpl 0x5011,X __endasm
#define GPIOD_DDR_clr() __asm clr 0x5011 __endasm

#define GPIOD_CR1 *(unsigned char*)0x5012
#define GPIOD_CR1_bres(X) __asm bres 0x5012,X __endasm
#define GPIOD_CR1_bset(X) __asm bset 0x5012,X __endasm
#define GPIOD_CR1_bcpl(X) __asm bcpl 0x5012,X __endasm
#define GPIOD_CR1_clr() __asm clr 0x5012 __endasm

#define GPIOD_CR2 *(unsigned char*)0x5013
#define GPIOD_CR2_bres(X) __asm bres 0x5013,X __endasm
#define GPIOD_CR2_bset(X) __asm bset 0x5013,X __endasm
#define GPIOD_CR2_bcpl(X) __asm bcpl 0x5013,X __endasm
#define GPIOD_CR2_clr() __asm clr 0x5013 __endasm

#define GPIOE_ODR *(unsigned char*)0x5014
#define GPIOE_ODR_bres(X) __asm bres 0x5014,X __endasm
#define GPIOE_ODR_bset(X) __asm bset 0x5014,X __endasm
#define GPIOE_ODR_bcpl(X) __asm bcpl 0x5014,X __endasm
#define GPIOE_ODR_clr() __asm clr 0x5014 __endasm

#define GPIOE_IDR *(unsigned char*)0x5015
#define GPIOE_IDR_bres(X) __asm bres 0x5015,X __endasm
#define GPIOE_IDR_bset(X) __asm bset 0x5015,X __endasm
#define GPIOE_IDR_bcpl(X) __asm bcpl 0x5015,X __endasm
#define GPIOE_IDR_clr() __asm clr 0x5015 __endasm

#define GPIOE_DDR *(unsigned char*)0x5016
#define GPIOE_DDR_bres(X) __asm bres 0x5016,X __endasm
#define GPIOE_DDR_bset(X) __asm bset 0x5016,X __endasm
#define GPIOE_DDR_bcpl(X) __asm bcpl 0x5016,X __endasm
#define GPIOE_DDR_clr() __asm clr 0x5016 __endasm

#define GPIOE_CR1 *(unsigned char*)0x5017
#define GPIOE_CR1_bres(X) __asm bres 0x5017,X __endasm
#define GPIOE_CR1_bset(X) __asm bset 0x5017,X __endasm
#define GPIOE_CR1_bcpl(X) __asm bcpl 0x5017,X __endasm
#define GPIOE_CR1_clr() __asm clr 0x5017 __endasm

#define GPIOE_CR2 *(unsigned char*)0x5018
#define GPIOE_CR2_bres(X) __asm bres 0x5018,X __endasm
#define GPIOE_CR2_bset(X) __asm bset 0x5018,X __endasm
#define GPIOE_CR2_bcpl(X) __asm bcpl 0x5018,X __endasm
#define GPIOE_CR2_clr() __asm clr 0x5018 __endasm

#define GPIOF_ODR *(unsigned char*)0x5019
#define GPIOF_ODR_bres(X) __asm bres 0x5019,X __endasm
#define GPIOF_ODR_bset(X) __asm bset 0x5019,X __endasm
#define GPIOF_ODR_bcpl(X) __asm bcpl 0x5019,X __endasm
#define GPIOF_ODR_clr() __asm clr 0x5019 __endasm

#define GPIOF_IDR *(unsigned char*)0x501A
#define GPIOF_IDR_bres(X) __asm bres 0x501A,X __endasm
#define GPIOF_IDR_bset(X) __asm bset 0x501A,X __endasm
#define GPIOF_IDR_bcpl(X) __asm bcpl 0x501A,X __endasm
#define GPIOF_IDR_clr() __asm clr 0x501A __endasm

#define GPIOF_DDR *(unsigned char*)0x501B
#define GPIOF_DDR_bres(X) __asm bres 0x501B,X __endasm
#define GPIOF_DDR_bset(X) __asm bset 0x501B,X __endasm
#define GPIOF_DDR_bcpl(X) __asm bcpl 0x501B,X __endasm
#define GPIOF_DDR_clr() __asm clr 0x501B __endasm

#define GPIOF_CR1 *(unsigned char*)0x501C
#define GPIOF_CR1_bres(X) __asm bres 0x501C,X __endasm
#define GPIOF_CR1_bset(X) __asm bset 0x501C,X __endasm
#define GPIOF_CR1_bcpl(X) __asm bcpl 0x501C,X __endasm
#define GPIOF_CR1_clr() __asm clr 0x501C __endasm

#define GPIOF_CR2 *(unsigned char*)0x501D
#define GPIOF_CR2_bres(X) __asm bres 0x501D,X __endasm
#define GPIOF_CR2_bset(X) __asm bset 0x501D,X __endasm
#define GPIOF_CR2_bcpl(X) __asm bcpl 0x501D,X __endasm
#define GPIOF_CR2_clr() __asm clr 0x501D __endasm

#define FLASH_CR1 *(unsigned char*)0x5050
#define FLASH_CR1_bres(X) __asm bres 0x5050,X __endasm
#define FLASH_CR1_bset(X) __asm bset 0x5050,X __endasm
#define FLASH_CR1_bcpl(X) __asm bcpl 0x5050,X __endasm
#define FLASH_CR1_clr() __asm clr 0x5050 __endasm

#define FLASH_CR2 *(unsigned char*)0x5051
#define FLASH_CR2_bres(X) __asm bres 0x5051,X __endasm
#define FLASH_CR2_bset(X) __asm bset 0x5051,X __endasm
#define FLASH_CR2_bcpl(X) __asm bcpl 0x5051,X __endasm
#define FLASH_CR2_clr() __asm clr 0x5051 __endasm

#define FLASH_PUKR *(unsigned char*)0x5052
#define FLASH_PUKR_bres(X) __asm bres 0x5052,X __endasm
#define FLASH_PUKR_bset(X) __asm bset 0x5052,X __endasm
#define FLASH_PUKR_bcpl(X) __asm bcpl 0x5052,X __endasm
#define FLASH_PUKR_clr() __asm clr 0x5052 __endasm

#define FLASH_DUKR *(unsigned char*)0x5053
#define FLASH_DUKR_bres(X) __asm bres 0x5053,X __endasm
#define FLASH_DUKR_bset(X) __asm bset 0x5053,X __endasm
#define FLASH_DUKR_bcpl(X) __asm bcpl 0x5053,X __endasm
#define FLASH_DUKR_clr() __asm clr 0x5053 __endasm

#define FLASH_IAPSR *(unsigned char*)0x5054
#define FLASH_IAPSR_bres(X) __asm bres 0x5054,X __endasm
#define FLASH_IAPSR_bset(X) __asm bset 0x5054,X __endasm
#define FLASH_IAPSR_bcpl(X) __asm bcpl 0x5054,X __endasm
#define FLASH_IAPSR_clr() __asm clr 0x5054 __endasm

#define DMA1_GCSR *(unsigned char*)0x5070
#define DMA1_GCSR_bres(X) __asm bres 0x5070,X __endasm
#define DMA1_GCSR_bset(X) __asm bset 0x5070,X __endasm
#define DMA1_GCSR_bcpl(X) __asm bcpl 0x5070,X __endasm
#define DMA1_GCSR_clr() __asm clr 0x5070 __endasm

#define DMA1_GIR1 *(unsigned char*)0x5071
#define DMA1_GIR1_bres(X) __asm bres 0x5071,X __endasm
#define DMA1_GIR1_bset(X) __asm bset 0x5071,X __endasm
#define DMA1_GIR1_bcpl(X) __asm bcpl 0x5071,X __endasm
#define DMA1_GIR1_clr() __asm clr 0x5071 __endasm

#define DMA1_Channel0_CCR *(unsigned char*)0x5075
#define DMA1_Channel0_CCR_bres(X) __asm bres 0x5075,X __endasm
#define DMA1_Channel0_CCR_bset(X) __asm bset 0x5075,X __endasm
#define DMA1_Channel0_CCR_bcpl(X) __asm bcpl 0x5075,X __endasm
#define DMA1_Channel0_CCR_clr() __asm clr 0x5075 __endasm

#define DMA1_Channel0_CSPR *(unsigned char*)0x5076
#define DMA1_Channel0_CSPR_bres(X) __asm bres 0x5076,X __endasm
#define DMA1_Channel0_CSPR_bset(X) __asm bset 0x5076,X __endasm
#define DMA1_Channel0_CSPR_bcpl(X) __asm bcpl 0x5076,X __endasm
#define DMA1_Channel0_CSPR_clr() __asm clr 0x5076 __endasm

#define DMA1_Channel0_CNBTR *(unsigned char*)0x5077
#define DMA1_Channel0_CNBTR_bres(X) __asm bres 0x5077,X __endasm
#define DMA1_Channel0_CNBTR_bset(X) __asm bset 0x5077,X __endasm
#define DMA1_Channel0_CNBTR_bcpl(X) __asm bcpl 0x5077,X __endasm
#define DMA1_Channel0_CNBTR_clr() __asm clr 0x5077 __endasm

#define DMA1_Channel0_CPARH *(unsigned char*)0x5078
#define DMA1_Channel0_CPARH_bres(X) __asm bres 0x5078,X __endasm
#define DMA1_Channel0_CPARH_bset(X) __asm bset 0x5078,X __endasm
#define DMA1_Channel0_CPARH_bcpl(X) __asm bcpl 0x5078,X __endasm
#define DMA1_Channel0_CPARH_clr() __asm clr 0x5078 __endasm

#define DMA1_Channel0_CPARL *(unsigned char*)0x5079
#define DMA1_Channel0_CPARL_bres(X) __asm bres 0x5079,X __endasm
#define DMA1_Channel0_CPARL_bset(X) __asm bset 0x5079,X __endasm
#define DMA1_Channel0_CPARL_bcpl(X) __asm bcpl 0x5079,X __endasm
#define DMA1_Channel0_CPARL_clr() __asm clr 0x5079 __endasm

#define DMA1_Channel0_CM0EAR *(unsigned char*)0x507A
#define DMA1_Channel0_CM0EAR_bres(X) __asm bres 0x507A,X __endasm
#define DMA1_Channel0_CM0EAR_bset(X) __asm bset 0x507A,X __endasm
#define DMA1_Channel0_CM0EAR_bcpl(X) __asm bcpl 0x507A,X __endasm
#define DMA1_Channel0_CM0EAR_clr() __asm clr 0x507A __endasm

#define DMA1_Channel0_CM0ARH *(unsigned char*)0x507B
#define DMA1_Channel0_CM0ARH_bres(X) __asm bres 0x507B,X __endasm
#define DMA1_Channel0_CM0ARH_bset(X) __asm bset 0x507B,X __endasm
#define DMA1_Channel0_CM0ARH_bcpl(X) __asm bcpl 0x507B,X __endasm
#define DMA1_Channel0_CM0ARH_clr() __asm clr 0x507B __endasm

#define DMA1_Channel0_CM0ARL *(unsigned char*)0x507C
#define DMA1_Channel0_CM0ARL_bres(X) __asm bres 0x507C,X __endasm
#define DMA1_Channel0_CM0ARL_bset(X) __asm bset 0x507C,X __endasm
#define DMA1_Channel0_CM0ARL_bcpl(X) __asm bcpl 0x507C,X __endasm
#define DMA1_Channel0_CM0ARL_clr() __asm clr 0x507C __endasm

#define DMA1_Channel1_CCR *(unsigned char*)0x507F
#define DMA1_Channel1_CCR_bres(X) __asm bres 0x507F,X __endasm
#define DMA1_Channel1_CCR_bset(X) __asm bset 0x507F,X __endasm
#define DMA1_Channel1_CCR_bcpl(X) __asm bcpl 0x507F,X __endasm
#define DMA1_Channel1_CCR_clr() __asm clr 0x507F __endasm

#define DMA1_Channel1_CSPR *(unsigned char*)0x5080
#define DMA1_Channel1_CSPR_bres(X) __asm bres 0x5080,X __endasm
#define DMA1_Channel1_CSPR_bset(X) __asm bset 0x5080,X __endasm
#define DMA1_Channel1_CSPR_bcpl(X) __asm bcpl 0x5080,X __endasm
#define DMA1_Channel1_CSPR_clr() __asm clr 0x5080 __endasm

#define DMA1_Channel1_CNBTR *(unsigned char*)0x5081
#define DMA1_Channel1_CNBTR_bres(X) __asm bres 0x5081,X __endasm
#define DMA1_Channel1_CNBTR_bset(X) __asm bset 0x5081,X __endasm
#define DMA1_Channel1_CNBTR_bcpl(X) __asm bcpl 0x5081,X __endasm
#define DMA1_Channel1_CNBTR_clr() __asm clr 0x5081 __endasm

#define DMA1_Channel1_CPARH *(unsigned char*)0x5082
#define DMA1_Channel1_CPARH_bres(X) __asm bres 0x5082,X __endasm
#define DMA1_Channel1_CPARH_bset(X) __asm bset 0x5082,X __endasm
#define DMA1_Channel1_CPARH_bcpl(X) __asm bcpl 0x5082,X __endasm
#define DMA1_Channel1_CPARH_clr() __asm clr 0x5082 __endasm

#define DMA1_Channel1_CPARL *(unsigned char*)0x5083
#define DMA1_Channel1_CPARL_bres(X) __asm bres 0x5083,X __endasm
#define DMA1_Channel1_CPARL_bset(X) __asm bset 0x5083,X __endasm
#define DMA1_Channel1_CPARL_bcpl(X) __asm bcpl 0x5083,X __endasm
#define DMA1_Channel1_CPARL_clr() __asm clr 0x5083 __endasm

#define DMA1_Channel1_CM0EAR *(unsigned char*)0x5084
#define DMA1_Channel1_CM0EAR_bres(X) __asm bres 0x5084,X __endasm
#define DMA1_Channel1_CM0EAR_bset(X) __asm bset 0x5084,X __endasm
#define DMA1_Channel1_CM0EAR_bcpl(X) __asm bcpl 0x5084,X __endasm
#define DMA1_Channel1_CM0EAR_clr() __asm clr 0x5084 __endasm

#define DMA1_Channel1_CM0ARH *(unsigned char*)0x5085
#define DMA1_Channel1_CM0ARH_bres(X) __asm bres 0x5085,X __endasm
#define DMA1_Channel1_CM0ARH_bset(X) __asm bset 0x5085,X __endasm
#define DMA1_Channel1_CM0ARH_bcpl(X) __asm bcpl 0x5085,X __endasm
#define DMA1_Channel1_CM0ARH_clr() __asm clr 0x5085 __endasm

#define DMA1_Channel1_CM0ARL *(unsigned char*)0x5086
#define DMA1_Channel1_CM0ARL_bres(X) __asm bres 0x5086,X __endasm
#define DMA1_Channel1_CM0ARL_bset(X) __asm bset 0x5086,X __endasm
#define DMA1_Channel1_CM0ARL_bcpl(X) __asm bcpl 0x5086,X __endasm
#define DMA1_Channel1_CM0ARL_clr() __asm clr 0x5086 __endasm

#define DMA1_Channel2_CCR *(unsigned char*)0x5089
#define DMA1_Channel2_CCR_bres(X) __asm bres 0x5089,X __endasm
#define DMA1_Channel2_CCR_bset(X) __asm bset 0x5089,X __endasm
#define DMA1_Channel2_CCR_bcpl(X) __asm bcpl 0x5089,X __endasm
#define DMA1_Channel2_CCR_clr() __asm clr 0x5089 __endasm

#define DMA1_Channel2_CSPR *(unsigned char*)0x508A
#define DMA1_Channel2_CSPR_bres(X) __asm bres 0x508A,X __endasm
#define DMA1_Channel2_CSPR_bset(X) __asm bset 0x508A,X __endasm
#define DMA1_Channel2_CSPR_bcpl(X) __asm bcpl 0x508A,X __endasm
#define DMA1_Channel2_CSPR_clr() __asm clr 0x508A __endasm

#define DMA1_Channel2_CNBTR *(unsigned char*)0x508B
#define DMA1_Channel2_CNBTR_bres(X) __asm bres 0x508B,X __endasm
#define DMA1_Channel2_CNBTR_bset(X) __asm bset 0x508B,X __endasm
#define DMA1_Channel2_CNBTR_bcpl(X) __asm bcpl 0x508B,X __endasm
#define DMA1_Channel2_CNBTR_clr() __asm clr 0x508B __endasm

#define DMA1_Channel2_CPARH *(unsigned char*)0x508C
#define DMA1_Channel2_CPARH_bres(X) __asm bres 0x508C,X __endasm
#define DMA1_Channel2_CPARH_bset(X) __asm bset 0x508C,X __endasm
#define DMA1_Channel2_CPARH_bcpl(X) __asm bcpl 0x508C,X __endasm
#define DMA1_Channel2_CPARH_clr() __asm clr 0x508C __endasm

#define DMA1_Channel2_CPARL *(unsigned char*)0x508D
#define DMA1_Channel2_CPARL_bres(X) __asm bres 0x508D,X __endasm
#define DMA1_Channel2_CPARL_bset(X) __asm bset 0x508D,X __endasm
#define DMA1_Channel2_CPARL_bcpl(X) __asm bcpl 0x508D,X __endasm
#define DMA1_Channel2_CPARL_clr() __asm clr 0x508D __endasm

#define DMA1_Channel2_CM0EAR *(unsigned char*)0x508E
#define DMA1_Channel2_CM0EAR_bres(X) __asm bres 0x508E,X __endasm
#define DMA1_Channel2_CM0EAR_bset(X) __asm bset 0x508E,X __endasm
#define DMA1_Channel2_CM0EAR_bcpl(X) __asm bcpl 0x508E,X __endasm
#define DMA1_Channel2_CM0EAR_clr() __asm clr 0x508E __endasm

#define DMA1_Channel2_CM0ARH *(unsigned char*)0x508F
#define DMA1_Channel2_CM0ARH_bres(X) __asm bres 0x508F,X __endasm
#define DMA1_Channel2_CM0ARH_bset(X) __asm bset 0x508F,X __endasm
#define DMA1_Channel2_CM0ARH_bcpl(X) __asm bcpl 0x508F,X __endasm
#define DMA1_Channel2_CM0ARH_clr() __asm clr 0x508F __endasm

#define DMA1_Channel2_CM0ARL *(unsigned char*)0x5090
#define DMA1_Channel2_CM0ARL_bres(X) __asm bres 0x5090,X __endasm
#define DMA1_Channel2_CM0ARL_bset(X) __asm bset 0x5090,X __endasm
#define DMA1_Channel2_CM0ARL_bcpl(X) __asm bcpl 0x5090,X __endasm
#define DMA1_Channel2_CM0ARL_clr() __asm clr 0x5090 __endasm

#define DMA1_Channel3_CCR *(unsigned char*)0x5093
#define DMA1_Channel3_CCR_bres(X) __asm bres 0x5093,X __endasm
#define DMA1_Channel3_CCR_bset(X) __asm bset 0x5093,X __endasm
#define DMA1_Channel3_CCR_bcpl(X) __asm bcpl 0x5093,X __endasm
#define DMA1_Channel3_CCR_clr() __asm clr 0x5093 __endasm

#define DMA1_Channel3_CSPR *(unsigned char*)0x5094
#define DMA1_Channel3_CSPR_bres(X) __asm bres 0x5094,X __endasm
#define DMA1_Channel3_CSPR_bset(X) __asm bset 0x5094,X __endasm
#define DMA1_Channel3_CSPR_bcpl(X) __asm bcpl 0x5094,X __endasm
#define DMA1_Channel3_CSPR_clr() __asm clr 0x5094 __endasm

#define DMA1_Channel3_CNBTR *(unsigned char*)0x5095
#define DMA1_Channel3_CNBTR_bres(X) __asm bres 0x5095,X __endasm
#define DMA1_Channel3_CNBTR_bset(X) __asm bset 0x5095,X __endasm
#define DMA1_Channel3_CNBTR_bcpl(X) __asm bcpl 0x5095,X __endasm
#define DMA1_Channel3_CNBTR_clr() __asm clr 0x5095 __endasm

#define DMA1_Channel3_CPARH *(unsigned char*)0x5096
#define DMA1_Channel3_CPARH_bres(X) __asm bres 0x5096,X __endasm
#define DMA1_Channel3_CPARH_bset(X) __asm bset 0x5096,X __endasm
#define DMA1_Channel3_CPARH_bcpl(X) __asm bcpl 0x5096,X __endasm
#define DMA1_Channel3_CPARH_clr() __asm clr 0x5096 __endasm

#define DMA1_Channel3_CPARL *(unsigned char*)0x5097
#define DMA1_Channel3_CPARL_bres(X) __asm bres 0x5097,X __endasm
#define DMA1_Channel3_CPARL_bset(X) __asm bset 0x5097,X __endasm
#define DMA1_Channel3_CPARL_bcpl(X) __asm bcpl 0x5097,X __endasm
#define DMA1_Channel3_CPARL_clr() __asm clr 0x5097 __endasm

#define DMA1_Channel3_CM0EAR *(unsigned char*)0x5098
#define DMA1_Channel3_CM0EAR_bres(X) __asm bres 0x5098,X __endasm
#define DMA1_Channel3_CM0EAR_bset(X) __asm bset 0x5098,X __endasm
#define DMA1_Channel3_CM0EAR_bcpl(X) __asm bcpl 0x5098,X __endasm
#define DMA1_Channel3_CM0EAR_clr() __asm clr 0x5098 __endasm

#define DMA1_Channel3_CM0ARH *(unsigned char*)0x5099
#define DMA1_Channel3_CM0ARH_bres(X) __asm bres 0x5099,X __endasm
#define DMA1_Channel3_CM0ARH_bset(X) __asm bset 0x5099,X __endasm
#define DMA1_Channel3_CM0ARH_bcpl(X) __asm bcpl 0x5099,X __endasm
#define DMA1_Channel3_CM0ARH_clr() __asm clr 0x5099 __endasm

#define DMA1_Channel3_CM0ARL *(unsigned char*)0x509A
#define DMA1_Channel3_CM0ARL_bres(X) __asm bres 0x509A,X __endasm
#define DMA1_Channel3_CM0ARL_bset(X) __asm bset 0x509A,X __endasm
#define DMA1_Channel3_CM0ARL_bcpl(X) __asm bcpl 0x509A,X __endasm
#define DMA1_Channel3_CM0ARL_clr() __asm clr 0x509A __endasm

#define SYSCFG_RMPCR3 *(unsigned char*)0x509D
#define SYSCFG_RMPCR3_bres(X) __asm bres 0x509D,X __endasm
#define SYSCFG_RMPCR3_bset(X) __asm bset 0x509D,X __endasm
#define SYSCFG_RMPCR3_bcpl(X) __asm bcpl 0x509D,X __endasm
#define SYSCFG_RMPCR3_clr() __asm clr 0x509D __endasm

#define SYSCFG_RMPCR1 *(unsigned char*)0x509E
#define SYSCFG_RMPCR1_bres(X) __asm bres 0x509E,X __endasm
#define SYSCFG_RMPCR1_bset(X) __asm bset 0x509E,X __endasm
#define SYSCFG_RMPCR1_bcpl(X) __asm bcpl 0x509E,X __endasm
#define SYSCFG_RMPCR1_clr() __asm clr 0x509E __endasm

#define SYSCFG_RMPCR2 *(unsigned char*)0x509F
#define SYSCFG_RMPCR2_bres(X) __asm bres 0x509F,X __endasm
#define SYSCFG_RMPCR2_bset(X) __asm bset 0x509F,X __endasm
#define SYSCFG_RMPCR2_bcpl(X) __asm bcpl 0x509F,X __endasm
#define SYSCFG_RMPCR2_clr() __asm clr 0x509F __endasm

#define EXTI_CR1 *(unsigned char*)0x50A0
#define EXTI_CR1_bres(X) __asm bres 0x50A0,X __endasm
#define EXTI_CR1_bset(X) __asm bset 0x50A0,X __endasm
#define EXTI_CR1_bcpl(X) __asm bcpl 0x50A0,X __endasm
#define EXTI_CR1_clr() __asm clr 0x50A0 __endasm

#define EXTI_CR2 *(unsigned char*)0x50A1
#define EXTI_CR2_bres(X) __asm bres 0x50A1,X __endasm
#define EXTI_CR2_bset(X) __asm bset 0x50A1,X __endasm
#define EXTI_CR2_bcpl(X) __asm bcpl 0x50A1,X __endasm
#define EXTI_CR2_clr() __asm clr 0x50A1 __endasm

#define EXTI_CR3 *(unsigned char*)0x50A2
#define EXTI_CR3_bres(X) __asm bres 0x50A2,X __endasm
#define EXTI_CR3_bset(X) __asm bset 0x50A2,X __endasm
#define EXTI_CR3_bcpl(X) __asm bcpl 0x50A2,X __endasm
#define EXTI_CR3_clr() __asm clr 0x50A2 __endasm

#define EXTI_SR1 *(unsigned char*)0x50A3
#define EXTI_SR1_bres(X) __asm bres 0x50A3,X __endasm
#define EXTI_SR1_bset(X) __asm bset 0x50A3,X __endasm
#define EXTI_SR1_bcpl(X) __asm bcpl 0x50A3,X __endasm
#define EXTI_SR1_clr() __asm clr 0x50A3 __endasm

#define EXTI_SR2 *(unsigned char*)0x50A4
#define EXTI_SR2_bres(X) __asm bres 0x50A4,X __endasm
#define EXTI_SR2_bset(X) __asm bset 0x50A4,X __endasm
#define EXTI_SR2_bcpl(X) __asm bcpl 0x50A4,X __endasm
#define EXTI_SR2_clr() __asm clr 0x50A4 __endasm

#define EXTI_CONF1 *(unsigned char*)0x50A5
#define EXTI_CONF1_bres(X) __asm bres 0x50A5,X __endasm
#define EXTI_CONF1_bset(X) __asm bset 0x50A5,X __endasm
#define EXTI_CONF1_bcpl(X) __asm bcpl 0x50A5,X __endasm
#define EXTI_CONF1_clr() __asm clr 0x50A5 __endasm

#define EXTI_CR4 *(unsigned char*)0x50AA
#define EXTI_CR4_bres(X) __asm bres 0x50AA,X __endasm
#define EXTI_CR4_bset(X) __asm bset 0x50AA,X __endasm
#define EXTI_CR4_bcpl(X) __asm bcpl 0x50AA,X __endasm
#define EXTI_CR4_clr() __asm clr 0x50AA __endasm

#define EXTI_CONF2 *(unsigned char*)0x50AB
#define EXTI_CONF2_bres(X) __asm bres 0x50AB,X __endasm
#define EXTI_CONF2_bset(X) __asm bset 0x50AB,X __endasm
#define EXTI_CONF2_bcpl(X) __asm bcpl 0x50AB,X __endasm
#define EXTI_CONF2_clr() __asm clr 0x50AB __endasm

#define WFE_CR1 *(unsigned char*)0x50A6
#define WFE_CR1_bres(X) __asm bres 0x50A6,X __endasm
#define WFE_CR1_bset(X) __asm bset 0x50A6,X __endasm
#define WFE_CR1_bcpl(X) __asm bcpl 0x50A6,X __endasm
#define WFE_CR1_clr() __asm clr 0x50A6 __endasm

#define WFE_CR2 *(unsigned char*)0x50A7
#define WFE_CR2_bres(X) __asm bres 0x50A7,X __endasm
#define WFE_CR2_bset(X) __asm bset 0x50A7,X __endasm
#define WFE_CR2_bcpl(X) __asm bcpl 0x50A7,X __endasm
#define WFE_CR2_clr() __asm clr 0x50A7 __endasm

#define WFE_CR3 *(unsigned char*)0x50A8
#define WFE_CR3_bres(X) __asm bres 0x50A8,X __endasm
#define WFE_CR3_bset(X) __asm bset 0x50A8,X __endasm
#define WFE_CR3_bcpl(X) __asm bcpl 0x50A8,X __endasm
#define WFE_CR3_clr() __asm clr 0x50A8 __endasm

#define WFE_CR4 *(unsigned char*)0x50A9
#define WFE_CR4_bres(X) __asm bres 0x50A9,X __endasm
#define WFE_CR4_bset(X) __asm bset 0x50A9,X __endasm
#define WFE_CR4_bcpl(X) __asm bcpl 0x50A9,X __endasm
#define WFE_CR4_clr() __asm clr 0x50A9 __endasm

#define RST_CR *(unsigned char*)0x50B0
#define RST_CR_bres(X) __asm bres 0x50B0,X __endasm
#define RST_CR_bset(X) __asm bset 0x50B0,X __endasm
#define RST_CR_bcpl(X) __asm bcpl 0x50B0,X __endasm
#define RST_CR_clr() __asm clr 0x50B0 __endasm

#define RST_SR *(unsigned char*)0x50B1
#define RST_SR_bres(X) __asm bres 0x50B1,X __endasm
#define RST_SR_bset(X) __asm bset 0x50B1,X __endasm
#define RST_SR_bcpl(X) __asm bcpl 0x50B1,X __endasm
#define RST_SR_clr() __asm clr 0x50B1 __endasm

#define PWR_CSR1 *(unsigned char*)0x50B2
#define PWR_CSR1_bres(X) __asm bres 0x50B2,X __endasm
#define PWR_CSR1_bset(X) __asm bset 0x50B2,X __endasm
#define PWR_CSR1_bcpl(X) __asm bcpl 0x50B2,X __endasm
#define PWR_CSR1_clr() __asm clr 0x50B2 __endasm

#define PWR_CSR2 *(unsigned char*)0x50B3
#define PWR_CSR2_bres(X) __asm bres 0x50B3,X __endasm
#define PWR_CSR2_bset(X) __asm bset 0x50B3,X __endasm
#define PWR_CSR2_bcpl(X) __asm bcpl 0x50B3,X __endasm
#define PWR_CSR2_clr() __asm clr 0x50B3 __endasm

#define CLK_CKDIVR *(unsigned char*)0x50C0
#define CLK_CKDIVR_bres(X) __asm bres 0x50C0,X __endasm
#define CLK_CKDIVR_bset(X) __asm bset 0x50C0,X __endasm
#define CLK_CKDIVR_bcpl(X) __asm bcpl 0x50C0,X __endasm
#define CLK_CKDIVR_clr() __asm clr 0x50C0 __endasm

#define CLK_CRTCR *(unsigned char*)0x50C1
#define CLK_CRTCR_bres(X) __asm bres 0x50C1,X __endasm
#define CLK_CRTCR_bset(X) __asm bset 0x50C1,X __endasm
#define CLK_CRTCR_bcpl(X) __asm bcpl 0x50C1,X __endasm
#define CLK_CRTCR_clr() __asm clr 0x50C1 __endasm

#define CLK_ICKCR *(unsigned char*)0x50C2
#define CLK_ICKCR_bres(X) __asm bres 0x50C2,X __endasm
#define CLK_ICKCR_bset(X) __asm bset 0x50C2,X __endasm
#define CLK_ICKCR_bcpl(X) __asm bcpl 0x50C2,X __endasm
#define CLK_ICKCR_clr() __asm clr 0x50C2 __endasm

#define CLK_PCKENR1 *(unsigned char*)0x50C3
#define CLK_PCKENR1_bres(X) __asm bres 0x50C3,X __endasm
#define CLK_PCKENR1_bset(X) __asm bset 0x50C3,X __endasm
#define CLK_PCKENR1_bcpl(X) __asm bcpl 0x50C3,X __endasm
#define CLK_PCKENR1_clr() __asm clr 0x50C3 __endasm

#define CLK_PCKENR2 *(unsigned char*)0x50C4
#define CLK_PCKENR2_bres(X) __asm bres 0x50C4,X __endasm
#define CLK_PCKENR2_bset(X) __asm bset 0x50C4,X __endasm
#define CLK_PCKENR2_bcpl(X) __asm bcpl 0x50C4,X __endasm
#define CLK_PCKENR2_clr() __asm clr 0x50C4 __endasm

#define CLK_CCOR *(unsigned char*)0x50C5
#define CLK_CCOR_bres(X) __asm bres 0x50C5,X __endasm
#define CLK_CCOR_bset(X) __asm bset 0x50C5,X __endasm
#define CLK_CCOR_bcpl(X) __asm bcpl 0x50C5,X __endasm
#define CLK_CCOR_clr() __asm clr 0x50C5 __endasm

#define CLK_ECKCR *(unsigned char*)0x50C6
#define CLK_ECKCR_bres(X) __asm bres 0x50C6,X __endasm
#define CLK_ECKCR_bset(X) __asm bset 0x50C6,X __endasm
#define CLK_ECKCR_bcpl(X) __asm bcpl 0x50C6,X __endasm
#define CLK_ECKCR_clr() __asm clr 0x50C6 __endasm

#define CLK_SCSR *(unsigned char*)0x50C7
#define CLK_SCSR_bres(X) __asm bres 0x50C7,X __endasm
#define CLK_SCSR_bset(X) __asm bset 0x50C7,X __endasm
#define CLK_SCSR_bcpl(X) __asm bcpl 0x50C7,X __endasm
#define CLK_SCSR_clr() __asm clr 0x50C7 __endasm

#define CLK_SWR *(unsigned char*)0x50C8
#define CLK_SWR_bres(X) __asm bres 0x50C8,X __endasm
#define CLK_SWR_bset(X) __asm bset 0x50C8,X __endasm
#define CLK_SWR_bcpl(X) __asm bcpl 0x50C8,X __endasm
#define CLK_SWR_clr() __asm clr 0x50C8 __endasm

#define CLK_SWCR *(unsigned char*)0x50C9
#define CLK_SWCR_bres(X) __asm bres 0x50C9,X __endasm
#define CLK_SWCR_bset(X) __asm bset 0x50C9,X __endasm
#define CLK_SWCR_bcpl(X) __asm bcpl 0x50C9,X __endasm
#define CLK_SWCR_clr() __asm clr 0x50C9 __endasm

#define CLK_CSSR *(unsigned char*)0x50CA
#define CLK_CSSR_bres(X) __asm bres 0x50CA,X __endasm
#define CLK_CSSR_bset(X) __asm bset 0x50CA,X __endasm
#define CLK_CSSR_bcpl(X) __asm bcpl 0x50CA,X __endasm
#define CLK_CSSR_clr() __asm clr 0x50CA __endasm

#define CLK_CBEEPR *(unsigned char*)0x50CB
#define CLK_CBEEPR_bres(X) __asm bres 0x50CB,X __endasm
#define CLK_CBEEPR_bset(X) __asm bset 0x50CB,X __endasm
#define CLK_CBEEPR_bcpl(X) __asm bcpl 0x50CB,X __endasm
#define CLK_CBEEPR_clr() __asm clr 0x50CB __endasm

#define CLK_HSICALR *(unsigned char*)0x50CC
#define CLK_HSICALR_bres(X) __asm bres 0x50CC,X __endasm
#define CLK_HSICALR_bset(X) __asm bset 0x50CC,X __endasm
#define CLK_HSICALR_bcpl(X) __asm bcpl 0x50CC,X __endasm
#define CLK_HSICALR_clr() __asm clr 0x50CC __endasm

#define CLK_HSITRIMR *(unsigned char*)0x50CD
#define CLK_HSITRIMR_bres(X) __asm bres 0x50CD,X __endasm
#define CLK_HSITRIMR_bset(X) __asm bset 0x50CD,X __endasm
#define CLK_HSITRIMR_bcpl(X) __asm bcpl 0x50CD,X __endasm
#define CLK_HSITRIMR_clr() __asm clr 0x50CD __endasm

#define CLK_HSIUNLCKR *(unsigned char*)0x50CE
#define CLK_HSIUNLCKR_bres(X) __asm bres 0x50CE,X __endasm
#define CLK_HSIUNLCKR_bset(X) __asm bset 0x50CE,X __endasm
#define CLK_HSIUNLCKR_bcpl(X) __asm bcpl 0x50CE,X __endasm
#define CLK_HSIUNLCKR_clr() __asm clr 0x50CE __endasm

#define CLK_REGCSR *(unsigned char*)0x50CF
#define CLK_REGCSR_bres(X) __asm bres 0x50CF,X __endasm
#define CLK_REGCSR_bset(X) __asm bset 0x50CF,X __endasm
#define CLK_REGCSR_bcpl(X) __asm bcpl 0x50CF,X __endasm
#define CLK_REGCSR_clr() __asm clr 0x50CF __endasm

#define CLK_PCKENR3 *(unsigned char*)0x50D0
#define CLK_PCKENR3_bres(X) __asm bres 0x50D0,X __endasm
#define CLK_PCKENR3_bset(X) __asm bset 0x50D0,X __endasm
#define CLK_PCKENR3_bcpl(X) __asm bcpl 0x50D0,X __endasm
#define CLK_PCKENR3_clr() __asm clr 0x50D0 __endasm

#define WWDG_CR *(unsigned char*)0x50D3
#define WWDG_CR_bres(X) __asm bres 0x50D3,X __endasm
#define WWDG_CR_bset(X) __asm bset 0x50D3,X __endasm
#define WWDG_CR_bcpl(X) __asm bcpl 0x50D3,X __endasm
#define WWDG_CR_clr() __asm clr 0x50D3 __endasm

#define WWDG_WR *(unsigned char*)0x50D4
#define WWDG_WR_bres(X) __asm bres 0x50D4,X __endasm
#define WWDG_WR_bset(X) __asm bset 0x50D4,X __endasm
#define WWDG_WR_bcpl(X) __asm bcpl 0x50D4,X __endasm
#define WWDG_WR_clr() __asm clr 0x50D4 __endasm

#define IWDG_KR *(unsigned char*)0x50E0
#define IWDG_KR_bres(X) __asm bres 0x50E0,X __endasm
#define IWDG_KR_bset(X) __asm bset 0x50E0,X __endasm
#define IWDG_KR_bcpl(X) __asm bcpl 0x50E0,X __endasm
#define IWDG_KR_clr() __asm clr 0x50E0 __endasm

#define IWDG_PR *(unsigned char*)0x50E1
#define IWDG_PR_bres(X) __asm bres 0x50E1,X __endasm
#define IWDG_PR_bset(X) __asm bset 0x50E1,X __endasm
#define IWDG_PR_bcpl(X) __asm bcpl 0x50E1,X __endasm
#define IWDG_PR_clr() __asm clr 0x50E1 __endasm

#define IWDG_RLR *(unsigned char*)0x50E2
#define IWDG_RLR_bres(X) __asm bres 0x50E2,X __endasm
#define IWDG_RLR_bset(X) __asm bset 0x50E2,X __endasm
#define IWDG_RLR_bcpl(X) __asm bcpl 0x50E2,X __endasm
#define IWDG_RLR_clr() __asm clr 0x50E2 __endasm

#define BEEP_CSR1 *(unsigned char*)0x50F0
#define BEEP_CSR1_bres(X) __asm bres 0x50F0,X __endasm
#define BEEP_CSR1_bset(X) __asm bset 0x50F0,X __endasm
#define BEEP_CSR1_bcpl(X) __asm bcpl 0x50F0,X __endasm
#define BEEP_CSR1_clr() __asm clr 0x50F0 __endasm

#define BEEP_CSR2 *(unsigned char*)0x50F3
#define BEEP_CSR2_bres(X) __asm bres 0x50F3,X __endasm
#define BEEP_CSR2_bset(X) __asm bset 0x50F3,X __endasm
#define BEEP_CSR2_bcpl(X) __asm bcpl 0x50F3,X __endasm
#define BEEP_CSR2_clr() __asm clr 0x50F3 __endasm

#define RTC_TR1 *(unsigned char*)0x5140
#define RTC_TR1_bres(X) __asm bres 0x5140,X __endasm
#define RTC_TR1_bset(X) __asm bset 0x5140,X __endasm
#define RTC_TR1_bcpl(X) __asm bcpl 0x5140,X __endasm
#define RTC_TR1_clr() __asm clr 0x5140 __endasm

#define RTC_TR2 *(unsigned char*)0x5141
#define RTC_TR2_bres(X) __asm bres 0x5141,X __endasm
#define RTC_TR2_bset(X) __asm bset 0x5141,X __endasm
#define RTC_TR2_bcpl(X) __asm bcpl 0x5141,X __endasm
#define RTC_TR2_clr() __asm clr 0x5141 __endasm

#define RTC_TR3 *(unsigned char*)0x5142
#define RTC_TR3_bres(X) __asm bres 0x5142,X __endasm
#define RTC_TR3_bset(X) __asm bset 0x5142,X __endasm
#define RTC_TR3_bcpl(X) __asm bcpl 0x5142,X __endasm
#define RTC_TR3_clr() __asm clr 0x5142 __endasm

#define RTC_DR1 *(unsigned char*)0x5144
#define RTC_DR1_bres(X) __asm bres 0x5144,X __endasm
#define RTC_DR1_bset(X) __asm bset 0x5144,X __endasm
#define RTC_DR1_bcpl(X) __asm bcpl 0x5144,X __endasm
#define RTC_DR1_clr() __asm clr 0x5144 __endasm

#define RTC_DR2 *(unsigned char*)0x5145
#define RTC_DR2_bres(X) __asm bres 0x5145,X __endasm
#define RTC_DR2_bset(X) __asm bset 0x5145,X __endasm
#define RTC_DR2_bcpl(X) __asm bcpl 0x5145,X __endasm
#define RTC_DR2_clr() __asm clr 0x5145 __endasm

#define RTC_DR3 *(unsigned char*)0x5146
#define RTC_DR3_bres(X) __asm bres 0x5146,X __endasm
#define RTC_DR3_bset(X) __asm bset 0x5146,X __endasm
#define RTC_DR3_bcpl(X) __asm bcpl 0x5146,X __endasm
#define RTC_DR3_clr() __asm clr 0x5146 __endasm

#define RTC_CR1 *(unsigned char*)0x5148
#define RTC_CR1_bres(X) __asm bres 0x5148,X __endasm
#define RTC_CR1_bset(X) __asm bset 0x5148,X __endasm
#define RTC_CR1_bcpl(X) __asm bcpl 0x5148,X __endasm
#define RTC_CR1_clr() __asm clr 0x5148 __endasm

#define RTC_CR2 *(unsigned char*)0x5149
#define RTC_CR2_bres(X) __asm bres 0x5149,X __endasm
#define RTC_CR2_bset(X) __asm bset 0x5149,X __endasm
#define RTC_CR2_bcpl(X) __asm bcpl 0x5149,X __endasm
#define RTC_CR2_clr() __asm clr 0x5149 __endasm

#define RTC_CR3 *(unsigned char*)0x514A
#define RTC_CR3_bres(X) __asm bres 0x514A,X __endasm
#define RTC_CR3_bset(X) __asm bset 0x514A,X __endasm
#define RTC_CR3_bcpl(X) __asm bcpl 0x514A,X __endasm
#define RTC_CR3_clr() __asm clr 0x514A __endasm

#define RTC_ISR1 *(unsigned char*)0x514C
#define RTC_ISR1_bres(X) __asm bres 0x514C,X __endasm
#define RTC_ISR1_bset(X) __asm bset 0x514C,X __endasm
#define RTC_ISR1_bcpl(X) __asm bcpl 0x514C,X __endasm
#define RTC_ISR1_clr() __asm clr 0x514C __endasm

#define RTC_ISR2 *(unsigned char*)0x514D
#define RTC_ISR2_bres(X) __asm bres 0x514D,X __endasm
#define RTC_ISR2_bset(X) __asm bset 0x514D,X __endasm
#define RTC_ISR2_bcpl(X) __asm bcpl 0x514D,X __endasm
#define RTC_ISR2_clr() __asm clr 0x514D __endasm

#define RTC_SPRERH *(unsigned char*)0x5150
#define RTC_SPRERH_bres(X) __asm bres 0x5150,X __endasm
#define RTC_SPRERH_bset(X) __asm bset 0x5150,X __endasm
#define RTC_SPRERH_bcpl(X) __asm bcpl 0x5150,X __endasm
#define RTC_SPRERH_clr() __asm clr 0x5150 __endasm

#define RTC_SPRERL *(unsigned char*)0x5151
#define RTC_SPRERL_bres(X) __asm bres 0x5151,X __endasm
#define RTC_SPRERL_bset(X) __asm bset 0x5151,X __endasm
#define RTC_SPRERL_bcpl(X) __asm bcpl 0x5151,X __endasm
#define RTC_SPRERL_clr() __asm clr 0x5151 __endasm

#define RTC_APRER *(unsigned char*)0x5152
#define RTC_APRER_bres(X) __asm bres 0x5152,X __endasm
#define RTC_APRER_bset(X) __asm bset 0x5152,X __endasm
#define RTC_APRER_bcpl(X) __asm bcpl 0x5152,X __endasm
#define RTC_APRER_clr() __asm clr 0x5152 __endasm

#define RTC_WUTRH *(unsigned char*)0x5154
#define RTC_WUTRH_bres(X) __asm bres 0x5154,X __endasm
#define RTC_WUTRH_bset(X) __asm bset 0x5154,X __endasm
#define RTC_WUTRH_bcpl(X) __asm bcpl 0x5154,X __endasm
#define RTC_WUTRH_clr() __asm clr 0x5154 __endasm

#define RTC_WUTRL *(unsigned char*)0x5155
#define RTC_WUTRL_bres(X) __asm bres 0x5155,X __endasm
#define RTC_WUTRL_bset(X) __asm bset 0x5155,X __endasm
#define RTC_WUTRL_bcpl(X) __asm bcpl 0x5155,X __endasm
#define RTC_WUTRL_clr() __asm clr 0x5155 __endasm

#define RTC_SSRH *(unsigned char*)0x5157
#define RTC_SSRH_bres(X) __asm bres 0x5157,X __endasm
#define RTC_SSRH_bset(X) __asm bset 0x5157,X __endasm
#define RTC_SSRH_bcpl(X) __asm bcpl 0x5157,X __endasm
#define RTC_SSRH_clr() __asm clr 0x5157 __endasm

#define RTC_SSRL *(unsigned char*)0x5158
#define RTC_SSRL_bres(X) __asm bres 0x5158,X __endasm
#define RTC_SSRL_bset(X) __asm bset 0x5158,X __endasm
#define RTC_SSRL_bcpl(X) __asm bcpl 0x5158,X __endasm
#define RTC_SSRL_clr() __asm clr 0x5158 __endasm

#define RTC_WPR *(unsigned char*)0x5159
#define RTC_WPR_bres(X) __asm bres 0x5159,X __endasm
#define RTC_WPR_bset(X) __asm bset 0x5159,X __endasm
#define RTC_WPR_bcpl(X) __asm bcpl 0x5159,X __endasm
#define RTC_WPR_clr() __asm clr 0x5159 __endasm

#define RTC_SHIFTRH *(unsigned char*)0x515A
#define RTC_SHIFTRH_bres(X) __asm bres 0x515A,X __endasm
#define RTC_SHIFTRH_bset(X) __asm bset 0x515A,X __endasm
#define RTC_SHIFTRH_bcpl(X) __asm bcpl 0x515A,X __endasm
#define RTC_SHIFTRH_clr() __asm clr 0x515A __endasm

#define RTC_SHIFTRL *(unsigned char*)0x515B
#define RTC_SHIFTRL_bres(X) __asm bres 0x515B,X __endasm
#define RTC_SHIFTRL_bset(X) __asm bset 0x515B,X __endasm
#define RTC_SHIFTRL_bcpl(X) __asm bcpl 0x515B,X __endasm
#define RTC_SHIFTRL_clr() __asm clr 0x515B __endasm

#define RTC_ALRMAR1 *(unsigned char*)0x515C
#define RTC_ALRMAR1_bres(X) __asm bres 0x515C,X __endasm
#define RTC_ALRMAR1_bset(X) __asm bset 0x515C,X __endasm
#define RTC_ALRMAR1_bcpl(X) __asm bcpl 0x515C,X __endasm
#define RTC_ALRMAR1_clr() __asm clr 0x515C __endasm

#define RTC_ALRMAR2 *(unsigned char*)0x515D
#define RTC_ALRMAR2_bres(X) __asm bres 0x515D,X __endasm
#define RTC_ALRMAR2_bset(X) __asm bset 0x515D,X __endasm
#define RTC_ALRMAR2_bcpl(X) __asm bcpl 0x515D,X __endasm
#define RTC_ALRMAR2_clr() __asm clr 0x515D __endasm

#define RTC_ALRMAR3 *(unsigned char*)0x515E
#define RTC_ALRMAR3_bres(X) __asm bres 0x515E,X __endasm
#define RTC_ALRMAR3_bset(X) __asm bset 0x515E,X __endasm
#define RTC_ALRMAR3_bcpl(X) __asm bcpl 0x515E,X __endasm
#define RTC_ALRMAR3_clr() __asm clr 0x515E __endasm

#define RTC_ALRMAR4 *(unsigned char*)0x515F
#define RTC_ALRMAR4_bres(X) __asm bres 0x515F,X __endasm
#define RTC_ALRMAR4_bset(X) __asm bset 0x515F,X __endasm
#define RTC_ALRMAR4_bcpl(X) __asm bcpl 0x515F,X __endasm
#define RTC_ALRMAR4_clr() __asm clr 0x515F __endasm

#define RTC_ALRMASSRH *(unsigned char*)0x5164
#define RTC_ALRMASSRH_bres(X) __asm bres 0x5164,X __endasm
#define RTC_ALRMASSRH_bset(X) __asm bset 0x5164,X __endasm
#define RTC_ALRMASSRH_bcpl(X) __asm bcpl 0x5164,X __endasm
#define RTC_ALRMASSRH_clr() __asm clr 0x5164 __endasm

#define RTC_ALRMASSRL *(unsigned char*)0x5165
#define RTC_ALRMASSRL_bres(X) __asm bres 0x5165,X __endasm
#define RTC_ALRMASSRL_bset(X) __asm bset 0x5165,X __endasm
#define RTC_ALRMASSRL_bcpl(X) __asm bcpl 0x5165,X __endasm
#define RTC_ALRMASSRL_clr() __asm clr 0x5165 __endasm

#define RTC_ALRMASSMSKR *(unsigned char*)0x5166
#define RTC_ALRMASSMSKR_bres(X) __asm bres 0x5166,X __endasm
#define RTC_ALRMASSMSKR_bset(X) __asm bset 0x5166,X __endasm
#define RTC_ALRMASSMSKR_bcpl(X) __asm bcpl 0x5166,X __endasm
#define RTC_ALRMASSMSKR_clr() __asm clr 0x5166 __endasm

#define RTC_CALRH *(unsigned char*)0x5167
#define RTC_CALRH_bres(X) __asm bres 0x5167,X __endasm
#define RTC_CALRH_bset(X) __asm bset 0x5167,X __endasm
#define RTC_CALRH_bcpl(X) __asm bcpl 0x5167,X __endasm
#define RTC_CALRH_clr() __asm clr 0x5167 __endasm

#define RTC_CALRL *(unsigned char*)0x5168
#define RTC_CALRL_bres(X) __asm bres 0x5168,X __endasm
#define RTC_CALRL_bset(X) __asm bset 0x5168,X __endasm
#define RTC_CALRL_bcpl(X) __asm bcpl 0x5168,X __endasm
#define RTC_CALRL_clr() __asm clr 0x5168 __endasm

#define RTC_TCR1 *(unsigned char*)0x5169
#define RTC_TCR1_bres(X) __asm bres 0x5169,X __endasm
#define RTC_TCR1_bset(X) __asm bset 0x5169,X __endasm
#define RTC_TCR1_bcpl(X) __asm bcpl 0x5169,X __endasm
#define RTC_TCR1_clr() __asm clr 0x5169 __endasm

#define RTC_TCR2 *(unsigned char*)0x516A
#define RTC_TCR2_bres(X) __asm bres 0x516A,X __endasm
#define RTC_TCR2_bset(X) __asm bset 0x516A,X __endasm
#define RTC_TCR2_bcpl(X) __asm bcpl 0x516A,X __endasm
#define RTC_TCR2_clr() __asm clr 0x516A __endasm

#define CSSLSE_CSR *(unsigned char*)0x5190
#define CSSLSE_CSR_bres(X) __asm bres 0x5190,X __endasm
#define CSSLSE_CSR_bset(X) __asm bset 0x5190,X __endasm
#define CSSLSE_CSR_bcpl(X) __asm bcpl 0x5190,X __endasm
#define CSSLSE_CSR_clr() __asm clr 0x5190 __endasm

#define SPI1_CR1 *(unsigned char*)0x5200
#define SPI1_CR1_bres(X) __asm bres 0x5200,X __endasm
#define SPI1_CR1_bset(X) __asm bset 0x5200,X __endasm
#define SPI1_CR1_bcpl(X) __asm bcpl 0x5200,X __endasm
#define SPI1_CR1_clr() __asm clr 0x5200 __endasm

#define SPI1_CR2 *(unsigned char*)0x5201
#define SPI1_CR2_bres(X) __asm bres 0x5201,X __endasm
#define SPI1_CR2_bset(X) __asm bset 0x5201,X __endasm
#define SPI1_CR2_bcpl(X) __asm bcpl 0x5201,X __endasm
#define SPI1_CR2_clr() __asm clr 0x5201 __endasm

#define SPI1_CR3 *(unsigned char*)0x5202
#define SPI1_CR3_bres(X) __asm bres 0x5202,X __endasm
#define SPI1_CR3_bset(X) __asm bset 0x5202,X __endasm
#define SPI1_CR3_bcpl(X) __asm bcpl 0x5202,X __endasm
#define SPI1_CR3_clr() __asm clr 0x5202 __endasm

#define SPI1_SR *(unsigned char*)0x5203
#define SPI1_SR_bres(X) __asm bres 0x5203,X __endasm
#define SPI1_SR_bset(X) __asm bset 0x5203,X __endasm
#define SPI1_SR_bcpl(X) __asm bcpl 0x5203,X __endasm
#define SPI1_SR_clr() __asm clr 0x5203 __endasm

#define SPI1_DR *(unsigned char*)0x5204
#define SPI1_DR_bres(X) __asm bres 0x5204,X __endasm
#define SPI1_DR_bset(X) __asm bset 0x5204,X __endasm
#define SPI1_DR_bcpl(X) __asm bcpl 0x5204,X __endasm
#define SPI1_DR_clr() __asm clr 0x5204 __endasm

#define SPI1_CRCPR *(unsigned char*)0x5205
#define SPI1_CRCPR_bres(X) __asm bres 0x5205,X __endasm
#define SPI1_CRCPR_bset(X) __asm bset 0x5205,X __endasm
#define SPI1_CRCPR_bcpl(X) __asm bcpl 0x5205,X __endasm
#define SPI1_CRCPR_clr() __asm clr 0x5205 __endasm

#define SPI1_RXCRCR *(unsigned char*)0x5206
#define SPI1_RXCRCR_bres(X) __asm bres 0x5206,X __endasm
#define SPI1_RXCRCR_bset(X) __asm bset 0x5206,X __endasm
#define SPI1_RXCRCR_bcpl(X) __asm bcpl 0x5206,X __endasm
#define SPI1_RXCRCR_clr() __asm clr 0x5206 __endasm

#define SPI1_TXCRCR *(unsigned char*)0x5207
#define SPI1_TXCRCR_bres(X) __asm bres 0x5207,X __endasm
#define SPI1_TXCRCR_bset(X) __asm bset 0x5207,X __endasm
#define SPI1_TXCRCR_bcpl(X) __asm bcpl 0x5207,X __endasm
#define SPI1_TXCRCR_clr() __asm clr 0x5207 __endasm

#define SPI2_CR1 *(unsigned char*)0x53C0
#define SPI2_CR1_bres(X) __asm bres 0x53C0,X __endasm
#define SPI2_CR1_bset(X) __asm bset 0x53C0,X __endasm
#define SPI2_CR1_bcpl(X) __asm bcpl 0x53C0,X __endasm
#define SPI2_CR1_clr() __asm clr 0x53C0 __endasm

#define SPI2_CR2 *(unsigned char*)0x53C1
#define SPI2_CR2_bres(X) __asm bres 0x53C1,X __endasm
#define SPI2_CR2_bset(X) __asm bset 0x53C1,X __endasm
#define SPI2_CR2_bcpl(X) __asm bcpl 0x53C1,X __endasm
#define SPI2_CR2_clr() __asm clr 0x53C1 __endasm

#define SPI2_CR3 *(unsigned char*)0x53C2
#define SPI2_CR3_bres(X) __asm bres 0x53C2,X __endasm
#define SPI2_CR3_bset(X) __asm bset 0x53C2,X __endasm
#define SPI2_CR3_bcpl(X) __asm bcpl 0x53C2,X __endasm
#define SPI2_CR3_clr() __asm clr 0x53C2 __endasm

#define SPI2_SR *(unsigned char*)0x53C3
#define SPI2_SR_bres(X) __asm bres 0x53C3,X __endasm
#define SPI2_SR_bset(X) __asm bset 0x53C3,X __endasm
#define SPI2_SR_bcpl(X) __asm bcpl 0x53C3,X __endasm
#define SPI2_SR_clr() __asm clr 0x53C3 __endasm

#define SPI2_DR *(unsigned char*)0x53C4
#define SPI2_DR_bres(X) __asm bres 0x53C4,X __endasm
#define SPI2_DR_bset(X) __asm bset 0x53C4,X __endasm
#define SPI2_DR_bcpl(X) __asm bcpl 0x53C4,X __endasm
#define SPI2_DR_clr() __asm clr 0x53C4 __endasm

#define SPI2_CRCPR *(unsigned char*)0x53C5
#define SPI2_CRCPR_bres(X) __asm bres 0x53C5,X __endasm
#define SPI2_CRCPR_bset(X) __asm bset 0x53C5,X __endasm
#define SPI2_CRCPR_bcpl(X) __asm bcpl 0x53C5,X __endasm
#define SPI2_CRCPR_clr() __asm clr 0x53C5 __endasm

#define SPI2_RXCRCR *(unsigned char*)0x53C6
#define SPI2_RXCRCR_bres(X) __asm bres 0x53C6,X __endasm
#define SPI2_RXCRCR_bset(X) __asm bset 0x53C6,X __endasm
#define SPI2_RXCRCR_bcpl(X) __asm bcpl 0x53C6,X __endasm
#define SPI2_RXCRCR_clr() __asm clr 0x53C6 __endasm

#define SPI2_TXCRCR *(unsigned char*)0x53C7
#define SPI2_TXCRCR_bres(X) __asm bres 0x53C7,X __endasm
#define SPI2_TXCRCR_bset(X) __asm bset 0x53C7,X __endasm
#define SPI2_TXCRCR_bcpl(X) __asm bcpl 0x53C7,X __endasm
#define SPI2_TXCRCR_clr() __asm clr 0x53C7 __endasm

#define I2C1_CR1 *(unsigned char*)0x5210
#define I2C1_CR1_bres(X) __asm bres 0x5210,X __endasm
#define I2C1_CR1_bset(X) __asm bset 0x5210,X __endasm
#define I2C1_CR1_bcpl(X) __asm bcpl 0x5210,X __endasm
#define I2C1_CR1_clr() __asm clr 0x5210 __endasm

#define I2C1_CR2 *(unsigned char*)0x5211
#define I2C1_CR2_bres(X) __asm bres 0x5211,X __endasm
#define I2C1_CR2_bset(X) __asm bset 0x5211,X __endasm
#define I2C1_CR2_bcpl(X) __asm bcpl 0x5211,X __endasm
#define I2C1_CR2_clr() __asm clr 0x5211 __endasm

#define I2C1_FREQR *(unsigned char*)0x5212
#define I2C1_FREQR_bres(X) __asm bres 0x5212,X __endasm
#define I2C1_FREQR_bset(X) __asm bset 0x5212,X __endasm
#define I2C1_FREQR_bcpl(X) __asm bcpl 0x5212,X __endasm
#define I2C1_FREQR_clr() __asm clr 0x5212 __endasm

#define I2C1_OARL *(unsigned char*)0x5213
#define I2C1_OARL_bres(X) __asm bres 0x5213,X __endasm
#define I2C1_OARL_bset(X) __asm bset 0x5213,X __endasm
#define I2C1_OARL_bcpl(X) __asm bcpl 0x5213,X __endasm
#define I2C1_OARL_clr() __asm clr 0x5213 __endasm

#define I2C1_OARH *(unsigned char*)0x5214
#define I2C1_OARH_bres(X) __asm bres 0x5214,X __endasm
#define I2C1_OARH_bset(X) __asm bset 0x5214,X __endasm
#define I2C1_OARH_bcpl(X) __asm bcpl 0x5214,X __endasm
#define I2C1_OARH_clr() __asm clr 0x5214 __endasm

#define I2C1_OAR2 *(unsigned char*)0x5215
#define I2C1_OAR2_bres(X) __asm bres 0x5215,X __endasm
#define I2C1_OAR2_bset(X) __asm bset 0x5215,X __endasm
#define I2C1_OAR2_bcpl(X) __asm bcpl 0x5215,X __endasm
#define I2C1_OAR2_clr() __asm clr 0x5215 __endasm

#define I2C1_DR *(unsigned char*)0x5216
#define I2C1_DR_bres(X) __asm bres 0x5216,X __endasm
#define I2C1_DR_bset(X) __asm bset 0x5216,X __endasm
#define I2C1_DR_bcpl(X) __asm bcpl 0x5216,X __endasm
#define I2C1_DR_clr() __asm clr 0x5216 __endasm

#define I2C1_SR1 *(unsigned char*)0x5217
#define I2C1_SR1_bres(X) __asm bres 0x5217,X __endasm
#define I2C1_SR1_bset(X) __asm bset 0x5217,X __endasm
#define I2C1_SR1_bcpl(X) __asm bcpl 0x5217,X __endasm
#define I2C1_SR1_clr() __asm clr 0x5217 __endasm

#define I2C1_SR2 *(unsigned char*)0x5218
#define I2C1_SR2_bres(X) __asm bres 0x5218,X __endasm
#define I2C1_SR2_bset(X) __asm bset 0x5218,X __endasm
#define I2C1_SR2_bcpl(X) __asm bcpl 0x5218,X __endasm
#define I2C1_SR2_clr() __asm clr 0x5218 __endasm

#define I2C1_SR3 *(unsigned char*)0x5219
#define I2C1_SR3_bres(X) __asm bres 0x5219,X __endasm
#define I2C1_SR3_bset(X) __asm bset 0x5219,X __endasm
#define I2C1_SR3_bcpl(X) __asm bcpl 0x5219,X __endasm
#define I2C1_SR3_clr() __asm clr 0x5219 __endasm

#define I2C1_ITR *(unsigned char*)0x521A
#define I2C1_ITR_bres(X) __asm bres 0x521A,X __endasm
#define I2C1_ITR_bset(X) __asm bset 0x521A,X __endasm
#define I2C1_ITR_bcpl(X) __asm bcpl 0x521A,X __endasm
#define I2C1_ITR_clr() __asm clr 0x521A __endasm

#define I2C1_CCRL *(unsigned char*)0x521B
#define I2C1_CCRL_bres(X) __asm bres 0x521B,X __endasm
#define I2C1_CCRL_bset(X) __asm bset 0x521B,X __endasm
#define I2C1_CCRL_bcpl(X) __asm bcpl 0x521B,X __endasm
#define I2C1_CCRL_clr() __asm clr 0x521B __endasm

#define I2C1_CCRH *(unsigned char*)0x521C
#define I2C1_CCRH_bres(X) __asm bres 0x521C,X __endasm
#define I2C1_CCRH_bset(X) __asm bset 0x521C,X __endasm
#define I2C1_CCRH_bcpl(X) __asm bcpl 0x521C,X __endasm
#define I2C1_CCRH_clr() __asm clr 0x521C __endasm

#define I2C1_TRISER *(unsigned char*)0x521D
#define I2C1_TRISER_bres(X) __asm bres 0x521D,X __endasm
#define I2C1_TRISER_bset(X) __asm bset 0x521D,X __endasm
#define I2C1_TRISER_bcpl(X) __asm bcpl 0x521D,X __endasm
#define I2C1_TRISER_clr() __asm clr 0x521D __endasm

#define I2C1_PECR *(unsigned char*)0x521E
#define I2C1_PECR_bres(X) __asm bres 0x521E,X __endasm
#define I2C1_PECR_bset(X) __asm bset 0x521E,X __endasm
#define I2C1_PECR_bcpl(X) __asm bcpl 0x521E,X __endasm
#define I2C1_PECR_clr() __asm clr 0x521E __endasm

#define USART1_SR *(unsigned char*)0x5230
#define USART1_SR_bres(X) __asm bres 0x5230,X __endasm
#define USART1_SR_bset(X) __asm bset 0x5230,X __endasm
#define USART1_SR_bcpl(X) __asm bcpl 0x5230,X __endasm
#define USART1_SR_clr() __asm clr 0x5230 __endasm

#define USART1_DR *(unsigned char*)0x5231
#define USART1_DR_bres(X) __asm bres 0x5231,X __endasm
#define USART1_DR_bset(X) __asm bset 0x5231,X __endasm
#define USART1_DR_bcpl(X) __asm bcpl 0x5231,X __endasm
#define USART1_DR_clr() __asm clr 0x5231 __endasm

#define USART1_BRR1 *(unsigned char*)0x5232
#define USART1_BRR1_bres(X) __asm bres 0x5232,X __endasm
#define USART1_BRR1_bset(X) __asm bset 0x5232,X __endasm
#define USART1_BRR1_bcpl(X) __asm bcpl 0x5232,X __endasm
#define USART1_BRR1_clr() __asm clr 0x5232 __endasm

#define USART1_BRR2 *(unsigned char*)0x5233
#define USART1_BRR2_bres(X) __asm bres 0x5233,X __endasm
#define USART1_BRR2_bset(X) __asm bset 0x5233,X __endasm
#define USART1_BRR2_bcpl(X) __asm bcpl 0x5233,X __endasm
#define USART1_BRR2_clr() __asm clr 0x5233 __endasm

#define USART1_CR1 *(unsigned char*)0x5234
#define USART1_CR1_bres(X) __asm bres 0x5234,X __endasm
#define USART1_CR1_bset(X) __asm bset 0x5234,X __endasm
#define USART1_CR1_bcpl(X) __asm bcpl 0x5234,X __endasm
#define USART1_CR1_clr() __asm clr 0x5234 __endasm

#define USART1_CR2 *(unsigned char*)0x5235
#define USART1_CR2_bres(X) __asm bres 0x5235,X __endasm
#define USART1_CR2_bset(X) __asm bset 0x5235,X __endasm
#define USART1_CR2_bcpl(X) __asm bcpl 0x5235,X __endasm
#define USART1_CR2_clr() __asm clr 0x5235 __endasm

#define USART1_CR3 *(unsigned char*)0x5236
#define USART1_CR3_bres(X) __asm bres 0x5236,X __endasm
#define USART1_CR3_bset(X) __asm bset 0x5236,X __endasm
#define USART1_CR3_bcpl(X) __asm bcpl 0x5236,X __endasm
#define USART1_CR3_clr() __asm clr 0x5236 __endasm

#define USART1_CR4 *(unsigned char*)0x5237
#define USART1_CR4_bres(X) __asm bres 0x5237,X __endasm
#define USART1_CR4_bset(X) __asm bset 0x5237,X __endasm
#define USART1_CR4_bcpl(X) __asm bcpl 0x5237,X __endasm
#define USART1_CR4_clr() __asm clr 0x5237 __endasm

#define USART1_CR5 *(unsigned char*)0x5238
#define USART1_CR5_bres(X) __asm bres 0x5238,X __endasm
#define USART1_CR5_bset(X) __asm bset 0x5238,X __endasm
#define USART1_CR5_bcpl(X) __asm bcpl 0x5238,X __endasm
#define USART1_CR5_clr() __asm clr 0x5238 __endasm

#define USART1_GTR *(unsigned char*)0x5239
#define USART1_GTR_bres(X) __asm bres 0x5239,X __endasm
#define USART1_GTR_bset(X) __asm bset 0x5239,X __endasm
#define USART1_GTR_bcpl(X) __asm bcpl 0x5239,X __endasm
#define USART1_GTR_clr() __asm clr 0x5239 __endasm

#define USART1_PSCR *(unsigned char*)0x523A
#define USART1_PSCR_bres(X) __asm bres 0x523A,X __endasm
#define USART1_PSCR_bset(X) __asm bset 0x523A,X __endasm
#define USART1_PSCR_bcpl(X) __asm bcpl 0x523A,X __endasm
#define USART1_PSCR_clr() __asm clr 0x523A __endasm

#define USART2_SR *(unsigned char*)0x53E0
#define USART2_SR_bres(X) __asm bres 0x53E0,X __endasm
#define USART2_SR_bset(X) __asm bset 0x53E0,X __endasm
#define USART2_SR_bcpl(X) __asm bcpl 0x53E0,X __endasm
#define USART2_SR_clr() __asm clr 0x53E0 __endasm

#define USART2_DR *(unsigned char*)0x53E1
#define USART2_DR_bres(X) __asm bres 0x53E1,X __endasm
#define USART2_DR_bset(X) __asm bset 0x53E1,X __endasm
#define USART2_DR_bcpl(X) __asm bcpl 0x53E1,X __endasm
#define USART2_DR_clr() __asm clr 0x53E1 __endasm

#define USART2_BRR1 *(unsigned char*)0x53E2
#define USART2_BRR1_bres(X) __asm bres 0x53E2,X __endasm
#define USART2_BRR1_bset(X) __asm bset 0x53E2,X __endasm
#define USART2_BRR1_bcpl(X) __asm bcpl 0x53E2,X __endasm
#define USART2_BRR1_clr() __asm clr 0x53E2 __endasm

#define USART2_BRR2 *(unsigned char*)0x53E3
#define USART2_BRR2_bres(X) __asm bres 0x53E3,X __endasm
#define USART2_BRR2_bset(X) __asm bset 0x53E3,X __endasm
#define USART2_BRR2_bcpl(X) __asm bcpl 0x53E3,X __endasm
#define USART2_BRR2_clr() __asm clr 0x53E3 __endasm

#define USART2_CR1 *(unsigned char*)0x53E4
#define USART2_CR1_bres(X) __asm bres 0x53E4,X __endasm
#define USART2_CR1_bset(X) __asm bset 0x53E4,X __endasm
#define USART2_CR1_bcpl(X) __asm bcpl 0x53E4,X __endasm
#define USART2_CR1_clr() __asm clr 0x53E4 __endasm

#define USART2_CR2 *(unsigned char*)0x53E5
#define USART2_CR2_bres(X) __asm bres 0x53E5,X __endasm
#define USART2_CR2_bset(X) __asm bset 0x53E5,X __endasm
#define USART2_CR2_bcpl(X) __asm bcpl 0x53E5,X __endasm
#define USART2_CR2_clr() __asm clr 0x53E5 __endasm

#define USART2_CR3 *(unsigned char*)0x53E6
#define USART2_CR3_bres(X) __asm bres 0x53E6,X __endasm
#define USART2_CR3_bset(X) __asm bset 0x53E6,X __endasm
#define USART2_CR3_bcpl(X) __asm bcpl 0x53E6,X __endasm
#define USART2_CR3_clr() __asm clr 0x53E6 __endasm

#define USART2_CR4 *(unsigned char*)0x53E7
#define USART2_CR4_bres(X) __asm bres 0x53E7,X __endasm
#define USART2_CR4_bset(X) __asm bset 0x53E7,X __endasm
#define USART2_CR4_bcpl(X) __asm bcpl 0x53E7,X __endasm
#define USART2_CR4_clr() __asm clr 0x53E7 __endasm

#define USART2_CR5 *(unsigned char*)0x53E8
#define USART2_CR5_bres(X) __asm bres 0x53E8,X __endasm
#define USART2_CR5_bset(X) __asm bset 0x53E8,X __endasm
#define USART2_CR5_bcpl(X) __asm bcpl 0x53E8,X __endasm
#define USART2_CR5_clr() __asm clr 0x53E8 __endasm

#define USART2_GTR *(unsigned char*)0x53E9
#define USART2_GTR_bres(X) __asm bres 0x53E9,X __endasm
#define USART2_GTR_bset(X) __asm bset 0x53E9,X __endasm
#define USART2_GTR_bcpl(X) __asm bcpl 0x53E9,X __endasm
#define USART2_GTR_clr() __asm clr 0x53E9 __endasm

#define USART2_PSCR *(unsigned char*)0x53EA
#define USART2_PSCR_bres(X) __asm bres 0x53EA,X __endasm
#define USART2_PSCR_bset(X) __asm bset 0x53EA,X __endasm
#define USART2_PSCR_bcpl(X) __asm bcpl 0x53EA,X __endasm
#define USART2_PSCR_clr() __asm clr 0x53EA __endasm

#define USART3_SR *(unsigned char*)0x53F0
#define USART3_SR_bres(X) __asm bres 0x53F0,X __endasm
#define USART3_SR_bset(X) __asm bset 0x53F0,X __endasm
#define USART3_SR_bcpl(X) __asm bcpl 0x53F0,X __endasm
#define USART3_SR_clr() __asm clr 0x53F0 __endasm

#define USART3_DR *(unsigned char*)0x53F1
#define USART3_DR_bres(X) __asm bres 0x53F1,X __endasm
#define USART3_DR_bset(X) __asm bset 0x53F1,X __endasm
#define USART3_DR_bcpl(X) __asm bcpl 0x53F1,X __endasm
#define USART3_DR_clr() __asm clr 0x53F1 __endasm

#define USART3_BRR1 *(unsigned char*)0x53F2
#define USART3_BRR1_bres(X) __asm bres 0x53F2,X __endasm
#define USART3_BRR1_bset(X) __asm bset 0x53F2,X __endasm
#define USART3_BRR1_bcpl(X) __asm bcpl 0x53F2,X __endasm
#define USART3_BRR1_clr() __asm clr 0x53F2 __endasm

#define USART3_BRR2 *(unsigned char*)0x53F3
#define USART3_BRR2_bres(X) __asm bres 0x53F3,X __endasm
#define USART3_BRR2_bset(X) __asm bset 0x53F3,X __endasm
#define USART3_BRR2_bcpl(X) __asm bcpl 0x53F3,X __endasm
#define USART3_BRR2_clr() __asm clr 0x53F3 __endasm

#define USART3_CR1 *(unsigned char*)0x53F4
#define USART3_CR1_bres(X) __asm bres 0x53F4,X __endasm
#define USART3_CR1_bset(X) __asm bset 0x53F4,X __endasm
#define USART3_CR1_bcpl(X) __asm bcpl 0x53F4,X __endasm
#define USART3_CR1_clr() __asm clr 0x53F4 __endasm

#define USART3_CR2 *(unsigned char*)0x53F5
#define USART3_CR2_bres(X) __asm bres 0x53F5,X __endasm
#define USART3_CR2_bset(X) __asm bset 0x53F5,X __endasm
#define USART3_CR2_bcpl(X) __asm bcpl 0x53F5,X __endasm
#define USART3_CR2_clr() __asm clr 0x53F5 __endasm

#define USART3_CR3 *(unsigned char*)0x53F6
#define USART3_CR3_bres(X) __asm bres 0x53F6,X __endasm
#define USART3_CR3_bset(X) __asm bset 0x53F6,X __endasm
#define USART3_CR3_bcpl(X) __asm bcpl 0x53F6,X __endasm
#define USART3_CR3_clr() __asm clr 0x53F6 __endasm

#define USART3_CR4 *(unsigned char*)0x53F7
#define USART3_CR4_bres(X) __asm bres 0x53F7,X __endasm
#define USART3_CR4_bset(X) __asm bset 0x53F7,X __endasm
#define USART3_CR4_bcpl(X) __asm bcpl 0x53F7,X __endasm
#define USART3_CR4_clr() __asm clr 0x53F7 __endasm

#define USART3_CR5 *(unsigned char*)0x53F8
#define USART3_CR5_bres(X) __asm bres 0x53F8,X __endasm
#define USART3_CR5_bset(X) __asm bset 0x53F8,X __endasm
#define USART3_CR5_bcpl(X) __asm bcpl 0x53F8,X __endasm
#define USART3_CR5_clr() __asm clr 0x53F8 __endasm

#define USART3_GTR *(unsigned char*)0x53F9
#define USART3_GTR_bres(X) __asm bres 0x53F9,X __endasm
#define USART3_GTR_bset(X) __asm bset 0x53F9,X __endasm
#define USART3_GTR_bcpl(X) __asm bcpl 0x53F9,X __endasm
#define USART3_GTR_clr() __asm clr 0x53F9 __endasm

#define USART3_PSCR *(unsigned char*)0x53FA
#define USART3_PSCR_bres(X) __asm bres 0x53FA,X __endasm
#define USART3_PSCR_bset(X) __asm bset 0x53FA,X __endasm
#define USART3_PSCR_bcpl(X) __asm bcpl 0x53FA,X __endasm
#define USART3_PSCR_clr() __asm clr 0x53FA __endasm

#define TIM2_CR1 *(unsigned char*)0x5250
#define TIM2_CR1_bres(X) __asm bres 0x5250,X __endasm
#define TIM2_CR1_bset(X) __asm bset 0x5250,X __endasm
#define TIM2_CR1_bcpl(X) __asm bcpl 0x5250,X __endasm
#define TIM2_CR1_clr() __asm clr 0x5250 __endasm

#define TIM2_CR2 *(unsigned char*)0x5251
#define TIM2_CR2_bres(X) __asm bres 0x5251,X __endasm
#define TIM2_CR2_bset(X) __asm bset 0x5251,X __endasm
#define TIM2_CR2_bcpl(X) __asm bcpl 0x5251,X __endasm
#define TIM2_CR2_clr() __asm clr 0x5251 __endasm

#define TIM2_SMCR *(unsigned char*)0x5252
#define TIM2_SMCR_bres(X) __asm bres 0x5252,X __endasm
#define TIM2_SMCR_bset(X) __asm bset 0x5252,X __endasm
#define TIM2_SMCR_bcpl(X) __asm bcpl 0x5252,X __endasm
#define TIM2_SMCR_clr() __asm clr 0x5252 __endasm

#define TIM2_ETR *(unsigned char*)0x5253
#define TIM2_ETR_bres(X) __asm bres 0x5253,X __endasm
#define TIM2_ETR_bset(X) __asm bset 0x5253,X __endasm
#define TIM2_ETR_bcpl(X) __asm bcpl 0x5253,X __endasm
#define TIM2_ETR_clr() __asm clr 0x5253 __endasm

#define TIM2_DER *(unsigned char*)0x5254
#define TIM2_DER_bres(X) __asm bres 0x5254,X __endasm
#define TIM2_DER_bset(X) __asm bset 0x5254,X __endasm
#define TIM2_DER_bcpl(X) __asm bcpl 0x5254,X __endasm
#define TIM2_DER_clr() __asm clr 0x5254 __endasm

#define TIM2_IER *(unsigned char*)0x5255
#define TIM2_IER_bres(X) __asm bres 0x5255,X __endasm
#define TIM2_IER_bset(X) __asm bset 0x5255,X __endasm
#define TIM2_IER_bcpl(X) __asm bcpl 0x5255,X __endasm
#define TIM2_IER_clr() __asm clr 0x5255 __endasm

#define TIM2_SR1 *(unsigned char*)0x5256
#define TIM2_SR1_bres(X) __asm bres 0x5256,X __endasm
#define TIM2_SR1_bset(X) __asm bset 0x5256,X __endasm
#define TIM2_SR1_bcpl(X) __asm bcpl 0x5256,X __endasm
#define TIM2_SR1_clr() __asm clr 0x5256 __endasm

#define TIM2_SR2 *(unsigned char*)0x5257
#define TIM2_SR2_bres(X) __asm bres 0x5257,X __endasm
#define TIM2_SR2_bset(X) __asm bset 0x5257,X __endasm
#define TIM2_SR2_bcpl(X) __asm bcpl 0x5257,X __endasm
#define TIM2_SR2_clr() __asm clr 0x5257 __endasm

#define TIM2_EGR *(unsigned char*)0x5258
#define TIM2_EGR_bres(X) __asm bres 0x5258,X __endasm
#define TIM2_EGR_bset(X) __asm bset 0x5258,X __endasm
#define TIM2_EGR_bcpl(X) __asm bcpl 0x5258,X __endasm
#define TIM2_EGR_clr() __asm clr 0x5258 __endasm

#define TIM2_CCMR1 *(unsigned char*)0x5259
#define TIM2_CCMR1_bres(X) __asm bres 0x5259,X __endasm
#define TIM2_CCMR1_bset(X) __asm bset 0x5259,X __endasm
#define TIM2_CCMR1_bcpl(X) __asm bcpl 0x5259,X __endasm
#define TIM2_CCMR1_clr() __asm clr 0x5259 __endasm

#define TIM2_CCMR2 *(unsigned char*)0x525A
#define TIM2_CCMR2_bres(X) __asm bres 0x525A,X __endasm
#define TIM2_CCMR2_bset(X) __asm bset 0x525A,X __endasm
#define TIM2_CCMR2_bcpl(X) __asm bcpl 0x525A,X __endasm
#define TIM2_CCMR2_clr() __asm clr 0x525A __endasm

#define TIM2_CCER1 *(unsigned char*)0x525B
#define TIM2_CCER1_bres(X) __asm bres 0x525B,X __endasm
#define TIM2_CCER1_bset(X) __asm bset 0x525B,X __endasm
#define TIM2_CCER1_bcpl(X) __asm bcpl 0x525B,X __endasm
#define TIM2_CCER1_clr() __asm clr 0x525B __endasm

#define TIM2_CNTRH *(unsigned char*)0x525C
#define TIM2_CNTRH_bres(X) __asm bres 0x525C,X __endasm
#define TIM2_CNTRH_bset(X) __asm bset 0x525C,X __endasm
#define TIM2_CNTRH_bcpl(X) __asm bcpl 0x525C,X __endasm
#define TIM2_CNTRH_clr() __asm clr 0x525C __endasm

#define TIM2_CNTRL *(unsigned char*)0x525D
#define TIM2_CNTRL_bres(X) __asm bres 0x525D,X __endasm
#define TIM2_CNTRL_bset(X) __asm bset 0x525D,X __endasm
#define TIM2_CNTRL_bcpl(X) __asm bcpl 0x525D,X __endasm
#define TIM2_CNTRL_clr() __asm clr 0x525D __endasm

#define TIM2_PSCR *(unsigned char*)0x525E
#define TIM2_PSCR_bres(X) __asm bres 0x525E,X __endasm
#define TIM2_PSCR_bset(X) __asm bset 0x525E,X __endasm
#define TIM2_PSCR_bcpl(X) __asm bcpl 0x525E,X __endasm
#define TIM2_PSCR_clr() __asm clr 0x525E __endasm

#define TIM2_ARRH *(unsigned char*)0x525F
#define TIM2_ARRH_bres(X) __asm bres 0x525F,X __endasm
#define TIM2_ARRH_bset(X) __asm bset 0x525F,X __endasm
#define TIM2_ARRH_bcpl(X) __asm bcpl 0x525F,X __endasm
#define TIM2_ARRH_clr() __asm clr 0x525F __endasm

#define TIM2_ARRL *(unsigned char*)0x5260
#define TIM2_ARRL_bres(X) __asm bres 0x5260,X __endasm
#define TIM2_ARRL_bset(X) __asm bset 0x5260,X __endasm
#define TIM2_ARRL_bcpl(X) __asm bcpl 0x5260,X __endasm
#define TIM2_ARRL_clr() __asm clr 0x5260 __endasm

#define TIM2_CCR1H *(unsigned char*)0x5261
#define TIM2_CCR1H_bres(X) __asm bres 0x5261,X __endasm
#define TIM2_CCR1H_bset(X) __asm bset 0x5261,X __endasm
#define TIM2_CCR1H_bcpl(X) __asm bcpl 0x5261,X __endasm
#define TIM2_CCR1H_clr() __asm clr 0x5261 __endasm

#define TIM2_CCR1L *(unsigned char*)0x5262
#define TIM2_CCR1L_bres(X) __asm bres 0x5262,X __endasm
#define TIM2_CCR1L_bset(X) __asm bset 0x5262,X __endasm
#define TIM2_CCR1L_bcpl(X) __asm bcpl 0x5262,X __endasm
#define TIM2_CCR1L_clr() __asm clr 0x5262 __endasm

#define TIM2_CCR2H *(unsigned char*)0x5263
#define TIM2_CCR2H_bres(X) __asm bres 0x5263,X __endasm
#define TIM2_CCR2H_bset(X) __asm bset 0x5263,X __endasm
#define TIM2_CCR2H_bcpl(X) __asm bcpl 0x5263,X __endasm
#define TIM2_CCR2H_clr() __asm clr 0x5263 __endasm

#define TIM2_CCR2L *(unsigned char*)0x5264
#define TIM2_CCR2L_bres(X) __asm bres 0x5264,X __endasm
#define TIM2_CCR2L_bset(X) __asm bset 0x5264,X __endasm
#define TIM2_CCR2L_bcpl(X) __asm bcpl 0x5264,X __endasm
#define TIM2_CCR2L_clr() __asm clr 0x5264 __endasm

#define TIM2_BKR *(unsigned char*)0x5265
#define TIM2_BKR_bres(X) __asm bres 0x5265,X __endasm
#define TIM2_BKR_bset(X) __asm bset 0x5265,X __endasm
#define TIM2_BKR_bcpl(X) __asm bcpl 0x5265,X __endasm
#define TIM2_BKR_clr() __asm clr 0x5265 __endasm

#define TIM2_OISR *(unsigned char*)0x5266
#define TIM2_OISR_bres(X) __asm bres 0x5266,X __endasm
#define TIM2_OISR_bset(X) __asm bset 0x5266,X __endasm
#define TIM2_OISR_bcpl(X) __asm bcpl 0x5266,X __endasm
#define TIM2_OISR_clr() __asm clr 0x5266 __endasm

#define TIM3_CR1 *(unsigned char*)0x5280
#define TIM3_CR1_bres(X) __asm bres 0x5280,X __endasm
#define TIM3_CR1_bset(X) __asm bset 0x5280,X __endasm
#define TIM3_CR1_bcpl(X) __asm bcpl 0x5280,X __endasm
#define TIM3_CR1_clr() __asm clr 0x5280 __endasm

#define TIM3_CR2 *(unsigned char*)0x5281
#define TIM3_CR2_bres(X) __asm bres 0x5281,X __endasm
#define TIM3_CR2_bset(X) __asm bset 0x5281,X __endasm
#define TIM3_CR2_bcpl(X) __asm bcpl 0x5281,X __endasm
#define TIM3_CR2_clr() __asm clr 0x5281 __endasm

#define TIM3_SMCR *(unsigned char*)0x5282
#define TIM3_SMCR_bres(X) __asm bres 0x5282,X __endasm
#define TIM3_SMCR_bset(X) __asm bset 0x5282,X __endasm
#define TIM3_SMCR_bcpl(X) __asm bcpl 0x5282,X __endasm
#define TIM3_SMCR_clr() __asm clr 0x5282 __endasm

#define TIM3_ETR *(unsigned char*)0x5283
#define TIM3_ETR_bres(X) __asm bres 0x5283,X __endasm
#define TIM3_ETR_bset(X) __asm bset 0x5283,X __endasm
#define TIM3_ETR_bcpl(X) __asm bcpl 0x5283,X __endasm
#define TIM3_ETR_clr() __asm clr 0x5283 __endasm

#define TIM3_DER *(unsigned char*)0x5284
#define TIM3_DER_bres(X) __asm bres 0x5284,X __endasm
#define TIM3_DER_bset(X) __asm bset 0x5284,X __endasm
#define TIM3_DER_bcpl(X) __asm bcpl 0x5284,X __endasm
#define TIM3_DER_clr() __asm clr 0x5284 __endasm

#define TIM3_IER *(unsigned char*)0x5285
#define TIM3_IER_bres(X) __asm bres 0x5285,X __endasm
#define TIM3_IER_bset(X) __asm bset 0x5285,X __endasm
#define TIM3_IER_bcpl(X) __asm bcpl 0x5285,X __endasm
#define TIM3_IER_clr() __asm clr 0x5285 __endasm

#define TIM3_SR1 *(unsigned char*)0x5286
#define TIM3_SR1_bres(X) __asm bres 0x5286,X __endasm
#define TIM3_SR1_bset(X) __asm bset 0x5286,X __endasm
#define TIM3_SR1_bcpl(X) __asm bcpl 0x5286,X __endasm
#define TIM3_SR1_clr() __asm clr 0x5286 __endasm

#define TIM3_SR2 *(unsigned char*)0x5287
#define TIM3_SR2_bres(X) __asm bres 0x5287,X __endasm
#define TIM3_SR2_bset(X) __asm bset 0x5287,X __endasm
#define TIM3_SR2_bcpl(X) __asm bcpl 0x5287,X __endasm
#define TIM3_SR2_clr() __asm clr 0x5287 __endasm

#define TIM3_EGR *(unsigned char*)0x5288
#define TIM3_EGR_bres(X) __asm bres 0x5288,X __endasm
#define TIM3_EGR_bset(X) __asm bset 0x5288,X __endasm
#define TIM3_EGR_bcpl(X) __asm bcpl 0x5288,X __endasm
#define TIM3_EGR_clr() __asm clr 0x5288 __endasm

#define TIM3_CCMR1 *(unsigned char*)0x5289
#define TIM3_CCMR1_bres(X) __asm bres 0x5289,X __endasm
#define TIM3_CCMR1_bset(X) __asm bset 0x5289,X __endasm
#define TIM3_CCMR1_bcpl(X) __asm bcpl 0x5289,X __endasm
#define TIM3_CCMR1_clr() __asm clr 0x5289 __endasm

#define TIM3_CCMR2 *(unsigned char*)0x528A
#define TIM3_CCMR2_bres(X) __asm bres 0x528A,X __endasm
#define TIM3_CCMR2_bset(X) __asm bset 0x528A,X __endasm
#define TIM3_CCMR2_bcpl(X) __asm bcpl 0x528A,X __endasm
#define TIM3_CCMR2_clr() __asm clr 0x528A __endasm

#define TIM3_CCER1 *(unsigned char*)0x528B
#define TIM3_CCER1_bres(X) __asm bres 0x528B,X __endasm
#define TIM3_CCER1_bset(X) __asm bset 0x528B,X __endasm
#define TIM3_CCER1_bcpl(X) __asm bcpl 0x528B,X __endasm
#define TIM3_CCER1_clr() __asm clr 0x528B __endasm

#define TIM3_CNTRH *(unsigned char*)0x528C
#define TIM3_CNTRH_bres(X) __asm bres 0x528C,X __endasm
#define TIM3_CNTRH_bset(X) __asm bset 0x528C,X __endasm
#define TIM3_CNTRH_bcpl(X) __asm bcpl 0x528C,X __endasm
#define TIM3_CNTRH_clr() __asm clr 0x528C __endasm

#define TIM3_CNTRL *(unsigned char*)0x528D
#define TIM3_CNTRL_bres(X) __asm bres 0x528D,X __endasm
#define TIM3_CNTRL_bset(X) __asm bset 0x528D,X __endasm
#define TIM3_CNTRL_bcpl(X) __asm bcpl 0x528D,X __endasm
#define TIM3_CNTRL_clr() __asm clr 0x528D __endasm

#define TIM3_PSCR *(unsigned char*)0x528E
#define TIM3_PSCR_bres(X) __asm bres 0x528E,X __endasm
#define TIM3_PSCR_bset(X) __asm bset 0x528E,X __endasm
#define TIM3_PSCR_bcpl(X) __asm bcpl 0x528E,X __endasm
#define TIM3_PSCR_clr() __asm clr 0x528E __endasm

#define TIM3_ARRH *(unsigned char*)0x528F
#define TIM3_ARRH_bres(X) __asm bres 0x528F,X __endasm
#define TIM3_ARRH_bset(X) __asm bset 0x528F,X __endasm
#define TIM3_ARRH_bcpl(X) __asm bcpl 0x528F,X __endasm
#define TIM3_ARRH_clr() __asm clr 0x528F __endasm

#define TIM3_ARRL *(unsigned char*)0x5290
#define TIM3_ARRL_bres(X) __asm bres 0x5290,X __endasm
#define TIM3_ARRL_bset(X) __asm bset 0x5290,X __endasm
#define TIM3_ARRL_bcpl(X) __asm bcpl 0x5290,X __endasm
#define TIM3_ARRL_clr() __asm clr 0x5290 __endasm

#define TIM3_CCR1H *(unsigned char*)0x5291
#define TIM3_CCR1H_bres(X) __asm bres 0x5291,X __endasm
#define TIM3_CCR1H_bset(X) __asm bset 0x5291,X __endasm
#define TIM3_CCR1H_bcpl(X) __asm bcpl 0x5291,X __endasm
#define TIM3_CCR1H_clr() __asm clr 0x5291 __endasm

#define TIM3_CCR1L *(unsigned char*)0x5292
#define TIM3_CCR1L_bres(X) __asm bres 0x5292,X __endasm
#define TIM3_CCR1L_bset(X) __asm bset 0x5292,X __endasm
#define TIM3_CCR1L_bcpl(X) __asm bcpl 0x5292,X __endasm
#define TIM3_CCR1L_clr() __asm clr 0x5292 __endasm

#define TIM3_CCR2H *(unsigned char*)0x5293
#define TIM3_CCR2H_bres(X) __asm bres 0x5293,X __endasm
#define TIM3_CCR2H_bset(X) __asm bset 0x5293,X __endasm
#define TIM3_CCR2H_bcpl(X) __asm bcpl 0x5293,X __endasm
#define TIM3_CCR2H_clr() __asm clr 0x5293 __endasm

#define TIM3_CCR2L *(unsigned char*)0x5294
#define TIM3_CCR2L_bres(X) __asm bres 0x5294,X __endasm
#define TIM3_CCR2L_bset(X) __asm bset 0x5294,X __endasm
#define TIM3_CCR2L_bcpl(X) __asm bcpl 0x5294,X __endasm
#define TIM3_CCR2L_clr() __asm clr 0x5294 __endasm

#define TIM3_BKR *(unsigned char*)0x5295
#define TIM3_BKR_bres(X) __asm bres 0x5295,X __endasm
#define TIM3_BKR_bset(X) __asm bset 0x5295,X __endasm
#define TIM3_BKR_bcpl(X) __asm bcpl 0x5295,X __endasm
#define TIM3_BKR_clr() __asm clr 0x5295 __endasm

#define TIM3_OISR *(unsigned char*)0x5296
#define TIM3_OISR_bres(X) __asm bres 0x5296,X __endasm
#define TIM3_OISR_bset(X) __asm bset 0x5296,X __endasm
#define TIM3_OISR_bcpl(X) __asm bcpl 0x5296,X __endasm
#define TIM3_OISR_clr() __asm clr 0x5296 __endasm

#define TIM1_CR1 *(unsigned char*)0x52B0
#define TIM1_CR1_bres(X) __asm bres 0x52B0,X __endasm
#define TIM1_CR1_bset(X) __asm bset 0x52B0,X __endasm
#define TIM1_CR1_bcpl(X) __asm bcpl 0x52B0,X __endasm
#define TIM1_CR1_clr() __asm clr 0x52B0 __endasm

#define TIM1_CR2 *(unsigned char*)0x52B1
#define TIM1_CR2_bres(X) __asm bres 0x52B1,X __endasm
#define TIM1_CR2_bset(X) __asm bset 0x52B1,X __endasm
#define TIM1_CR2_bcpl(X) __asm bcpl 0x52B1,X __endasm
#define TIM1_CR2_clr() __asm clr 0x52B1 __endasm

#define TIM1_SMCR *(unsigned char*)0x52B2
#define TIM1_SMCR_bres(X) __asm bres 0x52B2,X __endasm
#define TIM1_SMCR_bset(X) __asm bset 0x52B2,X __endasm
#define TIM1_SMCR_bcpl(X) __asm bcpl 0x52B2,X __endasm
#define TIM1_SMCR_clr() __asm clr 0x52B2 __endasm

#define TIM1_ETR *(unsigned char*)0x52B3
#define TIM1_ETR_bres(X) __asm bres 0x52B3,X __endasm
#define TIM1_ETR_bset(X) __asm bset 0x52B3,X __endasm
#define TIM1_ETR_bcpl(X) __asm bcpl 0x52B3,X __endasm
#define TIM1_ETR_clr() __asm clr 0x52B3 __endasm

#define TIM1_DER *(unsigned char*)0x52B4
#define TIM1_DER_bres(X) __asm bres 0x52B4,X __endasm
#define TIM1_DER_bset(X) __asm bset 0x52B4,X __endasm
#define TIM1_DER_bcpl(X) __asm bcpl 0x52B4,X __endasm
#define TIM1_DER_clr() __asm clr 0x52B4 __endasm

#define TIM1_IER *(unsigned char*)0x52B5
#define TIM1_IER_bres(X) __asm bres 0x52B5,X __endasm
#define TIM1_IER_bset(X) __asm bset 0x52B5,X __endasm
#define TIM1_IER_bcpl(X) __asm bcpl 0x52B5,X __endasm
#define TIM1_IER_clr() __asm clr 0x52B5 __endasm

#define TIM1_SR1 *(unsigned char*)0x52B6
#define TIM1_SR1_bres(X) __asm bres 0x52B6,X __endasm
#define TIM1_SR1_bset(X) __asm bset 0x52B6,X __endasm
#define TIM1_SR1_bcpl(X) __asm bcpl 0x52B6,X __endasm
#define TIM1_SR1_clr() __asm clr 0x52B6 __endasm

#define TIM1_SR2 *(unsigned char*)0x52B7
#define TIM1_SR2_bres(X) __asm bres 0x52B7,X __endasm
#define TIM1_SR2_bset(X) __asm bset 0x52B7,X __endasm
#define TIM1_SR2_bcpl(X) __asm bcpl 0x52B7,X __endasm
#define TIM1_SR2_clr() __asm clr 0x52B7 __endasm

#define TIM1_EGR *(unsigned char*)0x52B8
#define TIM1_EGR_bres(X) __asm bres 0x52B8,X __endasm
#define TIM1_EGR_bset(X) __asm bset 0x52B8,X __endasm
#define TIM1_EGR_bcpl(X) __asm bcpl 0x52B8,X __endasm
#define TIM1_EGR_clr() __asm clr 0x52B8 __endasm

#define TIM1_CCMR1 *(unsigned char*)0x52B9
#define TIM1_CCMR1_bres(X) __asm bres 0x52B9,X __endasm
#define TIM1_CCMR1_bset(X) __asm bset 0x52B9,X __endasm
#define TIM1_CCMR1_bcpl(X) __asm bcpl 0x52B9,X __endasm
#define TIM1_CCMR1_clr() __asm clr 0x52B9 __endasm

#define TIM1_CCMR2 *(unsigned char*)0x52BA
#define TIM1_CCMR2_bres(X) __asm bres 0x52BA,X __endasm
#define TIM1_CCMR2_bset(X) __asm bset 0x52BA,X __endasm
#define TIM1_CCMR2_bcpl(X) __asm bcpl 0x52BA,X __endasm
#define TIM1_CCMR2_clr() __asm clr 0x52BA __endasm

#define TIM1_CCMR3 *(unsigned char*)0x52BB
#define TIM1_CCMR3_bres(X) __asm bres 0x52BB,X __endasm
#define TIM1_CCMR3_bset(X) __asm bset 0x52BB,X __endasm
#define TIM1_CCMR3_bcpl(X) __asm bcpl 0x52BB,X __endasm
#define TIM1_CCMR3_clr() __asm clr 0x52BB __endasm

#define TIM1_CCMR4 *(unsigned char*)0x52BC
#define TIM1_CCMR4_bres(X) __asm bres 0x52BC,X __endasm
#define TIM1_CCMR4_bset(X) __asm bset 0x52BC,X __endasm
#define TIM1_CCMR4_bcpl(X) __asm bcpl 0x52BC,X __endasm
#define TIM1_CCMR4_clr() __asm clr 0x52BC __endasm

#define TIM1_CCER1 *(unsigned char*)0x52BD
#define TIM1_CCER1_bres(X) __asm bres 0x52BD,X __endasm
#define TIM1_CCER1_bset(X) __asm bset 0x52BD,X __endasm
#define TIM1_CCER1_bcpl(X) __asm bcpl 0x52BD,X __endasm
#define TIM1_CCER1_clr() __asm clr 0x52BD __endasm

#define TIM1_CCER2 *(unsigned char*)0x52BE
#define TIM1_CCER2_bres(X) __asm bres 0x52BE,X __endasm
#define TIM1_CCER2_bset(X) __asm bset 0x52BE,X __endasm
#define TIM1_CCER2_bcpl(X) __asm bcpl 0x52BE,X __endasm
#define TIM1_CCER2_clr() __asm clr 0x52BE __endasm

#define TIM1_CNTRH *(unsigned char*)0x52BF
#define TIM1_CNTRH_bres(X) __asm bres 0x52BF,X __endasm
#define TIM1_CNTRH_bset(X) __asm bset 0x52BF,X __endasm
#define TIM1_CNTRH_bcpl(X) __asm bcpl 0x52BF,X __endasm
#define TIM1_CNTRH_clr() __asm clr 0x52BF __endasm

#define TIM1_CNTRL *(unsigned char*)0x52C0
#define TIM1_CNTRL_bres(X) __asm bres 0x52C0,X __endasm
#define TIM1_CNTRL_bset(X) __asm bset 0x52C0,X __endasm
#define TIM1_CNTRL_bcpl(X) __asm bcpl 0x52C0,X __endasm
#define TIM1_CNTRL_clr() __asm clr 0x52C0 __endasm

#define TIM1_PSCRH *(unsigned char*)0x52C1
#define TIM1_PSCRH_bres(X) __asm bres 0x52C1,X __endasm
#define TIM1_PSCRH_bset(X) __asm bset 0x52C1,X __endasm
#define TIM1_PSCRH_bcpl(X) __asm bcpl 0x52C1,X __endasm
#define TIM1_PSCRH_clr() __asm clr 0x52C1 __endasm

#define TIM1_PSCRL *(unsigned char*)0x52C2
#define TIM1_PSCRL_bres(X) __asm bres 0x52C2,X __endasm
#define TIM1_PSCRL_bset(X) __asm bset 0x52C2,X __endasm
#define TIM1_PSCRL_bcpl(X) __asm bcpl 0x52C2,X __endasm
#define TIM1_PSCRL_clr() __asm clr 0x52C2 __endasm

#define TIM1_ARRH *(unsigned char*)0x52C3
#define TIM1_ARRH_bres(X) __asm bres 0x52C3,X __endasm
#define TIM1_ARRH_bset(X) __asm bset 0x52C3,X __endasm
#define TIM1_ARRH_bcpl(X) __asm bcpl 0x52C3,X __endasm
#define TIM1_ARRH_clr() __asm clr 0x52C3 __endasm

#define TIM1_ARRL *(unsigned char*)0x52C4
#define TIM1_ARRL_bres(X) __asm bres 0x52C4,X __endasm
#define TIM1_ARRL_bset(X) __asm bset 0x52C4,X __endasm
#define TIM1_ARRL_bcpl(X) __asm bcpl 0x52C4,X __endasm
#define TIM1_ARRL_clr() __asm clr 0x52C4 __endasm

#define TIM1_RCR *(unsigned char*)0x52C5
#define TIM1_RCR_bres(X) __asm bres 0x52C5,X __endasm
#define TIM1_RCR_bset(X) __asm bset 0x52C5,X __endasm
#define TIM1_RCR_bcpl(X) __asm bcpl 0x52C5,X __endasm
#define TIM1_RCR_clr() __asm clr 0x52C5 __endasm

#define TIM1_CCR1H *(unsigned char*)0x52C6
#define TIM1_CCR1H_bres(X) __asm bres 0x52C6,X __endasm
#define TIM1_CCR1H_bset(X) __asm bset 0x52C6,X __endasm
#define TIM1_CCR1H_bcpl(X) __asm bcpl 0x52C6,X __endasm
#define TIM1_CCR1H_clr() __asm clr 0x52C6 __endasm

#define TIM1_CCR1L *(unsigned char*)0x52C7
#define TIM1_CCR1L_bres(X) __asm bres 0x52C7,X __endasm
#define TIM1_CCR1L_bset(X) __asm bset 0x52C7,X __endasm
#define TIM1_CCR1L_bcpl(X) __asm bcpl 0x52C7,X __endasm
#define TIM1_CCR1L_clr() __asm clr 0x52C7 __endasm

#define TIM1_CCR2H *(unsigned char*)0x52C8
#define TIM1_CCR2H_bres(X) __asm bres 0x52C8,X __endasm
#define TIM1_CCR2H_bset(X) __asm bset 0x52C8,X __endasm
#define TIM1_CCR2H_bcpl(X) __asm bcpl 0x52C8,X __endasm
#define TIM1_CCR2H_clr() __asm clr 0x52C8 __endasm

#define TIM1_CCR2L *(unsigned char*)0x52C9
#define TIM1_CCR2L_bres(X) __asm bres 0x52C9,X __endasm
#define TIM1_CCR2L_bset(X) __asm bset 0x52C9,X __endasm
#define TIM1_CCR2L_bcpl(X) __asm bcpl 0x52C9,X __endasm
#define TIM1_CCR2L_clr() __asm clr 0x52C9 __endasm

#define TIM1_CCR3H *(unsigned char*)0x52CA
#define TIM1_CCR3H_bres(X) __asm bres 0x52CA,X __endasm
#define TIM1_CCR3H_bset(X) __asm bset 0x52CA,X __endasm
#define TIM1_CCR3H_bcpl(X) __asm bcpl 0x52CA,X __endasm
#define TIM1_CCR3H_clr() __asm clr 0x52CA __endasm

#define TIM1_CCR3L *(unsigned char*)0x52CB
#define TIM1_CCR3L_bres(X) __asm bres 0x52CB,X __endasm
#define TIM1_CCR3L_bset(X) __asm bset 0x52CB,X __endasm
#define TIM1_CCR3L_bcpl(X) __asm bcpl 0x52CB,X __endasm
#define TIM1_CCR3L_clr() __asm clr 0x52CB __endasm

#define TIM1_CCR4H *(unsigned char*)0x52CC
#define TIM1_CCR4H_bres(X) __asm bres 0x52CC,X __endasm
#define TIM1_CCR4H_bset(X) __asm bset 0x52CC,X __endasm
#define TIM1_CCR4H_bcpl(X) __asm bcpl 0x52CC,X __endasm
#define TIM1_CCR4H_clr() __asm clr 0x52CC __endasm

#define TIM1_CCR4L *(unsigned char*)0x52CD
#define TIM1_CCR4L_bres(X) __asm bres 0x52CD,X __endasm
#define TIM1_CCR4L_bset(X) __asm bset 0x52CD,X __endasm
#define TIM1_CCR4L_bcpl(X) __asm bcpl 0x52CD,X __endasm
#define TIM1_CCR4L_clr() __asm clr 0x52CD __endasm

#define TIM1_BKR *(unsigned char*)0x52CE
#define TIM1_BKR_bres(X) __asm bres 0x52CE,X __endasm
#define TIM1_BKR_bset(X) __asm bset 0x52CE,X __endasm
#define TIM1_BKR_bcpl(X) __asm bcpl 0x52CE,X __endasm
#define TIM1_BKR_clr() __asm clr 0x52CE __endasm

#define TIM1_DTR *(unsigned char*)0x52CF
#define TIM1_DTR_bres(X) __asm bres 0x52CF,X __endasm
#define TIM1_DTR_bset(X) __asm bset 0x52CF,X __endasm
#define TIM1_DTR_bcpl(X) __asm bcpl 0x52CF,X __endasm
#define TIM1_DTR_clr() __asm clr 0x52CF __endasm

#define TIM1_OISR *(unsigned char*)0x52D0
#define TIM1_OISR_bres(X) __asm bres 0x52D0,X __endasm
#define TIM1_OISR_bset(X) __asm bset 0x52D0,X __endasm
#define TIM1_OISR_bcpl(X) __asm bcpl 0x52D0,X __endasm
#define TIM1_OISR_clr() __asm clr 0x52D0 __endasm

#define TIM1_DCR1 *(unsigned char*)0x52D1
#define TIM1_DCR1_bres(X) __asm bres 0x52D1,X __endasm
#define TIM1_DCR1_bset(X) __asm bset 0x52D1,X __endasm
#define TIM1_DCR1_bcpl(X) __asm bcpl 0x52D1,X __endasm
#define TIM1_DCR1_clr() __asm clr 0x52D1 __endasm

#define TIM1_DCR2 *(unsigned char*)0x52D2
#define TIM1_DCR2_bres(X) __asm bres 0x52D2,X __endasm
#define TIM1_DCR2_bset(X) __asm bset 0x52D2,X __endasm
#define TIM1_DCR2_bcpl(X) __asm bcpl 0x52D2,X __endasm
#define TIM1_DCR2_clr() __asm clr 0x52D2 __endasm

#define TIM1_DMAR *(unsigned char*)0x52D3
#define TIM1_DMAR_bres(X) __asm bres 0x52D3,X __endasm
#define TIM1_DMAR_bset(X) __asm bset 0x52D3,X __endasm
#define TIM1_DMAR_bcpl(X) __asm bcpl 0x52D3,X __endasm
#define TIM1_DMAR_clr() __asm clr 0x52D3 __endasm

#define TIM4_CR1 *(unsigned char*)0x52E0
#define TIM4_CR1_bres(X) __asm bres 0x52E0,X __endasm
#define TIM4_CR1_bset(X) __asm bset 0x52E0,X __endasm
#define TIM4_CR1_bcpl(X) __asm bcpl 0x52E0,X __endasm
#define TIM4_CR1_clr() __asm clr 0x52E0 __endasm

#define TIM4_CR2 *(unsigned char*)0x52E1
#define TIM4_CR2_bres(X) __asm bres 0x52E1,X __endasm
#define TIM4_CR2_bset(X) __asm bset 0x52E1,X __endasm
#define TIM4_CR2_bcpl(X) __asm bcpl 0x52E1,X __endasm
#define TIM4_CR2_clr() __asm clr 0x52E1 __endasm

#define TIM4_SMCR *(unsigned char*)0x52E2
#define TIM4_SMCR_bres(X) __asm bres 0x52E2,X __endasm
#define TIM4_SMCR_bset(X) __asm bset 0x52E2,X __endasm
#define TIM4_SMCR_bcpl(X) __asm bcpl 0x52E2,X __endasm
#define TIM4_SMCR_clr() __asm clr 0x52E2 __endasm

#define TIM4_DER *(unsigned char*)0x52E3
#define TIM4_DER_bres(X) __asm bres 0x52E3,X __endasm
#define TIM4_DER_bset(X) __asm bset 0x52E3,X __endasm
#define TIM4_DER_bcpl(X) __asm bcpl 0x52E3,X __endasm
#define TIM4_DER_clr() __asm clr 0x52E3 __endasm

#define TIM4_IER *(unsigned char*)0x52E4
#define TIM4_IER_bres(X) __asm bres 0x52E4,X __endasm
#define TIM4_IER_bset(X) __asm bset 0x52E4,X __endasm
#define TIM4_IER_bcpl(X) __asm bcpl 0x52E4,X __endasm
#define TIM4_IER_clr() __asm clr 0x52E4 __endasm

#define TIM4_SR1 *(unsigned char*)0x52E5
#define TIM4_SR1_bres(X) __asm bres 0x52E5,X __endasm
#define TIM4_SR1_bset(X) __asm bset 0x52E5,X __endasm
#define TIM4_SR1_bcpl(X) __asm bcpl 0x52E5,X __endasm
#define TIM4_SR1_clr() __asm clr 0x52E5 __endasm

#define TIM4_EGR *(unsigned char*)0x52E6
#define TIM4_EGR_bres(X) __asm bres 0x52E6,X __endasm
#define TIM4_EGR_bset(X) __asm bset 0x52E6,X __endasm
#define TIM4_EGR_bcpl(X) __asm bcpl 0x52E6,X __endasm
#define TIM4_EGR_clr() __asm clr 0x52E6 __endasm

#define TIM4_CNTR *(unsigned char*)0x52E7
#define TIM4_CNTR_bres(X) __asm bres 0x52E7,X __endasm
#define TIM4_CNTR_bset(X) __asm bset 0x52E7,X __endasm
#define TIM4_CNTR_bcpl(X) __asm bcpl 0x52E7,X __endasm
#define TIM4_CNTR_clr() __asm clr 0x52E7 __endasm

#define TIM4_PSCR *(unsigned char*)0x52E8
#define TIM4_PSCR_bres(X) __asm bres 0x52E8,X __endasm
#define TIM4_PSCR_bset(X) __asm bset 0x52E8,X __endasm
#define TIM4_PSCR_bcpl(X) __asm bcpl 0x52E8,X __endasm
#define TIM4_PSCR_clr() __asm clr 0x52E8 __endasm

#define TIM4_ARR *(unsigned char*)0x52E9
#define TIM4_ARR_bres(X) __asm bres 0x52E9,X __endasm
#define TIM4_ARR_bset(X) __asm bset 0x52E9,X __endasm
#define TIM4_ARR_bcpl(X) __asm bcpl 0x52E9,X __endasm
#define TIM4_ARR_clr() __asm clr 0x52E9 __endasm

#define IRTIM_CR *(unsigned char*)0x52FF
#define IRTIM_CR_bres(X) __asm bres 0x52FF,X __endasm
#define IRTIM_CR_bset(X) __asm bset 0x52FF,X __endasm
#define IRTIM_CR_bcpl(X) __asm bcpl 0x52FF,X __endasm
#define IRTIM_CR_clr() __asm clr 0x52FF __endasm

#define TIM5_CR1 *(unsigned char*)0x5300
#define TIM5_CR1_bres(X) __asm bres 0x5300,X __endasm
#define TIM5_CR1_bset(X) __asm bset 0x5300,X __endasm
#define TIM5_CR1_bcpl(X) __asm bcpl 0x5300,X __endasm
#define TIM5_CR1_clr() __asm clr 0x5300 __endasm

#define TIM5_CR2 *(unsigned char*)0x5301
#define TIM5_CR2_bres(X) __asm bres 0x5301,X __endasm
#define TIM5_CR2_bset(X) __asm bset 0x5301,X __endasm
#define TIM5_CR2_bcpl(X) __asm bcpl 0x5301,X __endasm
#define TIM5_CR2_clr() __asm clr 0x5301 __endasm

#define TIM5_SMCR *(unsigned char*)0x5302
#define TIM5_SMCR_bres(X) __asm bres 0x5302,X __endasm
#define TIM5_SMCR_bset(X) __asm bset 0x5302,X __endasm
#define TIM5_SMCR_bcpl(X) __asm bcpl 0x5302,X __endasm
#define TIM5_SMCR_clr() __asm clr 0x5302 __endasm

#define TIM5_ETR *(unsigned char*)0x5303
#define TIM5_ETR_bres(X) __asm bres 0x5303,X __endasm
#define TIM5_ETR_bset(X) __asm bset 0x5303,X __endasm
#define TIM5_ETR_bcpl(X) __asm bcpl 0x5303,X __endasm
#define TIM5_ETR_clr() __asm clr 0x5303 __endasm

#define TIM5_DER *(unsigned char*)0x5304
#define TIM5_DER_bres(X) __asm bres 0x5304,X __endasm
#define TIM5_DER_bset(X) __asm bset 0x5304,X __endasm
#define TIM5_DER_bcpl(X) __asm bcpl 0x5304,X __endasm
#define TIM5_DER_clr() __asm clr 0x5304 __endasm

#define TIM5_IER *(unsigned char*)0x5305
#define TIM5_IER_bres(X) __asm bres 0x5305,X __endasm
#define TIM5_IER_bset(X) __asm bset 0x5305,X __endasm
#define TIM5_IER_bcpl(X) __asm bcpl 0x5305,X __endasm
#define TIM5_IER_clr() __asm clr 0x5305 __endasm

#define TIM5_SR1 *(unsigned char*)0x5306
#define TIM5_SR1_bres(X) __asm bres 0x5306,X __endasm
#define TIM5_SR1_bset(X) __asm bset 0x5306,X __endasm
#define TIM5_SR1_bcpl(X) __asm bcpl 0x5306,X __endasm
#define TIM5_SR1_clr() __asm clr 0x5306 __endasm

#define TIM5_SR2 *(unsigned char*)0x5307
#define TIM5_SR2_bres(X) __asm bres 0x5307,X __endasm
#define TIM5_SR2_bset(X) __asm bset 0x5307,X __endasm
#define TIM5_SR2_bcpl(X) __asm bcpl 0x5307,X __endasm
#define TIM5_SR2_clr() __asm clr 0x5307 __endasm

#define TIM5_EGR *(unsigned char*)0x5308
#define TIM5_EGR_bres(X) __asm bres 0x5308,X __endasm
#define TIM5_EGR_bset(X) __asm bset 0x5308,X __endasm
#define TIM5_EGR_bcpl(X) __asm bcpl 0x5308,X __endasm
#define TIM5_EGR_clr() __asm clr 0x5308 __endasm

#define TIM5_CCMR1 *(unsigned char*)0x5309
#define TIM5_CCMR1_bres(X) __asm bres 0x5309,X __endasm
#define TIM5_CCMR1_bset(X) __asm bset 0x5309,X __endasm
#define TIM5_CCMR1_bcpl(X) __asm bcpl 0x5309,X __endasm
#define TIM5_CCMR1_clr() __asm clr 0x5309 __endasm

#define TIM5_CCMR2 *(unsigned char*)0x530A
#define TIM5_CCMR2_bres(X) __asm bres 0x530A,X __endasm
#define TIM5_CCMR2_bset(X) __asm bset 0x530A,X __endasm
#define TIM5_CCMR2_bcpl(X) __asm bcpl 0x530A,X __endasm
#define TIM5_CCMR2_clr() __asm clr 0x530A __endasm

#define TIM5_CCER1 *(unsigned char*)0x530B
#define TIM5_CCER1_bres(X) __asm bres 0x530B,X __endasm
#define TIM5_CCER1_bset(X) __asm bset 0x530B,X __endasm
#define TIM5_CCER1_bcpl(X) __asm bcpl 0x530B,X __endasm
#define TIM5_CCER1_clr() __asm clr 0x530B __endasm

#define TIM5_CNTRH *(unsigned char*)0x530C
#define TIM5_CNTRH_bres(X) __asm bres 0x530C,X __endasm
#define TIM5_CNTRH_bset(X) __asm bset 0x530C,X __endasm
#define TIM5_CNTRH_bcpl(X) __asm bcpl 0x530C,X __endasm
#define TIM5_CNTRH_clr() __asm clr 0x530C __endasm

#define TIM5_CNTRL *(unsigned char*)0x530D
#define TIM5_CNTRL_bres(X) __asm bres 0x530D,X __endasm
#define TIM5_CNTRL_bset(X) __asm bset 0x530D,X __endasm
#define TIM5_CNTRL_bcpl(X) __asm bcpl 0x530D,X __endasm
#define TIM5_CNTRL_clr() __asm clr 0x530D __endasm

#define TIM5_PSCR *(unsigned char*)0x530E
#define TIM5_PSCR_bres(X) __asm bres 0x530E,X __endasm
#define TIM5_PSCR_bset(X) __asm bset 0x530E,X __endasm
#define TIM5_PSCR_bcpl(X) __asm bcpl 0x530E,X __endasm
#define TIM5_PSCR_clr() __asm clr 0x530E __endasm

#define TIM5_ARRH *(unsigned char*)0x530F
#define TIM5_ARRH_bres(X) __asm bres 0x530F,X __endasm
#define TIM5_ARRH_bset(X) __asm bset 0x530F,X __endasm
#define TIM5_ARRH_bcpl(X) __asm bcpl 0x530F,X __endasm
#define TIM5_ARRH_clr() __asm clr 0x530F __endasm

#define TIM5_ARRL *(unsigned char*)0x5310
#define TIM5_ARRL_bres(X) __asm bres 0x5310,X __endasm
#define TIM5_ARRL_bset(X) __asm bset 0x5310,X __endasm
#define TIM5_ARRL_bcpl(X) __asm bcpl 0x5310,X __endasm
#define TIM5_ARRL_clr() __asm clr 0x5310 __endasm

#define TIM5_CCR1H *(unsigned char*)0x5311
#define TIM5_CCR1H_bres(X) __asm bres 0x5311,X __endasm
#define TIM5_CCR1H_bset(X) __asm bset 0x5311,X __endasm
#define TIM5_CCR1H_bcpl(X) __asm bcpl 0x5311,X __endasm
#define TIM5_CCR1H_clr() __asm clr 0x5311 __endasm

#define TIM5_CCR1L *(unsigned char*)0x5312
#define TIM5_CCR1L_bres(X) __asm bres 0x5312,X __endasm
#define TIM5_CCR1L_bset(X) __asm bset 0x5312,X __endasm
#define TIM5_CCR1L_bcpl(X) __asm bcpl 0x5312,X __endasm
#define TIM5_CCR1L_clr() __asm clr 0x5312 __endasm

#define TIM5_CCR2H *(unsigned char*)0x5313
#define TIM5_CCR2H_bres(X) __asm bres 0x5313,X __endasm
#define TIM5_CCR2H_bset(X) __asm bset 0x5313,X __endasm
#define TIM5_CCR2H_bcpl(X) __asm bcpl 0x5313,X __endasm
#define TIM5_CCR2H_clr() __asm clr 0x5313 __endasm

#define TIM5_CCR2L *(unsigned char*)0x5314
#define TIM5_CCR2L_bres(X) __asm bres 0x5314,X __endasm
#define TIM5_CCR2L_bset(X) __asm bset 0x5314,X __endasm
#define TIM5_CCR2L_bcpl(X) __asm bcpl 0x5314,X __endasm
#define TIM5_CCR2L_clr() __asm clr 0x5314 __endasm

#define TIM5_BKR *(unsigned char*)0x5315
#define TIM5_BKR_bres(X) __asm bres 0x5315,X __endasm
#define TIM5_BKR_bset(X) __asm bset 0x5315,X __endasm
#define TIM5_BKR_bcpl(X) __asm bcpl 0x5315,X __endasm
#define TIM5_BKR_clr() __asm clr 0x5315 __endasm

#define TIM5_OISR *(unsigned char*)0x5316
#define TIM5_OISR_bres(X) __asm bres 0x5316,X __endasm
#define TIM5_OISR_bset(X) __asm bset 0x5316,X __endasm
#define TIM5_OISR_bcpl(X) __asm bcpl 0x5316,X __endasm
#define TIM5_OISR_clr() __asm clr 0x5316 __endasm

#define ADC1_BASE *(unsigned char*)0x5340
#define ADC1_CR1 *(unsigned char*)0x5340
#define ADC1_CR1_bres(X) __asm bres 0x5340,X __endasm
#define ADC1_CR1_bset(X) __asm bset 0x5340,X __endasm
#define ADC1_CR1_bcpl(X) __asm bcpl 0x5340,X __endasm
#define ADC1_CR1_clr() __asm clr 0x5340 __endasm

#define ADC1_CR2 *(unsigned char*)0x5341
#define ADC1_CR2_bres(X) __asm bres 0x5341,X __endasm
#define ADC1_CR2_bset(X) __asm bset 0x5341,X __endasm
#define ADC1_CR2_bcpl(X) __asm bcpl 0x5341,X __endasm
#define ADC1_CR2_clr() __asm clr 0x5341 __endasm

#define ADC1_CR3 *(unsigned char*)0x5342
#define ADC1_CR3_bres(X) __asm bres 0x5342,X __endasm
#define ADC1_CR3_bset(X) __asm bset 0x5342,X __endasm
#define ADC1_CR3_bcpl(X) __asm bcpl 0x5342,X __endasm
#define ADC1_CR3_clr() __asm clr 0x5342 __endasm

#define ADC1_SR *(unsigned char*)0x5343
#define ADC1_SR_bres(X) __asm bres 0x5343,X __endasm
#define ADC1_SR_bset(X) __asm bset 0x5343,X __endasm
#define ADC1_SR_bcpl(X) __asm bcpl 0x5343,X __endasm
#define ADC1_SR_clr() __asm clr 0x5343 __endasm

#define ADC1_DRH *(unsigned char*)0x5344
#define ADC1_DRH_bres(X) __asm bres 0x5344,X __endasm
#define ADC1_DRH_bset(X) __asm bset 0x5344,X __endasm
#define ADC1_DRH_bcpl(X) __asm bcpl 0x5344,X __endasm
#define ADC1_DRH_clr() __asm clr 0x5344 __endasm

#define ADC1_DRL *(unsigned char*)0x5345
#define ADC1_DRL_bres(X) __asm bres 0x5345,X __endasm
#define ADC1_DRL_bset(X) __asm bset 0x5345,X __endasm
#define ADC1_DRL_bcpl(X) __asm bcpl 0x5345,X __endasm
#define ADC1_DRL_clr() __asm clr 0x5345 __endasm

#define ADC1_HTRH *(unsigned char*)0x5346
#define ADC1_HTRH_bres(X) __asm bres 0x5346,X __endasm
#define ADC1_HTRH_bset(X) __asm bset 0x5346,X __endasm
#define ADC1_HTRH_bcpl(X) __asm bcpl 0x5346,X __endasm
#define ADC1_HTRH_clr() __asm clr 0x5346 __endasm

#define ADC1_HTRL *(unsigned char*)0x5347
#define ADC1_HTRL_bres(X) __asm bres 0x5347,X __endasm
#define ADC1_HTRL_bset(X) __asm bset 0x5347,X __endasm
#define ADC1_HTRL_bcpl(X) __asm bcpl 0x5347,X __endasm
#define ADC1_HTRL_clr() __asm clr 0x5347 __endasm

#define ADC1_LTRH *(unsigned char*)0x5348
#define ADC1_LTRH_bres(X) __asm bres 0x5348,X __endasm
#define ADC1_LTRH_bset(X) __asm bset 0x5348,X __endasm
#define ADC1_LTRH_bcpl(X) __asm bcpl 0x5348,X __endasm
#define ADC1_LTRH_clr() __asm clr 0x5348 __endasm

#define ADC1_LTRL *(unsigned char*)0x5349
#define ADC1_LTRL_bres(X) __asm bres 0x5349,X __endasm
#define ADC1_LTRL_bset(X) __asm bset 0x5349,X __endasm
#define ADC1_LTRL_bcpl(X) __asm bcpl 0x5349,X __endasm
#define ADC1_LTRL_clr() __asm clr 0x5349 __endasm

#define ADC1_SQR1 *(unsigned char*)0x534A
#define ADC1_SQR1_bres(X) __asm bres 0x534A,X __endasm
#define ADC1_SQR1_bset(X) __asm bset 0x534A,X __endasm
#define ADC1_SQR1_bcpl(X) __asm bcpl 0x534A,X __endasm
#define ADC1_SQR1_clr() __asm clr 0x534A __endasm

#define ADC1_SQR2 *(unsigned char*)0x534B
#define ADC1_SQR2_bres(X) __asm bres 0x534B,X __endasm
#define ADC1_SQR2_bset(X) __asm bset 0x534B,X __endasm
#define ADC1_SQR2_bcpl(X) __asm bcpl 0x534B,X __endasm
#define ADC1_SQR2_clr() __asm clr 0x534B __endasm

#define ADC1_SQR3 *(unsigned char*)0x534C
#define ADC1_SQR3_bres(X) __asm bres 0x534C,X __endasm
#define ADC1_SQR3_bset(X) __asm bset 0x534C,X __endasm
#define ADC1_SQR3_bcpl(X) __asm bcpl 0x534C,X __endasm
#define ADC1_SQR3_clr() __asm clr 0x534C __endasm

#define ADC1_SQR4 *(unsigned char*)0x534D
#define ADC1_SQR4_bres(X) __asm bres 0x534D,X __endasm
#define ADC1_SQR4_bset(X) __asm bset 0x534D,X __endasm
#define ADC1_SQR4_bcpl(X) __asm bcpl 0x534D,X __endasm
#define ADC1_SQR4_clr() __asm clr 0x534D __endasm

#define ADC1_TRIGR1 *(unsigned char*)0x534E
#define ADC1_TRIGR1_bres(X) __asm bres 0x534E,X __endasm
#define ADC1_TRIGR1_bset(X) __asm bset 0x534E,X __endasm
#define ADC1_TRIGR1_bcpl(X) __asm bcpl 0x534E,X __endasm
#define ADC1_TRIGR1_clr() __asm clr 0x534E __endasm

#define ADC1_TRIGR2 *(unsigned char*)0x534F
#define ADC1_TRIGR2_bres(X) __asm bres 0x534F,X __endasm
#define ADC1_TRIGR2_bset(X) __asm bset 0x534F,X __endasm
#define ADC1_TRIGR2_bcpl(X) __asm bcpl 0x534F,X __endasm
#define ADC1_TRIGR2_clr() __asm clr 0x534F __endasm

#define ADC1_TRIGR3 *(unsigned char*)0x5350
#define ADC1_TRIGR3_bres(X) __asm bres 0x5350,X __endasm
#define ADC1_TRIGR3_bset(X) __asm bset 0x5350,X __endasm
#define ADC1_TRIGR3_bcpl(X) __asm bcpl 0x5350,X __endasm
#define ADC1_TRIGR3_clr() __asm clr 0x5350 __endasm

#define ADC1_TRIGR4 *(unsigned char*)0x5351
#define ADC1_TRIGR4_bres(X) __asm bres 0x5351,X __endasm
#define ADC1_TRIGR4_bset(X) __asm bset 0x5351,X __endasm
#define ADC1_TRIGR4_bcpl(X) __asm bcpl 0x5351,X __endasm
#define ADC1_TRIGR4_clr() __asm clr 0x5351 __endasm

#define DAC_CH1CR1 *(unsigned char*)0x5380
#define DAC_CH1CR1_bres(X) __asm bres 0x5380,X __endasm
#define DAC_CH1CR1_bset(X) __asm bset 0x5380,X __endasm
#define DAC_CH1CR1_bcpl(X) __asm bcpl 0x5380,X __endasm
#define DAC_CH1CR1_clr() __asm clr 0x5380 __endasm

#define DAC_CH1CR2 *(unsigned char*)0x5381
#define DAC_CH1CR2_bres(X) __asm bres 0x5381,X __endasm
#define DAC_CH1CR2_bset(X) __asm bset 0x5381,X __endasm
#define DAC_CH1CR2_bcpl(X) __asm bcpl 0x5381,X __endasm
#define DAC_CH1CR2_clr() __asm clr 0x5381 __endasm

#define DAC_CH2CR1 *(unsigned char*)0x5382
#define DAC_CH2CR1_bres(X) __asm bres 0x5382,X __endasm
#define DAC_CH2CR1_bset(X) __asm bset 0x5382,X __endasm
#define DAC_CH2CR1_bcpl(X) __asm bcpl 0x5382,X __endasm
#define DAC_CH2CR1_clr() __asm clr 0x5382 __endasm

#define DAC_CH2CR2 *(unsigned char*)0x5383
#define DAC_CH2CR2_bres(X) __asm bres 0x5383,X __endasm
#define DAC_CH2CR2_bset(X) __asm bset 0x5383,X __endasm
#define DAC_CH2CR2_bcpl(X) __asm bcpl 0x5383,X __endasm
#define DAC_CH2CR2_clr() __asm clr 0x5383 __endasm

#define DAC_SWTRIGR *(unsigned char*)0x5384
#define DAC_SWTRIGR_bres(X) __asm bres 0x5384,X __endasm
#define DAC_SWTRIGR_bset(X) __asm bset 0x5384,X __endasm
#define DAC_SWTRIGR_bcpl(X) __asm bcpl 0x5384,X __endasm
#define DAC_SWTRIGR_clr() __asm clr 0x5384 __endasm

#define DAC_SR *(unsigned char*)0x5385
#define DAC_SR_bres(X) __asm bres 0x5385,X __endasm
#define DAC_SR_bset(X) __asm bset 0x5385,X __endasm
#define DAC_SR_bcpl(X) __asm bcpl 0x5385,X __endasm
#define DAC_SR_clr() __asm clr 0x5385 __endasm

#define DAC_CH1RDHRH *(unsigned char*)0x5388
#define DAC_CH1RDHRH_bres(X) __asm bres 0x5388,X __endasm
#define DAC_CH1RDHRH_bset(X) __asm bset 0x5388,X __endasm
#define DAC_CH1RDHRH_bcpl(X) __asm bcpl 0x5388,X __endasm
#define DAC_CH1RDHRH_clr() __asm clr 0x5388 __endasm

#define DAC_CH1RDHRL *(unsigned char*)0x5389
#define DAC_CH1RDHRL_bres(X) __asm bres 0x5389,X __endasm
#define DAC_CH1RDHRL_bset(X) __asm bset 0x5389,X __endasm
#define DAC_CH1RDHRL_bcpl(X) __asm bcpl 0x5389,X __endasm
#define DAC_CH1RDHRL_clr() __asm clr 0x5389 __endasm

#define DAC_CH1LDHRH *(unsigned char*)0x538C
#define DAC_CH1LDHRH_bres(X) __asm bres 0x538C,X __endasm
#define DAC_CH1LDHRH_bset(X) __asm bset 0x538C,X __endasm
#define DAC_CH1LDHRH_bcpl(X) __asm bcpl 0x538C,X __endasm
#define DAC_CH1LDHRH_clr() __asm clr 0x538C __endasm

#define DAC_CH1LDHRL *(unsigned char*)0x538D
#define DAC_CH1LDHRL_bres(X) __asm bres 0x538D,X __endasm
#define DAC_CH1LDHRL_bset(X) __asm bset 0x538D,X __endasm
#define DAC_CH1LDHRL_bcpl(X) __asm bcpl 0x538D,X __endasm
#define DAC_CH1LDHRL_clr() __asm clr 0x538D __endasm

#define DAC_CH1DHR8 *(unsigned char*)0x5390
#define DAC_CH1DHR8_bres(X) __asm bres 0x5390,X __endasm
#define DAC_CH1DHR8_bset(X) __asm bset 0x5390,X __endasm
#define DAC_CH1DHR8_bcpl(X) __asm bcpl 0x5390,X __endasm
#define DAC_CH1DHR8_clr() __asm clr 0x5390 __endasm

#define DAC_CH2RDHRH *(unsigned char*)0x5394
#define DAC_CH2RDHRH_bres(X) __asm bres 0x5394,X __endasm
#define DAC_CH2RDHRH_bset(X) __asm bset 0x5394,X __endasm
#define DAC_CH2RDHRH_bcpl(X) __asm bcpl 0x5394,X __endasm
#define DAC_CH2RDHRH_clr() __asm clr 0x5394 __endasm

#define DAC_CH2RDHRL *(unsigned char*)0x5395
#define DAC_CH2RDHRL_bres(X) __asm bres 0x5395,X __endasm
#define DAC_CH2RDHRL_bset(X) __asm bset 0x5395,X __endasm
#define DAC_CH2RDHRL_bcpl(X) __asm bcpl 0x5395,X __endasm
#define DAC_CH2RDHRL_clr() __asm clr 0x5395 __endasm

#define DAC_CH2LDHRH *(unsigned char*)0x5398
#define DAC_CH2LDHRH_bres(X) __asm bres 0x5398,X __endasm
#define DAC_CH2LDHRH_bset(X) __asm bset 0x5398,X __endasm
#define DAC_CH2LDHRH_bcpl(X) __asm bcpl 0x5398,X __endasm
#define DAC_CH2LDHRH_clr() __asm clr 0x5398 __endasm

#define DAC_CH2LDHRL *(unsigned char*)0x5399
#define DAC_CH2LDHRL_bres(X) __asm bres 0x5399,X __endasm
#define DAC_CH2LDHRL_bset(X) __asm bset 0x5399,X __endasm
#define DAC_CH2LDHRL_bcpl(X) __asm bcpl 0x5399,X __endasm
#define DAC_CH2LDHRL_clr() __asm clr 0x5399 __endasm

#define DAC_CH2DHR8 *(unsigned char*)0x539C
#define DAC_CH2DHR8_bres(X) __asm bres 0x539C,X __endasm
#define DAC_CH2DHR8_bset(X) __asm bset 0x539C,X __endasm
#define DAC_CH2DHR8_bcpl(X) __asm bcpl 0x539C,X __endasm
#define DAC_CH2DHR8_clr() __asm clr 0x539C __endasm

#define DAC_DCH1RDHRH *(unsigned char*)0x53A0
#define DAC_DCH1RDHRH_bres(X) __asm bres 0x53A0,X __endasm
#define DAC_DCH1RDHRH_bset(X) __asm bset 0x53A0,X __endasm
#define DAC_DCH1RDHRH_bcpl(X) __asm bcpl 0x53A0,X __endasm
#define DAC_DCH1RDHRH_clr() __asm clr 0x53A0 __endasm

#define DAC_DCH1RDHRL *(unsigned char*)0x53A1
#define DAC_DCH1RDHRL_bres(X) __asm bres 0x53A1,X __endasm
#define DAC_DCH1RDHRL_bset(X) __asm bset 0x53A1,X __endasm
#define DAC_DCH1RDHRL_bcpl(X) __asm bcpl 0x53A1,X __endasm
#define DAC_DCH1RDHRL_clr() __asm clr 0x53A1 __endasm

#define DAC_DCH2RDHRH *(unsigned char*)0x53A2
#define DAC_DCH2RDHRH_bres(X) __asm bres 0x53A2,X __endasm
#define DAC_DCH2RDHRH_bset(X) __asm bset 0x53A2,X __endasm
#define DAC_DCH2RDHRH_bcpl(X) __asm bcpl 0x53A2,X __endasm
#define DAC_DCH2RDHRH_clr() __asm clr 0x53A2 __endasm

#define DAC_DCH2RDHRL *(unsigned char*)0x53A3
#define DAC_DCH2RDHRL_bres(X) __asm bres 0x53A3,X __endasm
#define DAC_DCH2RDHRL_bset(X) __asm bset 0x53A3,X __endasm
#define DAC_DCH2RDHRL_bcpl(X) __asm bcpl 0x53A3,X __endasm
#define DAC_DCH2RDHRL_clr() __asm clr 0x53A3 __endasm

#define DAC_DCH1LDHRH *(unsigned char*)0x53A4
#define DAC_DCH1LDHRH_bres(X) __asm bres 0x53A4,X __endasm
#define DAC_DCH1LDHRH_bset(X) __asm bset 0x53A4,X __endasm
#define DAC_DCH1LDHRH_bcpl(X) __asm bcpl 0x53A4,X __endasm
#define DAC_DCH1LDHRH_clr() __asm clr 0x53A4 __endasm

#define DAC_DCH1LDHRL *(unsigned char*)0x53A5
#define DAC_DCH1LDHRL_bres(X) __asm bres 0x53A5,X __endasm
#define DAC_DCH1LDHRL_bset(X) __asm bset 0x53A5,X __endasm
#define DAC_DCH1LDHRL_bcpl(X) __asm bcpl 0x53A5,X __endasm
#define DAC_DCH1LDHRL_clr() __asm clr 0x53A5 __endasm

#define DAC_DCH2LDHRH *(unsigned char*)0x53A6
#define DAC_DCH2LDHRH_bres(X) __asm bres 0x53A6,X __endasm
#define DAC_DCH2LDHRH_bset(X) __asm bset 0x53A6,X __endasm
#define DAC_DCH2LDHRH_bcpl(X) __asm bcpl 0x53A6,X __endasm
#define DAC_DCH2LDHRH_clr() __asm clr 0x53A6 __endasm

#define DAC_DCH2LDHRL *(unsigned char*)0x53A7
#define DAC_DCH2LDHRL_bres(X) __asm bres 0x53A7,X __endasm
#define DAC_DCH2LDHRL_bset(X) __asm bset 0x53A7,X __endasm
#define DAC_DCH2LDHRL_bcpl(X) __asm bcpl 0x53A7,X __endasm
#define DAC_DCH2LDHRL_clr() __asm clr 0x53A7 __endasm

#define DAC_DCH1DHR8 *(unsigned char*)0x53A8
#define DAC_DCH1DHR8_bres(X) __asm bres 0x53A8,X __endasm
#define DAC_DCH1DHR8_bset(X) __asm bset 0x53A8,X __endasm
#define DAC_DCH1DHR8_bcpl(X) __asm bcpl 0x53A8,X __endasm
#define DAC_DCH1DHR8_clr() __asm clr 0x53A8 __endasm

#define DAC_DCH2DHR8 *(unsigned char*)0x53A9
#define DAC_DCH2DHR8_bres(X) __asm bres 0x53A9,X __endasm
#define DAC_DCH2DHR8_bset(X) __asm bset 0x53A9,X __endasm
#define DAC_DCH2DHR8_bcpl(X) __asm bcpl 0x53A9,X __endasm
#define DAC_DCH2DHR8_clr() __asm clr 0x53A9 __endasm

#define DAC_CH1DORH *(unsigned char*)0x53AC
#define DAC_CH1DORH_bres(X) __asm bres 0x53AC,X __endasm
#define DAC_CH1DORH_bset(X) __asm bset 0x53AC,X __endasm
#define DAC_CH1DORH_bcpl(X) __asm bcpl 0x53AC,X __endasm
#define DAC_CH1DORH_clr() __asm clr 0x53AC __endasm

#define DAC_CH1DORL *(unsigned char*)0x53AD
#define DAC_CH1DORL_bres(X) __asm bres 0x53AD,X __endasm
#define DAC_CH1DORL_bset(X) __asm bset 0x53AD,X __endasm
#define DAC_CH1DORL_bcpl(X) __asm bcpl 0x53AD,X __endasm
#define DAC_CH1DORL_clr() __asm clr 0x53AD __endasm

#define DAC_CH2DORH *(unsigned char*)0x53B0
#define DAC_CH2DORH_bres(X) __asm bres 0x53B0,X __endasm
#define DAC_CH2DORH_bset(X) __asm bset 0x53B0,X __endasm
#define DAC_CH2DORH_bcpl(X) __asm bcpl 0x53B0,X __endasm
#define DAC_CH2DORH_clr() __asm clr 0x53B0 __endasm

#define DAC_CH2DORL *(unsigned char*)0x53B1
#define DAC_CH2DORL_bres(X) __asm bres 0x53B1,X __endasm
#define DAC_CH2DORL_bset(X) __asm bset 0x53B1,X __endasm
#define DAC_CH2DORL_bcpl(X) __asm bcpl 0x53B1,X __endasm
#define DAC_CH2DORL_clr() __asm clr 0x53B1 __endasm

#define AES_CR *(unsigned char*)0x53D0
#define AES_CR_bres(X) __asm bres 0x53D0,X __endasm
#define AES_CR_bset(X) __asm bset 0x53D0,X __endasm
#define AES_CR_bcpl(X) __asm bcpl 0x53D0,X __endasm
#define AES_CR_clr() __asm clr 0x53D0 __endasm

#define AES_SR *(unsigned char*)0x53D1
#define AES_SR_bres(X) __asm bres 0x53D1,X __endasm
#define AES_SR_bset(X) __asm bset 0x53D1,X __endasm
#define AES_SR_bcpl(X) __asm bcpl 0x53D1,X __endasm
#define AES_SR_clr() __asm clr 0x53D1 __endasm

#define AES_DINR *(unsigned char*)0x53D2
#define AES_DINR_bres(X) __asm bres 0x53D2,X __endasm
#define AES_DINR_bset(X) __asm bset 0x53D2,X __endasm
#define AES_DINR_bcpl(X) __asm bcpl 0x53D2,X __endasm
#define AES_DINR_clr() __asm clr 0x53D2 __endasm

#define AES_DOUTR *(unsigned char*)0x53D3
#define AES_DOUTR_bres(X) __asm bres 0x53D3,X __endasm
#define AES_DOUTR_bset(X) __asm bset 0x53D3,X __endasm
#define AES_DOUTR_bcpl(X) __asm bcpl 0x53D3,X __endasm
#define AES_DOUTR_clr() __asm clr 0x53D3 __endasm

#define LCD_CR1 *(unsigned char*)0x5400
#define LCD_CR1_bres(X) __asm bres 0x5400,X __endasm
#define LCD_CR1_bset(X) __asm bset 0x5400,X __endasm
#define LCD_CR1_bcpl(X) __asm bcpl 0x5400,X __endasm
#define LCD_CR1_clr() __asm clr 0x5400 __endasm

#define LCD_CR2 *(unsigned char*)0x5401
#define LCD_CR2_bres(X) __asm bres 0x5401,X __endasm
#define LCD_CR2_bset(X) __asm bset 0x5401,X __endasm
#define LCD_CR2_bcpl(X) __asm bcpl 0x5401,X __endasm
#define LCD_CR2_clr() __asm clr 0x5401 __endasm

#define LCD_CR3 *(unsigned char*)0x5402
#define LCD_CR3_bres(X) __asm bres 0x5402,X __endasm
#define LCD_CR3_bset(X) __asm bset 0x5402,X __endasm
#define LCD_CR3_bcpl(X) __asm bcpl 0x5402,X __endasm
#define LCD_CR3_clr() __asm clr 0x5402 __endasm

#define LCD_FRQ *(unsigned char*)0x5403
#define LCD_FRQ_bres(X) __asm bres 0x5403,X __endasm
#define LCD_FRQ_bset(X) __asm bset 0x5403,X __endasm
#define LCD_FRQ_bcpl(X) __asm bcpl 0x5403,X __endasm
#define LCD_FRQ_clr() __asm clr 0x5403 __endasm

#define LCD_PM_6 *(unsigned char*)0x5404
#define LCD_PM_6_bres(X) __asm bres 0x5404,X __endasm
#define LCD_PM_6_bset(X) __asm bset 0x5404,X __endasm
#define LCD_PM_6_bcpl(X) __asm bcpl 0x5404,X __endasm
#define LCD_PM_6_clr() __asm clr 0x5404 __endasm

#define LCD_VED1_2 *(unsigned char*)0x540A
#define LCD_VED1_2_bres(X) __asm bres 0x540A,X __endasm
#define LCD_VED1_2_bset(X) __asm bset 0x540A,X __endasm
#define LCD_VED1_2_bcpl(X) __asm bcpl 0x540A,X __endasm
#define LCD_VED1_2_clr() __asm clr 0x540A __endasm

#define LCD_RAM_22 *(unsigned char*)0x540C
#define LCD_RAM_22_bres(X) __asm bres 0x540C,X __endasm
#define LCD_RAM_22_bset(X) __asm bset 0x540C,X __endasm
#define LCD_RAM_22_bcpl(X) __asm bcpl 0x540C,X __endasm
#define LCD_RAM_22_clr() __asm clr 0x540C __endasm

#define LCD_VED2_13 *(unsigned char*)0x5422
#define LCD_VED2_13_bres(X) __asm bres 0x5422,X __endasm
#define LCD_VED2_13_bset(X) __asm bset 0x5422,X __endasm
#define LCD_VED2_13_bcpl(X) __asm bcpl 0x5422,X __endasm
#define LCD_VED2_13_clr() __asm clr 0x5422 __endasm

#define LCD_CR4 *(unsigned char*)0x542F
#define LCD_CR4_bres(X) __asm bres 0x542F,X __endasm
#define LCD_CR4_bset(X) __asm bset 0x542F,X __endasm
#define LCD_CR4_bcpl(X) __asm bcpl 0x542F,X __endasm
#define LCD_CR4_clr() __asm clr 0x542F __endasm

#define RI_ICR1 *(unsigned char*)0x5431
#define RI_ICR1_bres(X) __asm bres 0x5431,X __endasm
#define RI_ICR1_bset(X) __asm bset 0x5431,X __endasm
#define RI_ICR1_bcpl(X) __asm bcpl 0x5431,X __endasm
#define RI_ICR1_clr() __asm clr 0x5431 __endasm

#define RI_ICR2 *(unsigned char*)0x5432
#define RI_ICR2_bres(X) __asm bres 0x5432,X __endasm
#define RI_ICR2_bset(X) __asm bset 0x5432,X __endasm
#define RI_ICR2_bcpl(X) __asm bcpl 0x5432,X __endasm
#define RI_ICR2_clr() __asm clr 0x5432 __endasm

#define RI_IOIR1 *(unsigned char*)0x5433
#define RI_IOIR1_bres(X) __asm bres 0x5433,X __endasm
#define RI_IOIR1_bset(X) __asm bset 0x5433,X __endasm
#define RI_IOIR1_bcpl(X) __asm bcpl 0x5433,X __endasm
#define RI_IOIR1_clr() __asm clr 0x5433 __endasm

#define RI_IOIR2 *(unsigned char*)0x5434
#define RI_IOIR2_bres(X) __asm bres 0x5434,X __endasm
#define RI_IOIR2_bset(X) __asm bset 0x5434,X __endasm
#define RI_IOIR2_bcpl(X) __asm bcpl 0x5434,X __endasm
#define RI_IOIR2_clr() __asm clr 0x5434 __endasm

#define RI_IOIR3 *(unsigned char*)0x5435
#define RI_IOIR3_bres(X) __asm bres 0x5435,X __endasm
#define RI_IOIR3_bset(X) __asm bset 0x5435,X __endasm
#define RI_IOIR3_bcpl(X) __asm bcpl 0x5435,X __endasm
#define RI_IOIR3_clr() __asm clr 0x5435 __endasm

#define RI_IOCMR1 *(unsigned char*)0x5436
#define RI_IOCMR1_bres(X) __asm bres 0x5436,X __endasm
#define RI_IOCMR1_bset(X) __asm bset 0x5436,X __endasm
#define RI_IOCMR1_bcpl(X) __asm bcpl 0x5436,X __endasm
#define RI_IOCMR1_clr() __asm clr 0x5436 __endasm

#define RI_IOCMR2 *(unsigned char*)0x5437
#define RI_IOCMR2_bres(X) __asm bres 0x5437,X __endasm
#define RI_IOCMR2_bset(X) __asm bset 0x5437,X __endasm
#define RI_IOCMR2_bcpl(X) __asm bcpl 0x5437,X __endasm
#define RI_IOCMR2_clr() __asm clr 0x5437 __endasm

#define RI_IOCMR3 *(unsigned char*)0x5438
#define RI_IOCMR3_bres(X) __asm bres 0x5438,X __endasm
#define RI_IOCMR3_bset(X) __asm bset 0x5438,X __endasm
#define RI_IOCMR3_bcpl(X) __asm bcpl 0x5438,X __endasm
#define RI_IOCMR3_clr() __asm clr 0x5438 __endasm

#define RI_IOSR1 *(unsigned char*)0x5439
#define RI_IOSR1_bres(X) __asm bres 0x5439,X __endasm
#define RI_IOSR1_bset(X) __asm bset 0x5439,X __endasm
#define RI_IOSR1_bcpl(X) __asm bcpl 0x5439,X __endasm
#define RI_IOSR1_clr() __asm clr 0x5439 __endasm

#define RI_IOSR2 *(unsigned char*)0x543A
#define RI_IOSR2_bres(X) __asm bres 0x543A,X __endasm
#define RI_IOSR2_bset(X) __asm bset 0x543A,X __endasm
#define RI_IOSR2_bcpl(X) __asm bcpl 0x543A,X __endasm
#define RI_IOSR2_clr() __asm clr 0x543A __endasm

#define RI_IOSR3 *(unsigned char*)0x543B
#define RI_IOSR3_bres(X) __asm bres 0x543B,X __endasm
#define RI_IOSR3_bset(X) __asm bset 0x543B,X __endasm
#define RI_IOSR3_bcpl(X) __asm bcpl 0x543B,X __endasm
#define RI_IOSR3_clr() __asm clr 0x543B __endasm

#define RI_IOGCR *(unsigned char*)0x543C
#define RI_IOGCR_bres(X) __asm bres 0x543C,X __endasm
#define RI_IOGCR_bset(X) __asm bset 0x543C,X __endasm
#define RI_IOGCR_bcpl(X) __asm bcpl 0x543C,X __endasm
#define RI_IOGCR_clr() __asm clr 0x543C __endasm

#define RI_ASCR1 *(unsigned char*)0x543D
#define RI_ASCR1_bres(X) __asm bres 0x543D,X __endasm
#define RI_ASCR1_bset(X) __asm bset 0x543D,X __endasm
#define RI_ASCR1_bcpl(X) __asm bcpl 0x543D,X __endasm
#define RI_ASCR1_clr() __asm clr 0x543D __endasm

#define RI_ASCR2 *(unsigned char*)0x543E
#define RI_ASCR2_bres(X) __asm bres 0x543E,X __endasm
#define RI_ASCR2_bset(X) __asm bset 0x543E,X __endasm
#define RI_ASCR2_bcpl(X) __asm bcpl 0x543E,X __endasm
#define RI_ASCR2_clr() __asm clr 0x543E __endasm

#define RI_RCR *(unsigned char*)0x543F
#define RI_RCR_bres(X) __asm bres 0x543F,X __endasm
#define RI_RCR_bset(X) __asm bset 0x543F,X __endasm
#define RI_RCR_bcpl(X) __asm bcpl 0x543F,X __endasm
#define RI_RCR_clr() __asm clr 0x543F __endasm

#define RI_CR *(unsigned char*)0x5450
#define RI_CR_bres(X) __asm bres 0x5450,X __endasm
#define RI_CR_bset(X) __asm bset 0x5450,X __endasm
#define RI_CR_bcpl(X) __asm bcpl 0x5450,X __endasm
#define RI_CR_clr() __asm clr 0x5450 __endasm

#define RI_IOMR1 *(unsigned char*)0x5451
#define RI_IOMR1_bres(X) __asm bres 0x5451,X __endasm
#define RI_IOMR1_bset(X) __asm bset 0x5451,X __endasm
#define RI_IOMR1_bcpl(X) __asm bcpl 0x5451,X __endasm
#define RI_IOMR1_clr() __asm clr 0x5451 __endasm

#define RI_IOMR2 *(unsigned char*)0x5452
#define RI_IOMR2_bres(X) __asm bres 0x5452,X __endasm
#define RI_IOMR2_bset(X) __asm bset 0x5452,X __endasm
#define RI_IOMR2_bcpl(X) __asm bcpl 0x5452,X __endasm
#define RI_IOMR2_clr() __asm clr 0x5452 __endasm

#define RI_IOMR3 *(unsigned char*)0x5453
#define RI_IOMR3_bres(X) __asm bres 0x5453,X __endasm
#define RI_IOMR3_bset(X) __asm bset 0x5453,X __endasm
#define RI_IOMR3_bcpl(X) __asm bcpl 0x5453,X __endasm
#define RI_IOMR3_clr() __asm clr 0x5453 __endasm

#define RI_IOMR4 *(unsigned char*)0x5454
#define RI_IOMR4_bres(X) __asm bres 0x5454,X __endasm
#define RI_IOMR4_bset(X) __asm bset 0x5454,X __endasm
#define RI_IOMR4_bcpl(X) __asm bcpl 0x5454,X __endasm
#define RI_IOMR4_clr() __asm clr 0x5454 __endasm

#define RI_IOIR4 *(unsigned char*)0x5455
#define RI_IOIR4_bres(X) __asm bres 0x5455,X __endasm
#define RI_IOIR4_bset(X) __asm bset 0x5455,X __endasm
#define RI_IOIR4_bcpl(X) __asm bcpl 0x5455,X __endasm
#define RI_IOIR4_clr() __asm clr 0x5455 __endasm

#define RI_IOCMR4 *(unsigned char*)0x5456
#define RI_IOCMR4_bres(X) __asm bres 0x5456,X __endasm
#define RI_IOCMR4_bset(X) __asm bset 0x5456,X __endasm
#define RI_IOCMR4_bcpl(X) __asm bcpl 0x5456,X __endasm
#define RI_IOCMR4_clr() __asm clr 0x5456 __endasm

#define RI_IOSR4 *(unsigned char*)0x5457
#define RI_IOSR4_bres(X) __asm bres 0x5457,X __endasm
#define RI_IOSR4_bset(X) __asm bset 0x5457,X __endasm
#define RI_IOSR4_bcpl(X) __asm bcpl 0x5457,X __endasm
#define RI_IOSR4_clr() __asm clr 0x5457 __endasm

#define COMP_CSR1 *(unsigned char*)0x5440
#define COMP_CSR1_bres(X) __asm bres 0x5440,X __endasm
#define COMP_CSR1_bset(X) __asm bset 0x5440,X __endasm
#define COMP_CSR1_bcpl(X) __asm bcpl 0x5440,X __endasm
#define COMP_CSR1_clr() __asm clr 0x5440 __endasm

#define COMP_CSR2 *(unsigned char*)0x5441
#define COMP_CSR2_bres(X) __asm bres 0x5441,X __endasm
#define COMP_CSR2_bset(X) __asm bset 0x5441,X __endasm
#define COMP_CSR2_bcpl(X) __asm bcpl 0x5441,X __endasm
#define COMP_CSR2_clr() __asm clr 0x5441 __endasm

#define COMP_CSR3 *(unsigned char*)0x5442
#define COMP_CSR3_bres(X) __asm bres 0x5442,X __endasm
#define COMP_CSR3_bset(X) __asm bset 0x5442,X __endasm
#define COMP_CSR3_bcpl(X) __asm bcpl 0x5442,X __endasm
#define COMP_CSR3_clr() __asm clr 0x5442 __endasm

#define COMP_CSR4 *(unsigned char*)0x5443
#define COMP_CSR4_bres(X) __asm bres 0x5443,X __endasm
#define COMP_CSR4_bset(X) __asm bset 0x5443,X __endasm
#define COMP_CSR4_bcpl(X) __asm bcpl 0x5443,X __endasm
#define COMP_CSR4_clr() __asm clr 0x5443 __endasm

#define COMP_CSR5 *(unsigned char*)0x5444
#define COMP_CSR5_bres(X) __asm bres 0x5444,X __endasm
#define COMP_CSR5_bset(X) __asm bset 0x5444,X __endasm
#define COMP_CSR5_bcpl(X) __asm bcpl 0x5444,X __endasm
#define COMP_CSR5_clr() __asm clr 0x5444 __endasm

#define ITC_ISPR1 *(unsigned char*)0x7F70
#define ITC_ISPR1_bres(X) __asm bres 0x7F70,X __endasm
#define ITC_ISPR1_bset(X) __asm bset 0x7F70,X __endasm
#define ITC_ISPR1_bcpl(X) __asm bcpl 0x7F70,X __endasm
#define ITC_ISPR1_clr() __asm clr 0x7F70 __endasm

#define ITC_ISPR2 *(unsigned char*)0x7F71
#define ITC_ISPR2_bres(X) __asm bres 0x7F71,X __endasm
#define ITC_ISPR2_bset(X) __asm bset 0x7F71,X __endasm
#define ITC_ISPR2_bcpl(X) __asm bcpl 0x7F71,X __endasm
#define ITC_ISPR2_clr() __asm clr 0x7F71 __endasm

#define ITC_ISPR3 *(unsigned char*)0x7F72
#define ITC_ISPR3_bres(X) __asm bres 0x7F72,X __endasm
#define ITC_ISPR3_bset(X) __asm bset 0x7F72,X __endasm
#define ITC_ISPR3_bcpl(X) __asm bcpl 0x7F72,X __endasm
#define ITC_ISPR3_clr() __asm clr 0x7F72 __endasm

#define ITC_ISPR4 *(unsigned char*)0x7F73
#define ITC_ISPR4_bres(X) __asm bres 0x7F73,X __endasm
#define ITC_ISPR4_bset(X) __asm bset 0x7F73,X __endasm
#define ITC_ISPR4_bcpl(X) __asm bcpl 0x7F73,X __endasm
#define ITC_ISPR4_clr() __asm clr 0x7F73 __endasm

#define ITC_ISPR5 *(unsigned char*)0x7F74
#define ITC_ISPR5_bres(X) __asm bres 0x7F74,X __endasm
#define ITC_ISPR5_bset(X) __asm bset 0x7F74,X __endasm
#define ITC_ISPR5_bcpl(X) __asm bcpl 0x7F74,X __endasm
#define ITC_ISPR5_clr() __asm clr 0x7F74 __endasm

#define ITC_ISPR6 *(unsigned char*)0x7F75
#define ITC_ISPR6_bres(X) __asm bres 0x7F75,X __endasm
#define ITC_ISPR6_bset(X) __asm bset 0x7F75,X __endasm
#define ITC_ISPR6_bcpl(X) __asm bcpl 0x7F75,X __endasm
#define ITC_ISPR6_clr() __asm clr 0x7F75 __endasm

#define ITC_ISPR7 *(unsigned char*)0x7F76
#define ITC_ISPR7_bres(X) __asm bres 0x7F76,X __endasm
#define ITC_ISPR7_bset(X) __asm bset 0x7F76,X __endasm
#define ITC_ISPR7_bcpl(X) __asm bcpl 0x7F76,X __endasm
#define ITC_ISPR7_clr() __asm clr 0x7F76 __endasm

#define ITC_ISPR8 *(unsigned char*)0x7F77
#define ITC_ISPR8_bres(X) __asm bres 0x7F77,X __endasm
#define ITC_ISPR8_bset(X) __asm bset 0x7F77,X __endasm
#define ITC_ISPR8_bcpl(X) __asm bcpl 0x7F77,X __endasm
#define ITC_ISPR8_clr() __asm clr 0x7F77 __endasm

#define CFG_GCR *(unsigned char*)0x7F60
#define CFG_GCR_bres(X) __asm bres 0x7F60,X __endasm
#define CFG_GCR_bset(X) __asm bset 0x7F60,X __endasm
#define CFG_GCR_bcpl(X) __asm bcpl 0x7F60,X __endasm
#define CFG_GCR_clr() __asm clr 0x7F60 __endasm

/** @addtogroup RTC_Registers_Bits_Definition
  * @{
  */

/* Bits definition for RTC_TR1 register*/
#define RTC_TR1_ST               ((uint8_t)0x70)
#define RTC_TR1_SU               ((uint8_t)0x0F)

/* Bits definition for RTC_TR2 register*/
#define RTC_TR2_MNT              ((uint8_t)0x70)
#define RTC_TR2_MNU              ((uint8_t)0x0F)

/* Bits definition for RTC_TR3 register*/
#define RTC_TR3_PM               ((uint8_t)0x40)
#define RTC_TR3_HT               ((uint8_t)0x30)
#define RTC_TR3_HU               ((uint8_t)0x0F)

/* Bits definition for RTC_DR1 register*/
#define RTC_DR1_DT               ((uint8_t)0x30)
#define RTC_DR1_DU               ((uint8_t)0x0F)

/* Bits definition for RTC_DR2 register*/
#define RTC_DR2_WDU              ((uint8_t)0xE0)
#define RTC_DR2_MT               ((uint8_t)0x10)
#define RTC_DR2_MU               ((uint8_t)0x0F)

/* Bits definition for RTC_DR3 register*/
#define RTC_DR3_YT               ((uint8_t)0xF0)
#define RTC_DR3_YU               ((uint8_t)0x0F)

/* Bits definition for RTC_CR1 register*/
#define RTC_CR1_FMT              ((uint8_t)0x40)
#define RTC_CR1_RATIO            ((uint8_t)0x20)
#define RTC_CR1_WUCKSEL          ((uint8_t)0x07)
#define RTC_CR1_BYPSHAD           ((uint8_t)0x10)


/* Bits definition for RTC_CR2 register*/
#define RTC_CR2_WUTIE            ((uint8_t)0x40)
#define RTC_CR2_ALRAIE           ((uint8_t)0x10)
#define RTC_CR2_WUTE             ((uint8_t)0x04)
#define RTC_CR2_ALRAE            ((uint8_t)0x01)
#define RTC_CR2_ALRIE            ((uint8_t)0x20)



/* Bits definition for RTC_CR3 register*/
#define RTC_CR3_COE              ((uint8_t)0x80)
#define RTC_CR3_OSEL             ((uint8_t)0x60)
#define RTC_CR3_POL              ((uint8_t)0x10)
#define RTC_CR3_COSEL            ((uint8_t)0x08)
#define RTC_CR3_BCK              ((uint8_t)0x04)
#define RTC_CR3_SUB1H            ((uint8_t)0x02)
#define RTC_CR3_ADD1H            ((uint8_t)0x01)


/* Bits definition for RTC_ISR1 register*/
#define RTC_ISR1_INIT            ((uint8_t)0x80)
#define RTC_ISR1_INITF           ((uint8_t)0x40)
#define RTC_ISR1_RSF             ((uint8_t)0x20)
#define RTC_ISR1_INITS           ((uint8_t)0x10)
#define RTC_ISR1_SHPF            ((uint8_t)0x08)
#define RTC_ISR1_WUTWF           ((uint8_t)0x04)
#define RTC_ISR1_RECALPF         ((uint8_t)0x02)
#define RTC_ISR1_ALRAWF          ((uint8_t)0x01)


/* Bits definition for RTC_ISR2 register*/
#define RTC_ISR2_WUTF            ((uint8_t)0x04)
#define RTC_ISR2_ALRAF           ((uint8_t)0x01)
#define RTC_ISR2_TAMP3F          ((uint8_t)0x80)
#define RTC_ISR2_TAMP2F          ((uint8_t)0x40)
#define RTC_ISR2_TAMP1F          ((uint8_t)0x20)

/* Bits definition for RTC_SHIFTRH register*/
#define RTC_SHIFTRH_ADD1S        ((uint8_t)0x80)
#define RTC_SHIFTRH_SUBFS        ((uint8_t)0x7F)

/* Bits definition for RTC_SHIFTRL register*/
#define RTC_SHIFTRL_SUBFS        ((uint8_t)0xFF)


/* Bits definition for RTC_ALRMAR1 register*/
#define RTC_ALRMAR1_MSK1         ((uint8_t)0x80)
#define RTC_ALRMAR1_ST           ((uint8_t)0x70)
#define RTC_ALRMAR1_SU           ((uint8_t)0x0F)

/* Bits definition for RTC_ALRMAR2 register*/
#define RTC_ALRMAR2_MSK2         ((uint8_t)0x80)
#define RTC_ALRMAR2_MNT          ((uint8_t)0x70)
#define RTC_ALRMAR2_MNU          ((uint8_t)0x0F)

/* Bits definition for RTC_ALRMAR3 register*/
#define RTC_ALRMAR3_MSK3         ((uint8_t)0x80)
#define RTC_ALRMAR3_PM           ((uint8_t)0x40)
#define RTC_ALRMAR3_HT           ((uint8_t)0x30)
#define RTC_ALRMAR3_HU           ((uint8_t)0x0F)

/* Bits definition for RTC_ALRMAR4 register*/
#define RTC_ALRMAR4_MSK4         ((uint8_t)0x80)
#define RTC_ALRMAR4_WDSEL        ((uint8_t)0x40)
#define RTC_ALRMAR4_DT           ((uint8_t)0x30)
#define RTC_ALRMAR4_DU           ((uint8_t)0x0F)

/* Bits definition for RTC_ALRMASSRH register*/
#define RTC_ALRMASSRH_ALSS         ((uint8_t)0x7F)

/* Bits definition for RTC_ALRMASSRL register*/
#define RTC_ALRMASSRL_ALSS         ((uint8_t)0xFF)

/* Bits definition for RTC_ALRMASSMSKR register*/
#define RTC_ALRMASSMSKR_MASKSS   ((uint8_t)0x1F)


/* Bits definition for RTC_CALRH register*/
#define RTC_CALRH_CALP          ((uint8_t)0x80)
#define RTC_CALRH_CALW8         ((uint8_t)0x40)
#define RTC_CALRH_CALW16        ((uint8_t)0x20)
#define RTC_CALRH_CALWx         ((uint8_t)0x60)
#define RTC_CALRH_CALM          ((uint8_t)0x01)

/* Bits definition for RTC_CALRL register*/
#define RTC_CALRL_CALM          ((uint8_t)0xFF)

/* Bits definition for RTC_TCR1 register*/
#define RTC_TCR1_TAMP3LEVEL     ((uint8_t)0x40)
#define RTC_TCR1_TAMP3E         ((uint8_t)0x20)
#define RTC_TCR1_TAMP2LEVEL     ((uint8_t)0x10)
#define RTC_TCR1_TAMP2E         ((uint8_t)0x08)
#define RTC_TCR1_TAMP1LEVEL     ((uint8_t)0x04)
#define RTC_TCR1_TAMP1E         ((uint8_t)0x02)
#define RTC_TCR1_TAMPIE         ((uint8_t)0x01)

/* Bits definition for RTC_TCR2 register*/
#define RTC_TCR2_TAMPPUDIS         ((uint8_t)0x80)
#define RTC_TCR2_TAMPPRCH          ((uint8_t)0x60)
#define RTC_TCR2_TAMPFLT           ((uint8_t)0x18)
#define RTC_TCR2_TAMPFREQ          ((uint8_t)0x07)


/*RTC special defines */
#define RTC_WPR_EnableKey        ((uint8_t)0xFF)
#define RTC_WPR_DisableKey1      ((uint8_t)0xCA)
#define RTC_WPR_DisableKey2      ((uint8_t)0x53)

/**
  * @}
  */

/** @addtogroup CSSLSE_Registers_Bits_Definition
  * @{
  */

/* Bits definition for CSSLSE_CSR register*/
#define CSSLSE_CSR_SWITCHF            ((uint8_t)0x10)
#define CSSLSE_CSR_CSSF               ((uint8_t)0x08)
#define CSSLSE_CSR_CSSIE              ((uint8_t)0x04)
#define CSSLSE_CSR_SWITCHEN           ((uint8_t)0x02)
#define CSSLSE_CSR_CSSEN              ((uint8_t)0x01)

/**
  * @}
  */

/** @addtogroup BEEP_Registers_Bits_Definition
  * @{
  */

#define BEEP_CSR1_MSR     ((uint8_t)0x01) /*!< Measurement enable mask */

#define BEEP_CSR2_BEEPSEL ((uint8_t)0xC0) /*!< Beeper frequency selection mask */
#define BEEP_CSR2_BEEPEN  ((uint8_t)0x20) /*!< Beeper enable mask */
#define BEEP_CSR2_BEEPDIV ((uint8_t)0x1F) /*!< Beeper Divider prescalar mask */

/**
  * @}
  */

/** @addtogroup CFG_Registers_Bits_Definition
  * @{
  */

#define CFG_GCR_SWD ((uint8_t)0x01) /*!< Swim disable bit mask */
#define CFG_GCR_AL  ((uint8_t)0x02) /*!< Activation Level bit mask */

/**
  * @}
  */

/** @addtogroup SYSCFG_Registers_Bits_Definition
  * @{
  */

/* For DMA Channel Mapping*/
#define SYSCFG_RMPCR1_ADC1DMA_REMAP     ((uint8_t)0x03) /*!< ADC1 DMA channel remapping */
#define SYSCFG_RMPCR1_TIM4DMA_REMAP     ((uint8_t)0x0C) /*!< TIM4 DMA channel remapping */


/* For GPIO Reapping*/
#define SYSCFG_RMPCR1_USART1TR_REMAP    ((uint8_t)0x30) /*!< USART1_TX and USART1_RX remapping */
#define SYSCFG_RMPCR1_USART1CK_REMAP    ((uint8_t)0x40) /*!< USART1_CK remapping */
#define SYSCFG_RMPCR1_SPI1_REMAP        ((uint8_t)0x80) /*!< SPI1 remapping */

#define SYSCFG_RMPCR2_ADC1TRIG_REMAP    ((uint8_t)0x01) /*!< ADC1 External Trigger remap */
#define SYSCFG_RMPCR2_TIM2TRIG_REMAP    ((uint8_t)0x02) /*!< TIM2 Trigger remap */
#define SYSCFG_RMPCR2_TIM3TRIG_REMAP1   ((uint8_t)0x04) /*!< TIM3 Trigger remap 1 */
#define SYSCFG_RMPCR2_TIM2TRIG_LSE      ((uint8_t)0x08) /*!< TIM2 Trigger remap to LSE */
#define SYSCFG_RMPCR2_TIM3TRIG_LSE      ((uint8_t)0x10) /*!< TIM3 Trigger remap to LSE */
#define SYSCFG_RMPCR2_SPI2_REMAP        ((uint8_t)0x20) /*!< SPI2 remapping */
#define SYSCFG_RMPCR2_TIM3TRIG_REMAP2   ((uint8_t)0x40) /*!< TIM3 Trigger remap 2 */
#define SYSCFG_RMPCR2_TIM23BKIN_REMAP   ((uint8_t)0x80) /*!< TIM2 & TIM3 Break input remap */

#define SYSCFG_RMPCR3_SPI1_REMAP        ((uint8_t)0x01) /*!< SPI1 remapping */
#define SYSCFG_RMPCR3_USART3TR_REMAP    ((uint8_t)0x02) /*!< USART3_TX and USART3_RX remapping */
#define SYSCFG_RMPCR3_USART3CK_REMAP    ((uint8_t)0x04) /*!< USART3_CK remapping */
#define SYSCFG_RMPCR3_TIM3CH1_REMAP     ((uint8_t)0x08) /*!< TIM3 channel 1 remapping */
#define SYSCFG_RMPCR3_TIM3CH2_REMAP     ((uint8_t)0x10) /*!< TIM3 channel 2 remapping */
#define SYSCFG_RMPCR3_CCO_REMAP         ((uint8_t)0x20) /*!< CCO remapping */

/**
  * @}
  */

/** @addtogroup CLK_Registers_Bits_Definition
  * @{
  */

#define CLK_CKDIVR_CKM            ((uint8_t)0x07) /*!< System clock prescaler mask */

#define CLK_CRTCR_RTCDIV          ((uint8_t)0xE0) /*!< RTC clock prescaler  mask*/
#define CLK_CRTCR_RTCSEL          ((uint8_t)0x1E) /*!< RTC clock output selection  mask */
#define CLK_CRTCR_RTCSWBSY        ((uint8_t)0x01) /*!< RTC clock switch busy */

#define CLK_ICKCR_BEEPAHALT       ((uint8_t)0x40) /*!< BEEP clock Active Halt/Halt mode */
#define CLK_ICKCR_FHWU            ((uint8_t)0x20) /*!< Fast Wake-up from Active Halt/Halt mode */
#define CLK_ICKCR_SAHALT          ((uint8_t)0x10) /*!< Slow Active-halt mode */
#define CLK_ICKCR_LSIRDY          ((uint8_t)0x08) /*!< Low speed internal RC oscillator ready */
#define CLK_ICKCR_LSION           ((uint8_t)0x04) /*!< Low speed internal RC oscillator enable */
#define CLK_ICKCR_HSIRDY          ((uint8_t)0x02) /*!< High speed internal RC oscillator ready */
#define CLK_ICKCR_HSION           ((uint8_t)0x01) /*!< High speed internal RC oscillator enable */

#define CLK_PCKENR1_TIM2          ((uint8_t)0x01) /*!< Timer 2 clock enable */
#define CLK_PCKENR1_TIM3          ((uint8_t)0x02) /*!< Timer 3 clock enable */
#define CLK_PCKENR1_TIM4          ((uint8_t)0x04) /*!< Timer 4 clock enable */
#define CLK_PCKENR1_I2C1          ((uint8_t)0x08) /*!< I2C1 clock enable */
#define CLK_PCKENR1_SPI1          ((uint8_t)0x10) /*!< SPI1 clock enable */
#define CLK_PCKENR1_USART1        ((uint8_t)0x20) /*!< USART1 clock enable */
#define CLK_PCKENR1_BEEP          ((uint8_t)0x40) /*!< BEEP clock enable */
#define CLK_PCKENR1_DAC           ((uint8_t)0x80) /*!< DAC clock enable */

#define CLK_PCKENR2_ADC1          ((uint8_t)0x01) /*!< ADC1 clock enable */
#define CLK_PCKENR2_TIM1          ((uint8_t)0x02) /*!< TIM1 clock enable */
#define CLK_PCKENR2_RTC           ((uint8_t)0x04) /*!< RTC clock enable */
#define CLK_PCKENR2_LCD           ((uint8_t)0x08) /*!< LCD clock enable */
#define CLK_PCKENR2_DMA1          ((uint8_t)0x10) /*!< DMA1 clock enable */
#define CLK_PCKENR2_COMP          ((uint8_t)0x20) /*!< Comparator clock enable */
#define CLK_PCKENR2_BOOTROM       ((uint8_t)0x80) /*!< Boot ROM clock enable */

#define CLK_PCKENR3_AES           ((uint8_t)0x01) /*!< AES clock enable */
#define CLK_PCKENR3_TIM5          ((uint8_t)0x02) /*!< Timer 5 clock enable */
#define CLK_PCKENR3_SPI2          ((uint8_t)0x04) /*!< SPI2 clock enable */
#define CLK_PCKENR3_UASRT2        ((uint8_t)0x08) /*!< USART2 clock enable */
#define CLK_PCKENR3_USART3        ((uint8_t)0x10) /*!< USART3 clock enable */

#define CLK_CCOR_CCODIV           ((uint8_t)0xE0) /*!< Configurable Clock output prescaler */
#define CLK_CCOR_CCOSEL           ((uint8_t)0x1E) /*!< Configurable clock output selection */
#define CLK_CCOR_CCOSWBSY         ((uint8_t)0x01) /*!< Configurable clock output switch busy  flag */

#define CLK_ECKCR_LSEBYP          ((uint8_t)0x20) /*!< Low speed external clock bypass */
#define CLK_ECKCR_HSEBYP          ((uint8_t)0x10) /*!< High speed external clock bypass */
#define CLK_ECKCR_LSERDY          ((uint8_t)0x08) /*!< Low speed external crystal oscillator ready */
#define CLK_ECKCR_LSEON           ((uint8_t)0x04) /*!< Low speed external crystal oscillator enable */
#define CLK_ECKCR_HSERDY          ((uint8_t)0x02) /*!< High speed external crystal oscillator ready */
#define CLK_ECKCR_HSEON           ((uint8_t)0x01) /*!< High speed external crystal oscillator enable */

#define CLK_SCSR_CKM              ((uint8_t)0x0F) /*!< System clock status bits */

#define CLK_SWR_SWI               ((uint8_t)0x0F) /*!< System clock selection bits */

#define CLK_SWCR_SWIF             ((uint8_t)0x08) /*!< Clock switch interrupt flag */
#define CLK_SWCR_SWIEN            ((uint8_t)0x04) /*!< Clock switch interrupt enable */
#define CLK_SWCR_SWEN             ((uint8_t)0x02) /*!< Switch start/stop */
#define CLK_SWCR_SWBSY            ((uint8_t)0x01) /*!< Switch busy */

#define CLK_CSSR_CSSDGON          ((uint8_t)0x10) /*!< Clock security sytem deglitcher system */
#define CLK_CSSR_CSSD             ((uint8_t)0x08) /*!< Clock security sytem detection */
#define CLK_CSSR_CSSDIE           ((uint8_t)0x04) /*!< Clock security system detection interrupt enable */
#define CLK_CSSR_AUX              ((uint8_t)0x02) /*!< Auxiliary oscillator connected to master clock */
#define CLK_CSSR_CSSEN            ((uint8_t)0x01) /*!< Clock security system enable */

#define CLK_CBEEPR_CLKBEEPSEL     ((uint8_t)0x06) /*!< Configurable BEEP clock source selection */
#define CLK_CBEEPR_BEEPSWBSY      ((uint8_t)0x01) /*!< BEEP clock busy in switch  */

#define CLK_HSICALR_HSICAL        ((uint8_t)0xFF) /*!<  Copy of otpion byte trimming HSI oscillator */

#define CLK_HSITRIMR_HSITRIM      ((uint8_t)0xFF) /*!< High speed internal oscillator trimmer */

#define CLK_HSIUNLCKR_HSIUNLCK    ((uint8_t)0xFF) /*!< High speed internal oscillator trimmer unlock  */

#define CLK_REGCSR_EEREADY        ((uint8_t)0x80) /*!< Flash program memory and Data EEPROM ready */
#define CLK_REGCSR_EEBUSY         ((uint8_t)0x40) /*!< Flash program memory and Data EEPROM busy */
#define CLK_REGCSR_LSEPD          ((uint8_t)0x20) /*!< LSE power-down */
#define CLK_REGCSR_HSEPD          ((uint8_t)0x10) /*!< HSE power-down */
#define CLK_REGCSR_LSIPD          ((uint8_t)0x08) /*!< LSI power-down */
#define CLK_REGCSR_HSIPD          ((uint8_t)0x04) /*!< HSI power-down */
#define CLK_REGCSR_REGOFF         ((uint8_t)0x02) /*!< Main regulator OFF */
#define CLK_REGCSR_REGREADY       ((uint8_t)0x01) /*!< Main regulator ready */

/**
  * @}
  */

/** @addtogroup COMP_Registers_Bits_Definition
  * @{
  */

/* CSR1 */
#define COMP_CSR1_IE1        ((uint8_t)0x20) /*!<  Comparator 1 Interrupt Enable Mask. */
#define COMP_CSR1_EF1        ((uint8_t)0x10) /*!<  Comparator 1 Event Flag Mask. */
#define COMP_CSR1_CMP1OUT    ((uint8_t)0x08) /*!<  Comparator 1 Ouptput Mask. */
#define COMP_CSR1_STE        ((uint8_t)0x04) /*!<  Schmitt trigger enable Mask. */
#define COMP_CSR1_CMP1       ((uint8_t)0x03) /*!<  Comparator 1 Configuration Mask. */

/* CSR2 */
#define COMP_CSR2_IE2        ((uint8_t)0x20) /*!<  Comparator 2 Interrupt Enable Mask. */
#define COMP_CSR2_EF2        ((uint8_t)0x10) /*!<  Comparator 2 Event Flag Mask. */
#define COMP_CSR2_CMP2OUT    ((uint8_t)0x08) /*!<  Comparator 2 Ouptput Mask. */
#define COMP_CSR2_SPEED      ((uint8_t)0x04) /*!<  Comparator 2 speed modeMask. */
#define COMP_CSR2_CMP2       ((uint8_t)0x03) /*!<  Comparator 2 Configuration Mask. */

/* CSR3 */
#define COMP_CSR3_OUTSEL     ((uint8_t)0xC0) /*!<  Comparator 2 output selection Mask. */
#define COMP_CSR3_INSEL      ((uint8_t)0x38) /*!<  Inversion input selection Mask. */
#define COMP_CSR3_VREFEN     ((uint8_t)0x04) /*!<  Internal reference voltage Enable Mask. */
#define COMP_CSR3_WNDWE      ((uint8_t)0x02) /*!<  Window Mode Enable Mask. */
#define COMP_CSR3_VREFOUTEN  ((uint8_t)0x01) /*!<  VREF Output Enable Mask. */

/* CSR4 */
#define COMP_CSR4_NINVTRIG   ((uint8_t)0x38) /*!<  COMP2 non-inverting input Mask. */
#define COMP_CSR4_INVTRIG    ((uint8_t)0x07) /*!<  COMP2 inverting input Mask. */

/* CSR5 */
#define COMP_CSR5_DACTRIG    ((uint8_t)0x38) /*!<  DAC outputs Mask. */
#define COMP_CSR5_VREFTRIG   ((uint8_t)0x07) /*!<  VREF outputs Mask. */

/**
  * @}
  */

/** @addtogroup EXTI_Registers_Bits_Definition
  * @{
  */
/* CR1 */
#define EXTI_CR1_P3IS      ((uint8_t)0xC0) /*!< EXTI Pin 3 external interrupt sensitivity bit Mask */
#define EXTI_CR1_P2IS      ((uint8_t)0x30) /*!< EXTI Pin 2 external interrupt sensitivity bit Mask */
#define EXTI_CR1_P1IS      ((uint8_t)0x0C) /*!< EXTI Pin 1  external interrupt sensitivity bit Mask */
#define EXTI_CR1_P0IS      ((uint8_t)0x03) /*!< EXTI Pin 0 external interrupt sensitivity bit Mask */

/* CR2 */
#define EXTI_CR2_P7IS      ((uint8_t)0xC0) /*!< EXTI Pin 7 external interrupt sensitivity bit Mask */
#define EXTI_CR2_P6IS      ((uint8_t)0x30) /*!< EXTI Pin 6 external interrupt sensitivity bit Mask */
#define EXTI_CR2_P5IS      ((uint8_t)0x0C) /*!< EXTI Pin 5  external interrupt sensitivity bit Mask */
#define EXTI_CR2_P4IS      ((uint8_t)0x03) /*!< EXTI Pin 4 external interrupt sensitivity bit Mask */

/* CR3 */
#define EXTI_CR3_PBIS      ((uint8_t)0x03) /*!< EXTI PORTB external interrupt sensitivity bits Mask */
#define EXTI_CR3_PDIS      ((uint8_t)0x0C) /*!< EXTI PORTD external interrupt sensitivity bits Mask */
#define EXTI_CR3_PEIS      ((uint8_t)0x30) /*!< EXTI PORTE external interrupt sensitivity bits Mask */
#define EXTI_CR3_PFIS      ((uint8_t)0xC0) /*!< EXTI PORTF external interrupt sensitivity bits Mask */

/* CONF1 */
#define EXTI_CONF1_PBLIS   ((uint8_t)0x01) /*!< EXTI PORTB low interrupt selector bit Mask */
#define EXTI_CONF1_PBHIS   ((uint8_t)0x02) /*!< EXTI PORTB high interrupt selector bit Mask */
#define EXTI_CONF1_PDLIS   ((uint8_t)0x04) /*!< EXTI PORTD low interrupt selector bit Mask */
#define EXTI_CONF1_PDHIS   ((uint8_t)0x08) /*!< EXTI PORTD high interrupt selector bit Mask */
#define EXTI_CONF1_PELIS   ((uint8_t)0x10) /*!< EXTI PORTE low interrupt selector bit Mask */
#define EXTI_CONF1_PEHIS   ((uint8_t)0x20) /*!< EXTI PORTE high interrupt selector bit Mask */
#define EXTI_CONF1_PFLIS   ((uint8_t)0x40) /*!< EXTI PORTF low interrupt selector bit Mask */
#define EXTI_CONF1_PFES    ((uint8_t)0x80) /*!< EXTI PORTF or PORTE interrupt selector bit Mask */

/* CR4 */
#define EXTI_CR4_PGIS      ((uint8_t)0x03) /*!< EXTI PORTG external interrupt sensitivity bits Mask */
#define EXTI_CR4_PHIS      ((uint8_t)0x0C) /*!< EXTI PORTH external interrupt sensitivity bits Mask */

/* CONF2 */
#define EXTI_CONF2_PFHIS   ((uint8_t)0x01) /*!< EXTI PORTF high interrupt selector bit Mask */
#define EXTI_CONF2_PGLIS   ((uint8_t)0x02) /*!< EXTI PORTG low interrupt selector bit Mask */
#define EXTI_CONF2_PGHIS   ((uint8_t)0x04) /*!< EXTI PORTG high interrupt selector bit Mask */
#define EXTI_CONF2_PHLIS   ((uint8_t)0x08) /*!< EXTI PORTH low interrupt selector bit Mask */
#define EXTI_CONF2_PHHIS   ((uint8_t)0x10) /*!< EXTI PORTH high interrupt selector bit Mask */
#define EXTI_CONF2_PGBS    ((uint8_t)0x20) /*!< EXTI PORTB or PORTG interrupt selector bit Mask */
#define EXTI_CONF2_PHDS    ((uint8_t)0x40) /*!< EXTI PORTD or PORTH interrupt selector bit Mask */

/**
  * @}
  */

/** @addtogroup FLASH_Registers_Bits_Definition
  * @{
  */
#define FLASH_CR1_EEPM           ((uint8_t)0x08) /*!< Flash low power selection during Run and Low power run mode Mask */
#define FLASH_CR1_WAITM          ((uint8_t)0x04) /*!< Flash low power selection during Wait and Low power wait mode Mask */
#define FLASH_CR1_IE             ((uint8_t)0x02) /*!< Flash Interrupt enable Mask */
#define FLASH_CR1_FIX            ((uint8_t)0x01) /*!< Fix programming time Mask */

#define FLASH_CR2_OPT            ((uint8_t)0x80) /*!< Enable write access to option bytes*/
#define FLASH_CR2_WPRG           ((uint8_t)0x40) /*!< Word write once Mask */
#define FLASH_CR2_ERASE          ((uint8_t)0x20) /*!< Erase block Mask */
#define FLASH_CR2_FPRG           ((uint8_t)0x10) /*!< Fast programming mode Mask */
#define FLASH_CR2_PRG            ((uint8_t)0x01) /*!< Program block Mask */

#define FLASH_IAPSR_HVOFF        ((uint8_t)0x40) /*!< End of high voltage flag Mask */
#define FLASH_IAPSR_DUL          ((uint8_t)0x08) /*!< Data EEPROM unlocked flag Mask */
#define FLASH_IAPSR_EOP          ((uint8_t)0x04) /*!< End of operation flag Mask */
#define FLASH_IAPSR_PUL          ((uint8_t)0x02) /*!< Program memory unlocked flag Mask */
#define FLASH_IAPSR_WR_PG_DIS    ((uint8_t)0x01) /*!< Write attempted to protected page Mask */

#define FLASH_PUKR_PUK           ((uint8_t)0xFF) /*!< Flash Program memory unprotection mask */

#define FLASH_DUKR_DUK           ((uint8_t)0xFF) /*!< Data EEPROM unprotection mask */


/**
  * @}
  */

/** @addtogroup I2C_Registers_Bits_Definition
  * @{
  */

#define I2C_CR1_NOSTRETCH   ((uint8_t)0x80) /*!< Clock Stretching Disable (Slave mode) */
#define I2C_CR1_ENGC        ((uint8_t)0x40) /*!< General Call Enable */
#define I2C_CR1_ENPEC       ((uint8_t)0x20) /*!< PEC Enable */
#define I2C_CR1_ARP         ((uint8_t)0x10) /*!< ARP Enable */
#define I2C_CR1_SMBTYPE     ((uint8_t)0x08) /*!< SMBus type */
#define I2C_CR1_SMBUS       ((uint8_t)0x02) /*!< SMBus mode */
#define I2C_CR1_PE          ((uint8_t)0x01) /*!< Peripheral Enable */

#define I2C_CR2_SWRST       ((uint8_t)0x80) /*!< Software Reset */
#define I2C_CR2_ALERT       ((uint8_t)0x20) /*!< SMBus Alert*/
#define I2C_CR2_PEC         ((uint8_t)0x10) /*!< Packet Error Checking */
#define I2C_CR2_POS         ((uint8_t)0x08) /*!< Acknowledge */
#define I2C_CR2_ACK         ((uint8_t)0x04) /*!< Acknowledge Enable */
#define I2C_CR2_STOP        ((uint8_t)0x02) /*!< Stop Generation */
#define I2C_CR2_START       ((uint8_t)0x01) /*!< Start Generation */

#define I2C_FREQR_FREQ      ((uint8_t)0x3F) /*!< Peripheral Clock Frequency */

#define I2C_OARL_ADD        ((uint8_t)0xFE) /*!< Interface Address bits [7..1] */
#define I2C_OARL_ADD0       ((uint8_t)0x01) /*!< Interface Address bit0 */

#define I2C_OARH_ADDMODE    ((uint8_t)0x80) /*!< Addressing Mode (Slave mode) */
#define I2C_OARH_ADDCONF    ((uint8_t)0x40) /*!< Address mode configuration */
#define I2C_OARH_ADD        ((uint8_t)0x06) /*!< Interface Address bits [9..8] */

#define I2C_OAR2_ADD2       ((uint8_t)0xFE) /*!< Interface Address bits [7..1] */
#define I2C_OAR2_ENDUAL     ((uint8_t)0x01) /*!< Dual addressing mode enable */

#define I2C_DR_DR           ((uint8_t)0xFF) /*!< Data Register */

#define I2C_SR1_TXE         ((uint8_t)0x80) /*!< Data Register Empty (transmitters) */
#define I2C_SR1_RXNE        ((uint8_t)0x40) /*!< Data Register not Empty (receivers) */
#define I2C_SR1_STOPF       ((uint8_t)0x10) /*!< Stop detection (Slave mode) */
#define I2C_SR1_ADD10       ((uint8_t)0x08) /*!< 10-bit header sent (Master mode) */
#define I2C_SR1_BTF         ((uint8_t)0x04) /*!< Byte Transfer Finished */
#define I2C_SR1_ADDR        ((uint8_t)0x02) /*!< Address sent (master mode)/matched (slave mode) */
#define I2C_SR1_SB          ((uint8_t)0x01) /*!< Start Bit (Master mode) */

#define I2C_SR2_SMBALERT    ((uint8_t)0x80) /*!< SMBus Alert */
#define I2C_SR2_TIMEOUT     ((uint8_t)0x40) /*!< Time out or TLow error */
#define I2C_SR2_WUFH        ((uint8_t)0x20) /*!< Wake-up from Halt */
#define I2C_SR2_PECERR      ((uint8_t)0x10) /*!< PEC error in reception */
#define I2C_SR2_OVR         ((uint8_t)0x08) /*!< Overrun/Underrun */
#define I2C_SR2_AF          ((uint8_t)0x04) /*!< Acknowledge Failure */
#define I2C_SR2_ARLO        ((uint8_t)0x02) /*!< Arbitration Lost (master mode) */
#define I2C_SR2_BERR        ((uint8_t)0x01) /*!< Bus Error */

#define I2C_SR3_DUALF       ((uint8_t)0x80) /*!< Dual flag (Slave mode) */
#define I2C_SR3_SMBHOST     ((uint8_t)0x40) /*!< SMBus Host Header (Slave mode) */
#define I2C_SR3_SMBDEFAULT  ((uint8_t)0x20) /*!< SMBus Default Header (Slave mode) */
#define I2C_SR3_GENCALL     ((uint8_t)0x10) /*!< General Call Header (Slave mode) */
#define I2C_SR3_TRA         ((uint8_t)0x04) /*!< Transmitter/Receiver */
#define I2C_SR3_BUSY        ((uint8_t)0x02) /*!< Bus Busy */
#define I2C_SR3_MSL         ((uint8_t)0x01) /*!< Master/Slave */

#define I2C_ITR_LAST        ((uint8_t)0x10) /*!< DMA Last transfer */
#define I2C_ITR_DMAEN       ((uint8_t)0x08) /*!< DMA request Enable */
#define I2C_ITR_ITBUFEN     ((uint8_t)0x04) /*!< Buffer Interrupt Enable */
#define I2C_ITR_ITEVTEN     ((uint8_t)0x02) /*!< Event Interrupt Enable */
#define I2C_ITR_ITERREN     ((uint8_t)0x01) /*!< Error Interrupt Enable */

#define I2C_CCRL_CCR        ((uint8_t)0xFF) /*!< Clock Control Register (Master mode) */

#define I2C_CCRH_FS         ((uint8_t)0x80) /*!< Master Mode Selection */
#define I2C_CCRH_DUTY       ((uint8_t)0x40) /*!< Fast Mode Duty Cycle */
#define I2C_CCRH_CCR        ((uint8_t)0x0F) /*!< Clock Control Register in Fast/Standard mode (Master mode) bits [11..8] */

#define I2C_TRISER_TRISE    ((uint8_t)0x3F) /*!< Maximum Rise Time in Fast/Standard mode (Master mode) */

#define I2C_PECR_PEC        ((uint8_t)0xFF) /*!< Packet error checking */

/**
  * @}
  */

/** @addtogroup IRTIM_Registers_Bits_Definition
  * @{
  */
/* CR*/
#define IRTIM_CR_EN     ((uint8_t)0x01) /*!< IRTIM_OUT enable Mask. */
#define IRTIM_CR_HSEN   ((uint8_t)0x02) /*!< High sink open drain buffer enable Mask */

/**
  * @}
  */

/** @addtogroup WFE_Registers_Bits_Definition
  * @{
  */

#define WFE_CR1_EXTI_EV3      ((uint8_t)0x80)  /*!< External interrupt event 3 Mask */
#define WFE_CR1_EXTI_EV2      ((uint8_t)0x40)  /*!< External interrupt event 2 Mask */
#define WFE_CR1_EXTI_EV1      ((uint8_t)0x20)  /*!< External interrupt event 1 Mask */
#define WFE_CR1_EXTI_EV0      ((uint8_t)0x10)  /*!< External interrupt event 0 Mask */
#define WFE_CR1_TIM1_EV1      ((uint8_t)0x08)  /*!< TIM1 event 1 Mask */
#define WFE_CR1_TIM1_EV0      ((uint8_t)0x04)  /*!< TIM1 event 0 Mask */
#define WFE_CR1_TIM2_EV1      ((uint8_t)0x02)  /*!< TIM2 event 1 Mask */
#define WFE_CR1_TIM2_EV0      ((uint8_t)0x01)  /*!< TIM2 event 0 Mask */

#define WFE_CR2_ADC1_COMP_EV  ((uint8_t)0x80)  /*!< ADC / COMP event Mask*/
#define WFE_CR2_EXTI_EVEF     ((uint8_t)0x40)  /*!< External interrupt event on Port E or Port F Mask */
#define WFE_CR2_EXTI_EVDH     ((uint8_t)0x20)  /*!< External interrupt event on Port D or Port H Mask */
#define WFE_CR2_EXTI_EVBG     ((uint8_t)0x10)  /*!< External interrupt event on Port B or Port G Mask */
#define WFE_CR2_EXTI_EV7      ((uint8_t)0x08)  /*!< External interrupt event 7 Mask */
#define WFE_CR2_EXTI_EV6      ((uint8_t)0x04)  /*!< External interrupt event 6 Mask */
#define WFE_CR2_EXTI_EV5      ((uint8_t)0x02)  /*!< External interrupt event 5 Mask */
#define WFE_CR2_EXTI_EV4      ((uint8_t)0x01)  /*!< External interrupt event 4 Mask */

#define WFE_CR3_DMA1CH23_EV   ((uint8_t)0x80)  /*!< DMA1 channel 2 and 3 interrupt event Mask */
#define WFE_CR3_DMA1CH01_EV   ((uint8_t)0x40)  /*!< DMA1 channel 0 and 1 interrupt event Mask */
#define WFE_CR3_USART1_EV     ((uint8_t)0x20)  /*!< USART1 Rx and Tx interrupt event Mask */
#define WFE_CR3_I2C1_EV       ((uint8_t)0x10)  /*!< I2C1 Rx and Tx interrupt event Mask */
#define WFE_CR3_SPI1_EV       ((uint8_t)0x08)  /*!< SPI1 Rx and Tx interrupt event Mask */
#define WFE_CR3_TIM4_EV       ((uint8_t)0x04)  /*!< TIM4 event Mask */
#define WFE_CR3_TIM3_EV1      ((uint8_t)0x02)  /*!< TIM3 event 1 Mask */
#define WFE_CR3_TIM3_EV0      ((uint8_t)0x01)  /*!< TIM3 event 0 Mask */

#define WFE_CR4_AES_EV        ((uint8_t)0x40)  /*!< AES event Mask */
#define WFE_CR4_TIM5_EV1      ((uint8_t)0x20)  /*!< TIM5 event 1 Mask */
#define WFE_CR4_TIM5_EV0      ((uint8_t)0x10)  /*!< TIM5 event 0 Mask */
#define WFE_CR4_USART3_EV     ((uint8_t)0x08)  /*!< USART3 Rx and Tx interrupt event Mask */
#define WFE_CR4_USART2_EV     ((uint8_t)0x04)  /*!< USART2 Rx and Tx interrupt event Mask */
#define WFE_CR4_SPI2_EV       ((uint8_t)0x02)  /*!< SPI2 Rx and Tx interrupt event Mask */
#define WFE_CR4_RTC_CSS_EV    ((uint8_t)0x01)  /*!< RTC or CSS on LSE interrupt event Mask */


/**
  * @}
  */

/** @addtogroup RST_Registers_Bits_Definition
  * @{
  */
#define RST_SR_BORF           ((uint8_t)0x20) /*!< Brownout reset flag mask           */
#define RST_SR_WWDGF          ((uint8_t)0x10) /*!< Window Watchdog reset flag mask */
#define RST_SR_SWIMF          ((uint8_t)0x08) /*!< SWIM reset flag mask            */
#define RST_SR_ILLOPF         ((uint8_t)0x04) /*!< Illegal opcode reset flag mask    */
#define RST_SR_IWDGF          ((uint8_t)0x02) /*!< Independent Watchdog reset flag mask    */
#define RST_SR_PORF           ((uint8_t)0x01) /*!< Power On Reset (POR) flag mask    */

/**
  * @}
  */

/** @addtogroup PWR_Registers_Bits_Definition
  * @{
  */
#define PWR_CSR1_PVDOF          ((uint8_t)0x40) /*!< PVD output flag mask         */
#define PWR_CSR1_PVDIF          ((uint8_t)0x20) /*!< PVD interrupt flag mask */
#define PWR_CSR1_PVDIEN         ((uint8_t)0x10) /*!< PVD interrupt enable mask            */
#define PWR_CSR1_PLS            ((uint8_t)0x0E) /*!< PVD Level thresholds selector mask    */
#define PWR_CSR1_PVDE           ((uint8_t)0x01) /*!< Power Voltage Detector (PVD) enable mask */


#define PWR_CSR2_FWU            ((uint8_t)0x04) /*!< Fast wake up configuration mask */
#define PWR_CSR2_ULP            ((uint8_t)0x02) /*!< Ultra Low power configuration mask  */
#define PWR_CR2_VREFINTF        ((uint8_t)0x01) /*!< Internal reference voltage status flag mask  */
/**
  * @}
  */


/** @addtogroup RI_Registers_Bits_Definition
  * @{
  */
#define RI_ICR1_IC2CS          ((uint8_t)0x1F) /*!< TIM1 Input Capture 2 I/O selection mask */

#define RI_ICR2_IC3CS          ((uint8_t)0x1F) /*!< TIM1 Input Capture 3 I/O selection mask */

#define RI_IOIR1_CH1I          ((uint8_t)0x01) /*!< Channel 1 I/O pin input value */
#define RI_IOIR1_CH4I          ((uint8_t)0x02) /*!< Channel 4 I/O pin input value */
#define RI_IOIR1_CH7I          ((uint8_t)0x04) /*!< Channel 7 I/O pin input value */
#define RI_IOIR1_CH10I         ((uint8_t)0x08) /*!< Channel 10 I/O pin input value */
#define RI_IOIR1_CH13I         ((uint8_t)0x10) /*!< Channel 13 I/O pin input value */
#define RI_IOIR1_CH16I         ((uint8_t)0x20) /*!< Channel 16 I/O pin input value */
#define RI_IOIR1_CH19I         ((uint8_t)0x40) /*!< Channel 19 I/O pin input value */
#define RI_IOIR1_CH22I         ((uint8_t)0x80) /*!< Channel 22 I/O pin input value */

#define RI_IOIR2_CH2I          ((uint8_t)0x01) /*!< Channel 2 I/O pin input value */
#define RI_IOIR2_CH5I          ((uint8_t)0x02) /*!< Channel 5 I/O pin input value */
#define RI_IOIR2_CH8I          ((uint8_t)0x04) /*!< Channel 8 I/O pin input value */
#define RI_IOIR2_CH11I         ((uint8_t)0x08) /*!< Channel 11 I/O pin input value */
#define RI_IOIR2_CH14I         ((uint8_t)0x10) /*!< Channel 14 I/O pin input value */
#define RI_IOIR2_CH17I         ((uint8_t)0x20) /*!< Channel 17 I/O pin input value */
#define RI_IOIR2_CH20I         ((uint8_t)0x40) /*!< Channel 20 I/O pin input value */
#define RI_IOIR2_CH23I         ((uint8_t)0x80) /*!< Channel 23 I/O pin input value */

#define RI_IOIR3_CH3I          ((uint8_t)0x01) /*!< Channel 3 I/O pin input value */
#define RI_IOIR3_CH6I          ((uint8_t)0x02) /*!< Channel 6 I/O pin input value */
#define RI_IOIR3_CH9I          ((uint8_t)0x04) /*!< Channel 9 I/O pin input value */
#define RI_IOIR3_CH12I         ((uint8_t)0x08) /*!< Channel 12 I/O pin input value */
#define RI_IOIR3_CH15I         ((uint8_t)0x10) /*!< Channel 15 I/O pin input value */
#define RI_IOIR3_CH18I         ((uint8_t)0x20) /*!< Channel 18 I/O pin input value */
#define RI_IOIR3_CH21I         ((uint8_t)0x40) /*!< Channel 21 I/O pin input value */
#define RI_IOIR3_CH24I         ((uint8_t)0x80) /*!< Channel 24 I/O pin input value */

#define RI_IOCMR1_CH1M          ((uint8_t)0x01) /*!< Channel 1 I/O control mode */
#define RI_IOCMR1_CH4M          ((uint8_t)0x02) /*!< Channel 4 I/O control mode */
#define RI_IOCMR1_CH7M          ((uint8_t)0x04) /*!< Channel 7 I/O control mode */
#define RI_IOCMR1_CH10M         ((uint8_t)0x08) /*!< Channel 10 I/O control mode */
#define RI_IOCMR1_CH13M         ((uint8_t)0x10) /*!< Channel 13 I/O control mode */
#define RI_IOCMR1_CH16M         ((uint8_t)0x20) /*!< Channel 16 I/O control mode */
#define RI_IOCMR1_CH19M         ((uint8_t)0x40) /*!< Channel 19 I/O control mode */
#define RI_IOCMR1_CH22M         ((uint8_t)0x80) /*!< Channel 22 I/O control mode */

#define RI_IOCMR2_CH2M          ((uint8_t)0x01) /*!< Channel 2 I/O control mode */
#define RI_IOCMR2_CH5M          ((uint8_t)0x02) /*!< Channel 5 I/O control mode */
#define RI_IOCMR2_CH8M          ((uint8_t)0x04) /*!< Channel 8 I/O control mode */
#define RI_IOCMR2_CH11M         ((uint8_t)0x08) /*!< Channel 11 I/O control mode */
#define RI_IOCMR2_CH14M         ((uint8_t)0x10) /*!< Channel 14 I/O control mode */
#define RI_IOCMR2_CH17M         ((uint8_t)0x20) /*!< Channel 17 I/O control mode */
#define RI_IOCMR2_CH20M         ((uint8_t)0x40) /*!< Channel 20 I/O control mode */
#define RI_IOCMR2_CH23M         ((uint8_t)0x80) /*!< Channel 23 I/O control mode */

#define RI_IOCMR3_CH3M          ((uint8_t)0x01) /*!< Channel 3 I/O control mode */
#define RI_IOCMR3_CH6M          ((uint8_t)0x02) /*!< Channel 6 I/O control mode */
#define RI_IOCMR3_CH9M          ((uint8_t)0x04) /*!< Channel 9 I/O control mode */
#define RI_IOCMR3_CH12M         ((uint8_t)0x08) /*!< Channel 12 I/O control mode */
#define RI_IOCMR3_CH15M         ((uint8_t)0x10) /*!< Channel 15 I/O control mode */
#define RI_IOCMR3_CH18M         ((uint8_t)0x20) /*!< Channel 18 I/O control mode */
#define RI_IOCMR3_CH21M         ((uint8_t)0x40) /*!< Channel 21 I/O control mode */
#define RI_IOCMR3_CH24M         ((uint8_t)0x80) /*!< Channel 24 I/O control mode */

#define RI_IOSR1_CH1E          ((uint8_t)0x01) /*!< Channel 1 I/O switch control */
#define RI_IOSR1_CH4E          ((uint8_t)0x02) /*!< Channel 4 I/O switch control */
#define RI_IOSR1_CH7E          ((uint8_t)0x04) /*!< Channel 7 I/O switch control */
#define RI_IOSR1_CH10E         ((uint8_t)0x08) /*!< Channel 10 I/O switch control */
#define RI_IOSR1_CH13E         ((uint8_t)0x10) /*!< Channel 13 I/O switch control */
#define RI_IOSR1_CH16E         ((uint8_t)0x20) /*!< Channel 16 I/O switch control */
#define RI_IOSR1_CH19E         ((uint8_t)0x40) /*!< Channel 19 I/O switch control */
#define RI_IOSR1_CH22E         ((uint8_t)0x80) /*!< Channel 22 I/O switch control */

#define RI_IOSR2_CH2E          ((uint8_t)0x01) /*!< Channel 2 I/O switch control */
#define RI_IOSR2_CH5E          ((uint8_t)0x02) /*!< Channel 5 I/O switch control */
#define RI_IOSR2_CH8E          ((uint8_t)0x04) /*!< Channel 8 I/O switch control */
#define RI_IOSR2_CH11E         ((uint8_t)0x08) /*!< Channel 11 I/O switch control */
#define RI_IOSR2_CH14E         ((uint8_t)0x10) /*!< Channel 14 I/O switch control */
#define RI_IOSR2_CH17E         ((uint8_t)0x20) /*!< Channel 17 I/O switch control */
#define RI_IOSR2_CH20E         ((uint8_t)0x40) /*!< Channel 20 I/O switch control */
#define RI_IOSR2_CH23E         ((uint8_t)0x80) /*!< Channel 23 I/O switch control */

#define RI_IOSR3_CH3E          ((uint8_t)0x01) /*!< Channel 3 I/O switch control */
#define RI_IOSR3_CH6E          ((uint8_t)0x02) /*!< Channel 6 I/O switch control */
#define RI_IOSR3_CH9E          ((uint8_t)0x04) /*!< Channel 9 I/O switch control */
#define RI_IOSR3_CH12E         ((uint8_t)0x08) /*!< Channel 12 I/O switch control */
#define RI_IOSR3_CH15E         ((uint8_t)0x10) /*!< Channel 15 I/O switch control */
#define RI_IOSR3_CH18E         ((uint8_t)0x20) /*!< Channel 18 I/O switch control */
#define RI_IOSR3_CH21E         ((uint8_t)0x40) /*!< Channel 21 I/O switch control */
#define RI_IOSR3_CH24E         ((uint8_t)0x80) /*!< Channel 24 I/O switch control */

#define RI_IOGCR_IOM1          ((uint8_t)0x03) /*!< I/O mode 1 */
#define RI_IOGCR_IOM2          ((uint8_t)0x0C) /*!< I/O mode 2 */
#define RI_IOGCR_IOM3          ((uint8_t)0x30) /*!< I/O mode 3 */
#define RI_IOGCR_IOM4          ((uint8_t)0xC0) /*!< I/O mode 4 */

#define RI_ASCR1_AS0           ((uint8_t)0x01) /*!< Analog switch AS0 control */
#define RI_ASCR1_AS1           ((uint8_t)0x02) /*!< Analog switch AS1 control */
#define RI_ASCR1_AS2           ((uint8_t)0x04) /*!< Analog switch AS2 control */
#define RI_ASCR1_AS3           ((uint8_t)0x08) /*!< Analog switch AS3 control */
#define RI_ASCR1_AS4           ((uint8_t)0x10) /*!< Analog switch AS4 control */
#define RI_ASCR1_AS5           ((uint8_t)0x20) /*!< Analog switch AS5 control */
#define RI_ASCR1_AS6           ((uint8_t)0x40) /*!< Analog switch AS6 control */
#define RI_ASCR1_AS7           ((uint8_t)0x80) /*!< Analog switch AS7 control */

#define RI_ASCR2_AS8           ((uint8_t)0x01) /*!< Analog switch AS8 control */
#define RI_ASCR2_AS9           ((uint8_t)0x02) /*!< Analog switch AS9 control */
#define RI_ASCR2_AS10          ((uint8_t)0x04) /*!< Analog switch AS10 control */
#define RI_ASCR2_AS11          ((uint8_t)0x08) /*!< Analog switch AS11 control */
#define RI_ASCR2_AS14          ((uint8_t)0x40) /*!< Analog switch AS14 control */

#define RI_RCR_400KPD          ((uint8_t)0x08) /*!< 400K pull-down resistor Mask. */
#define RI_RCR_10KPD           ((uint8_t)0x04) /*!< 10K pull-down resistor Mask. */
#define RI_RCR_400KPU          ((uint8_t)0x02) /*!< 400K pull-up resistor Mask. */
#define RI_RCR_10KPU           ((uint8_t)0x01) /*!< 10K pull-up resistor Mask. */

#define RI_IOSR4_CH29E         ((uint8_t)0x01) /*!< Channel 29 I/O switch control */
#define RI_IOSR4_CH26E         ((uint8_t)0x02) /*!< Channel 26 I/O switch control */
#define RI_IOSR4_CH27E         ((uint8_t)0x40) /*!< Channel 27 I/O switch control */
#define RI_IOSR4_CH28E         ((uint8_t)0x80) /*!< Channel 28 I/O switch control */

/**
  * @}
  */

/** @addtogroup SPI_Registers_Bits_Definition
  * @{
  */

#define SPI_CR1_LSBFIRST ((uint8_t)0x80) /*!< Frame format mask */
#define SPI_CR1_SPE      ((uint8_t)0x40) /*!< Enable bits mask */
#define SPI_CR1_BR       ((uint8_t)0x38) /*!< Baud rate control mask */
#define SPI_CR1_MSTR     ((uint8_t)0x04) /*!< Master Selection mask */
#define SPI_CR1_CPOL     ((uint8_t)0x02) /*!< Clock Polarity mask */
#define SPI_CR1_CPHA     ((uint8_t)0x01) /*!< Clock Phase mask */

#define SPI_CR2_BDM      ((uint8_t)0x80) /*!< Bi-directional data mode enable mask */
#define SPI_CR2_BDOE     ((uint8_t)0x40) /*!< Output enable in bi-directional mode mask */
#define SPI_CR2_CRCEN    ((uint8_t)0x20) /*!< Hardware CRC calculation enable mask */
#define SPI_CR2_CRCNEXT  ((uint8_t)0x10) /*!< Transmit CRC next mask */
#define SPI_CR2_RXONLY   ((uint8_t)0x04) /*!< Receive only mask */
#define SPI_CR2_SSM      ((uint8_t)0x02) /*!< Software slave management mask */
#define SPI_CR2_SSI      ((uint8_t)0x01) /*!< Internal slave select mask */

#define SPI_CR3_TXIE     ((uint8_t)0x80) /*!< Tx buffer empty interrupt enable mask */
#define SPI_CR3_RXIE     ((uint8_t)0x40) /*!< Rx buffer empty interrupt enable mask */
#define SPI_CR3_ERRIE    ((uint8_t)0x20) /*!< Error interrupt enable mask */
#define SPI_CR3_WKIE     ((uint8_t)0x10) /*!< Wake-up interrupt enable mask */
#define SPI_CR3_TXDMAEN  ((uint8_t)0x02) /*!< Tx Buffer DMA enable mask */
#define SPI_CR3_RXDMAEN  ((uint8_t)0x01) /*!< Rx Buffer DMA enable mask */

#define SPI_SR_BSY       ((uint8_t)0x80) /*!< Busy flag */
#define SPI_SR_OVR       ((uint8_t)0x40) /*!< Overrun flag */
#define SPI_SR_MODF      ((uint8_t)0x20) /*!< Mode fault */
#define SPI_SR_CRCERR    ((uint8_t)0x10) /*!< CRC error flag */
#define SPI_SR_WKUP      ((uint8_t)0x08) /*!< Wake-Up flag */
#define SPI_SR_TXE       ((uint8_t)0x02) /*!< Transmit buffer empty */
#define SPI_SR_RXNE      ((uint8_t)0x01) /*!< Receive buffer not empty */
/**
  * @}
  */

/** @addtogroup TIM1_Registers_Bits_Definition
  * @{
  */
/* CR1*/
#define TIM1_CR1_ARPE    ((uint8_t)0x80) /*!< Auto-Reload Preload Enable mask. */
#define TIM1_CR1_CMS     ((uint8_t)0x60) /*!< Center-aligned Mode Selection mask. */
#define TIM1_CR1_DIR     ((uint8_t)0x10) /*!< Direction mask. */
#define TIM1_CR1_OPM     ((uint8_t)0x08) /*!< One Pulse Mode mask. */
#define TIM1_CR1_URS     ((uint8_t)0x04) /*!< Update Request Source mask. */
#define TIM1_CR1_UDIS    ((uint8_t)0x02) /*!< Update DIsable mask. */
#define TIM1_CR1_CEN     ((uint8_t)0x01) /*!< Counter Enable mask. */
/* CR2*/
#define TIM1_CR2_TI1S    ((uint8_t)0x80) /*!< TI1 selection  */
#define TIM1_CR2_MMS     ((uint8_t)0x70) /*!< MMS Selection mask. */
#define TIM1_CR2_CCDS    ((uint8_t)0x08) /*!< Capture/Compare DMA Selection */
#define TIM1_CR2_CCUS    ((uint8_t)0x04) /*!< Capture/Compare Control Update Selection mask. */
#define TIM1_CR2_CCPC    ((uint8_t)0x01) /*!< Capture/Compare Preloaded Control mask. */
/* SMCR*/
#define TIM1_SMCR_MSM    ((uint8_t)0x80) /*!< Master/Slave Mode mask. */
#define TIM1_SMCR_TS     ((uint8_t)0x70) /*!< Trigger Selection mask. */
#define TIM1_SMCR_OCCS   ((uint8_t)0x08) /*!< OCREFCLR Selection mask. */
#define TIM1_SMCR_SMS    ((uint8_t)0x07) /*!< Slave Mode Selection mask. */
/* ETR*/
#define TIM1_ETR_ETP     ((uint8_t)0x80) /*!< External Trigger Polarity mask. */
#define TIM1_ETR_ECE     ((uint8_t)0x40) /*!< External Clock mask. */
#define TIM1_ETR_ETPS    ((uint8_t)0x30) /*!< External Trigger Prescaler mask. */
#define TIM1_ETR_ETF     ((uint8_t)0x0F) /*!< External Trigger Filter mask. */
/* DER*/
#define TIM1_DER_COMDE   ((uint8_t)0x20) /*!< Commutation DMA request Enable  mask.*/
#define TIM1_DER_CC4DE   ((uint8_t)0x10) /*!< Capture/Compare 4 DMA request Enable  mask.*/
#define TIM1_DER_CC3DE   ((uint8_t)0x08) /*!< Capture/Compare 3 DMA request Enable  mask.*/
#define TIM1_DER_CC2DE   ((uint8_t)0x04) /*!< Capture/Compare 2 DMA request Enable  mask.*/
#define TIM1_DER_CC1DE   ((uint8_t)0x02) /*!< Capture/Compare 1 DMA request Enable  mask.*/
#define TIM1_DER_UDE     ((uint8_t)0x01) /*!< Update DMA request Enable  mask. */
/* IER*/
#define TIM1_IER_BIE     ((uint8_t)0x80) /*!< Break Interrupt Enable mask. */
#define TIM1_IER_TIE     ((uint8_t)0x40) /*!< Trigger Interrupt Enable mask. */
#define TIM1_IER_COMIE   ((uint8_t)0x20) /*!< Commutation Interrupt Enable mask.*/
#define TIM1_IER_CC4IE   ((uint8_t)0x10) /*!< Capture/Compare 4 Interrupt Enable mask. */
#define TIM1_IER_CC3IE   ((uint8_t)0x08) /*!< Capture/Compare 3 Interrupt Enable mask. */
#define TIM1_IER_CC2IE   ((uint8_t)0x04) /*!< Capture/Compare 2 Interrupt Enable mask. */
#define TIM1_IER_CC1IE   ((uint8_t)0x02) /*!< Capture/Compare 1 Interrupt Enable mask. */
#define TIM1_IER_UIE     ((uint8_t)0x01) /*!< Update Interrupt Enable mask. */
/* SR1*/
#define TIM1_SR1_BIF     ((uint8_t)0x80) /*!< Break Interrupt Flag mask. */
#define TIM1_SR1_TIF     ((uint8_t)0x40) /*!< Trigger Interrupt Flag mask. */
#define TIM1_SR1_COMIF   ((uint8_t)0x20) /*!< Commutation Interrupt Flag mask. */
#define TIM1_SR1_CC4IF   ((uint8_t)0x10) /*!< Capture/Compare 4 Interrupt Flag mask. */
#define TIM1_SR1_CC3IF   ((uint8_t)0x08) /*!< Capture/Compare 3 Interrupt Flag mask. */
#define TIM1_SR1_CC2IF   ((uint8_t)0x04) /*!< Capture/Compare 2 Interrupt Flag mask. */
#define TIM1_SR1_CC1IF   ((uint8_t)0x02) /*!< Capture/Compare 1 Interrupt Flag mask. */
#define TIM1_SR1_UIF     ((uint8_t)0x01) /*!< Update Interrupt Flag mask. */
/* SR2*/
#define TIM1_SR2_CC4OF   ((uint8_t)0x10) /*!< Capture/Compare 4 Overcapture Flag mask. */
#define TIM1_SR2_CC3OF   ((uint8_t)0x08) /*!< Capture/Compare 3 Overcapture Flag mask. */
#define TIM1_SR2_CC2OF   ((uint8_t)0x04) /*!< Capture/Compare 2 Overcapture Flag mask. */
#define TIM1_SR2_CC1OF   ((uint8_t)0x02) /*!< Capture/Compare 1 Overcapture Flag mask. */
/*EGR*/
#define TIM1_EGR_BG      ((uint8_t)0x80) /*!< Break Generation mask. */
#define TIM1_EGR_TG      ((uint8_t)0x40) /*!< Trigger Generation mask. */
#define TIM1_EGR_COMG    ((uint8_t)0x20) /*!< Capture/Compare Control Update Generation mask. */
#define TIM1_EGR_CC4G    ((uint8_t)0x10) /*!< Capture/Compare 4 Generation mask. */
#define TIM1_EGR_CC3G    ((uint8_t)0x08) /*!< Capture/Compare 3 Generation mask. */
#define TIM1_EGR_CC2G    ((uint8_t)0x04) /*!< Capture/Compare 2 Generation mask. */
#define TIM1_EGR_CC1G    ((uint8_t)0x02) /*!< Capture/Compare 1 Generation mask. */
#define TIM1_EGR_UG      ((uint8_t)0x01) /*!< Update Generation mask. */
/*CCMR*/
#define TIM1_CCMR_ICxPSC ((uint8_t)0x0C) /*!< Input Capture x Prescaler mask. */
#define TIM1_CCMR_ICxF   ((uint8_t)0xF0) /*!< Input Capture x Filter mask. */
#define TIM1_CCMR_OCM    ((uint8_t)0x70) /*!< Output Compare x Mode mask. */
#define TIM1_CCMR_OCxPE  ((uint8_t)0x08) /*!< Output Compare x Preload Enable mask. */
#define TIM1_CCMR_OCxFE  ((uint8_t)0x04) /*!< Output Compare x Fast Enable mask. */
#define TIM1_CCMR_CCxS   ((uint8_t)0x03) /*!< Capture/Compare x Selection mask. */
#define TIM1_CCMR_OCxCE  ((uint8_t)0x80) /*!< Output Compare x Clear Enable mask. */

#define CCMR_TIxDirect_Set ((uint8_t)0x01)
/*CCER1*/
#define TIM1_CCER1_CC2NP ((uint8_t)0x80) /*!< Capture/Compare 2 Complementary output Polarity mask. */
#define TIM1_CCER1_CC2NE ((uint8_t)0x40) /*!< Capture/Compare 2 Complementary output enable mask. */
#define TIM1_CCER1_CC2P  ((uint8_t)0x20) /*!< Capture/Compare 2 output Polarity mask. */
#define TIM1_CCER1_CC2E  ((uint8_t)0x10) /*!< Capture/Compare 2 output enable mask. */
#define TIM1_CCER1_CC1NP ((uint8_t)0x08) /*!< Capture/Compare 1 Complementary output Polarity mask. */
#define TIM1_CCER1_CC1NE ((uint8_t)0x04) /*!< Capture/Compare 1 Complementary output enable mask. */
#define TIM1_CCER1_CC1P  ((uint8_t)0x02) /*!< Capture/Compare 1 output Polarity mask. */
#define TIM1_CCER1_CC1E  ((uint8_t)0x01) /*!< Capture/Compare 1 output enable mask. */
/*CCER2*/
#define TIM1_CCER2_CC4P  ((uint8_t)0x20) /*!< Capture/Compare 4 Polarity mask. */
#define TIM1_CCER2_CC4E  ((uint8_t)0x10) /*!< Capture/Compare 4 Enable mask. */
#define TIM1_CCER2_CC3NP ((uint8_t)0x08) /*!< Capture/Compare 3 Complementary output Polarity mask. */
#define TIM1_CCER2_CC3NE ((uint8_t)0x04) /*!< Capture/Compare 3 Complementary output enable mask. */
#define TIM1_CCER2_CC3P  ((uint8_t)0x02) /*!< Capture/Compare 3 output Polarity mask. */
#define TIM1_CCER2_CC3E  ((uint8_t)0x01) /*!< Capture/Compare 3 output enable mask. */
/*CNTR*/
#define TIM1_CNTRH_CNT   ((uint8_t)0xFF) /*!< Counter Value (MSB) mask. */
#define TIM1_CNTRL_CNT   ((uint8_t)0xFF) /*!< Counter Value (LSB) mask. */
/*PSCR*/
#define TIM1_PSCH_PSC    ((uint8_t)0xFF) /*!< Prescaler Value (MSB) mask. */
#define TIM1_PSCL_PSC    ((uint8_t)0xFF) /*!< Prescaler Value (LSB) mask. */
/*ARR*/
#define TIM1_ARRH_ARR    ((uint8_t)0xFF) /*!< Autoreload Value (MSB) mask. */
#define TIM1_ARRL_ARR    ((uint8_t)0xFF) /*!< Autoreload Value (LSB) mask. */
/*RCR*/
#define TIM1_RCR_REP     ((uint8_t)0xFF) /*!< Repetition Counter Value mask. */
/*CCR1*/
#define TIM1_CCR1H_CCR1  ((uint8_t)0xFF) /*!< Capture/Compare 1 Value (MSB) mask. */
#define TIM1_CCR1L_CCR1  ((uint8_t)0xFF) /*!< Capture/Compare 1 Value (LSB) mask. */
/*CCR2*/
#define TIM1_CCR2H_CCR2  ((uint8_t)0xFF) /*!< Capture/Compare 2 Value (MSB) mask. */
#define TIM1_CCR2L_CCR2  ((uint8_t)0xFF) /*!< Capture/Compare 2 Value (LSB) mask. */
/*CCR3*/
#define TIM1_CCR3H_CCR3  ((uint8_t)0xFF) /*!< Capture/Compare 3 Value (MSB) mask. */
#define TIM1_CCR3L_CCR3  ((uint8_t)0xFF) /*!< Capture/Compare 3 Value (LSB) mask. */
/*CCR4*/
#define TIM1_CCR4H_CCR4  ((uint8_t)0xFF) /*!< Capture/Compare 4 Value (MSB) mask. */
#define TIM1_CCR4L_CCR4  ((uint8_t)0xFF) /*!< Capture/Compare 4 Value (LSB) mask. */
/*BKR*/
#define TIM1_BKR_MOE     ((uint8_t)0x80) /*!< Main Output Enable mask. */
#define TIM1_BKR_AOE     ((uint8_t)0x40) /*!< Automatic Output Enable mask. */
#define TIM1_BKR_BKP     ((uint8_t)0x20) /*!< Break Polarity mask. */
#define TIM1_BKR_BKE     ((uint8_t)0x10) /*!< Break Enable mask. */
#define TIM1_BKR_OSSR    ((uint8_t)0x08) /*!< Off-State Selection for Run mode mask. */
#define TIM1_BKR_OSSI    ((uint8_t)0x04) /*!< Off-State Selection for Idle mode mask. */
#define TIM1_BKR_LOCK    ((uint8_t)0x03) /*!< Lock Configuration mask. */
/*DTR*/
#define TIM1_DTR_DTG     ((uint8_t)0xFF) /*!< Dead-Time Generator set-up mask. */
/*OISR*/
#define TIM1_OISR_OIS3N  ((uint8_t)0x20) /*!< Output Idle state 3 (OC3N output) mask. */
#define TIM1_OISR_OIS3   ((uint8_t)0x10) /*!< Output Idle state 3 (OC3 output) mask. */
#define TIM1_OISR_OIS2N  ((uint8_t)0x08) /*!< Output Idle state 2 (OC2N output) mask. */
#define TIM1_OISR_OIS2   ((uint8_t)0x04) /*!< Output Idle state 2 (OC2 output) mask. */
#define TIM1_OISR_OIS1N  ((uint8_t)0x02) /*!< Output Idle state 1 (OC1N output) mask. */
#define TIM1_OISR_OIS1   ((uint8_t)0x01) /*!< Output Idle state 1 (OC1 output) mask. */

/*DCR1*/
#define TIM1_DCR1_DBA    ((uint8_t)0x1F)    /*!< DMA Base Address mask. */

/*DCR2*/
#define TIM1_DCR2_DBL    ((uint8_t)0x1F)    /*!< DMA Burst Length mask. */

/*DMAR*/
#define TIM1_DMAR_VR     ((uint8_t)0xFF)    /*!< Virtual register mask. */


/**
  * @}
  */

/** @addtogroup TIM2_TIM3_TIM5_Registers_Bits_Definition
  * @{
  */
/* CR1*/
#define TIM_CR1_ARPE     ((uint8_t)0x80) /*!< Auto-Reload Preload Enable Mask. */
#define TIM_CR1_CMS      ((uint8_t)0x60) /*!< Center-aligned Mode Selection Mask. */
#define TIM_CR1_DIR      ((uint8_t)0x10) /*!< Direction Mask. */
#define TIM_CR1_OPM      ((uint8_t)0x08) /*!< One Pulse Mode Mask. */
#define TIM_CR1_URS      ((uint8_t)0x04) /*!< Update Request Source Mask. */
#define TIM_CR1_UDIS     ((uint8_t)0x02) /*!< Update DIsable Mask. */
#define TIM_CR1_CEN      ((uint8_t)0x01) /*!< Counter Enable Mask. */

/* CR2*/
#define TIM_CR2_TI1S     ((uint8_t)0x80) /*!< TI1 selection  */
#define TIM_CR2_MMS      ((uint8_t)0x70) /*!< MMS Selection Mask. */
#define TIM_CR2_CCDS     ((uint8_t)0x08) /*!< Capture/Compare DMA Selection */


/* SMCR*/
#define TIM_SMCR_MSM     ((uint8_t)0x80) /*!< Master/Slave Mode Mask. */
#define TIM_SMCR_TS      ((uint8_t)0x70) /*!< Trigger Selection Mask. */
#define TIM_SMCR_SMS     ((uint8_t)0x07) /*!< Slave Mode Selection Mask. */


/* ETR*/
#define TIM_ETR_ETP      ((uint8_t)0x80) /*!< External Trigger Polarity Mask. */
#define TIM_ETR_ECE      ((uint8_t)0x40)/*!< External Clock Mask. */
#define TIM_ETR_ETPS     ((uint8_t)0x30) /*!< External Trigger Prescaler Mask. */
#define TIM_ETR_ETF      ((uint8_t)0x0F) /*!< External Trigger Filter Mask. */

/* DER*/
#define TIM_DER_CC2DE    ((uint8_t)0x04) /*!< Capture/Compare 2 DMA request Enable mask.*/
#define TIM_DER_CC1DE    ((uint8_t)0x02) /*!< Capture/Compare 1 DMA request Enable mask.*/
#define TIM_DER_UDE      ((uint8_t)0x01) /*!< Update DMA request Enable  mask. */

/* IER*/
#define TIM_IER_BIE      ((uint8_t)0x80) /*!< Break Interrupt Enable Mask. */
#define TIM_IER_TIE      ((uint8_t)0x40) /*!< Trigger Interrupt Enable Mask. */
#define TIM_IER_CC2IE    ((uint8_t)0x04) /*!< Capture/Compare 2 Interrupt Enable Mask. */
#define TIM_IER_CC1IE    ((uint8_t)0x02) /*!< Capture/Compare 1 Interrupt Enable Mask. */
#define TIM_IER_UIE      ((uint8_t)0x01) /*!< Update Interrupt Enable Mask. */

/* SR1*/
#define TIM_SR1_BIF      ((uint8_t)0x80) /*!< Break Interrupt Flag Mask. */
#define TIM_SR1_TIF      ((uint8_t)0x40) /*!< Trigger Interrupt Flag Mask. */
#define TIM_SR1_CC2IF    ((uint8_t)0x04) /*!< Capture/Compare 2 Interrupt Flag Mask. */
#define TIM_SR1_CC1IF    ((uint8_t)0x02) /*!< Capture/Compare 1 Interrupt Flag Mask. */
#define TIM_SR1_UIF      ((uint8_t)0x01) /*!< Update Interrupt Flag Mask. */

/* SR2*/
#define TIM_SR2_CC2OF    ((uint8_t)0x04) /*!< Capture/Compare 2 Overcapture Flag Mask. */
#define TIM_SR2_CC1OF    ((uint8_t)0x02) /*!< Capture/Compare 1 Overcapture Flag Mask. */

/*EGR*/
#define TIM_EGR_BG       ((uint8_t)0x80) /*!< Break Generation Mask. */
#define TIM_EGR_TG       ((uint8_t)0x40) /*!< Trigger Generation Mask. */
#define TIM_EGR_CC2G     ((uint8_t)0x04) /*!< Capture/Compare 2 Generation Mask. */
#define TIM_EGR_CC1G     ((uint8_t)0x02) /*!< Capture/Compare 1 Generation Mask. */
#define TIM_EGR_UG       ((uint8_t)0x01) /*!< Update Generation Mask. */

/*CCMR*/
#define TIM_CCMR_ICxF    ((uint8_t)0xF0) /*!< Input Capture x Filter Mask. */
#define TIM_CCMR_ICxPSC  ((uint8_t)0x0C) /*!< Input Capture x Prescaler Mask. */
#define TIM_CCMR_CCxS    ((uint8_t)0x03) /*!< Capture/Compare x Selection Mask. */
#define TIM_CCMR_OCM     ((uint8_t)0x70) /*!< Output Compare x Mode Mask. */
#define TIM_CCMR_OCxPE   ((uint8_t)0x08) /*!< Output Compare x Preload Enable Mask. */
#define TIM_CCMR_OCxFE   ((uint8_t)0x04) /*!< Output Compare x Fast Enable Mask. */

#define TIM_CCMR_TIxDirect_Set   ((uint8_t)0x01)

/*CCER1*/
#define TIM_CCER1_CC2P   ((uint8_t)0x20) /*!< Capture/Compare 2 output Polarity Mask. */
#define TIM_CCER1_CC2E   ((uint8_t)0x10) /*!< Capture/Compare 2 output enable Mask. */
#define TIM_CCER1_CC1P   ((uint8_t)0x02) /*!< Capture/Compare 1 output Polarity Mask. */
#define TIM_CCER1_CC1E   ((uint8_t)0x01) /*!< Capture/Compare 1 output enable Mask. */

/*CNTR*/
#define TIM_CNTRH_CNT    ((uint8_t)0xFF) /*!< Counter Value (MSB) Mask. */
#define TIM_CNTRL_CNT    ((uint8_t)0xFF) /*!< Counter Value (LSB) Mask. */

/*PSCR*/
#define TIM_PSCR_PSC     ((uint8_t)0x07) /*!< Prescaler Value  Mask. */

/*ARR*/
#define TIM_ARRH_ARR     ((uint8_t)0xFF) /*!< Autoreload Value (MSB) Mask. */
#define TIM_ARRL_ARR     ((uint8_t)0xFF) /*!< Autoreload Value (LSB) Mask. */


/*CCR1*/
#define TIM_CCR1H_CCR1   ((uint8_t)0xFF) /*!< Capture/Compare 1 Value (MSB) Mask. */
#define TIM_CCR1L_CCR1   ((uint8_t)0xFF) /*!< Capture/Compare 1 Value (LSB) Mask. */

/*CCR2*/
#define TIM_CCR2H_CCR2   ((uint8_t)0xFF) /*!< Capture/Compare 2 Value (MSB) Mask. */
#define TIM_CCR2L_CCR2   ((uint8_t)0xFF) /*!< Capture/Compare 2 Value (LSB) Mask. */


/*BKR*/
#define TIM_BKR_MOE      ((uint8_t)0x80) /*!< Main Output Enable Mask. */
#define TIM_BKR_AOE      ((uint8_t)0x40) /*!< Automatic Output Enable Mask. */
#define TIM_BKR_BKP      ((uint8_t)0x20) /*!< Break Polarity Mask. */
#define TIM_BKR_BKE      ((uint8_t)0x10) /*!< Break Enable Mask. */
#define TIM_BKR_OSSI     ((uint8_t)0x04) /*!< Off-State Selection for Idle mode Mask. */
#define TIM_BKR_LOCK     ((uint8_t)0x03) /*!<Lock Configuration Mask. */

/*OISR*/
#define TIM_OISR_OIS2    ((uint8_t)0x04) /*!< Output Idle state 2 (OC2 output) Mask. */
#define TIM_OISR_OIS1    ((uint8_t)0x01) /*!< Output Idle state 1 (OC1 output) Mask. */
/**
  * @}
  */

/** @addtogroup TIM4_Registers_Bits_Definition
  * @{
  */
/* CR1*/
#define TIM4_CR1_ARPE    ((uint8_t)0x80) /*!< Auto-Reload Preload Enable Mask. */
#define TIM4_CR1_OPM     ((uint8_t)0x08) /*!< One Pulse Mode Mask. */
#define TIM4_CR1_URS     ((uint8_t)0x04) /*!< Update Request Source Mask. */
#define TIM4_CR1_UDIS    ((uint8_t)0x02) /*!< Update DIsable Mask. */
#define TIM4_CR1_CEN     ((uint8_t)0x01) /*!< Counter Enable Mask. */

/* CR2*/
#define TIM4_CR2_MMS     ((uint8_t)0x70) /*!< MMS Selection Mask. */

/* SMCR*/
#define TIM4_SMCR_MSM    ((uint8_t)0x80) /*!< Master/Slave Mode Mask. */
#define TIM4_SMCR_TS     ((uint8_t)0x70) /*!< Trigger Selection Mask. */
#define TIM4_SMCR_SMS    ((uint8_t)0x07) /*!< Slave Mode Selection Mask. */

/* DER*/
#define TIM4_DER_UDE     ((uint8_t)0x01) /*!< Update DMA request Enable  mask. */

/* IER*/
#define TIM4_IER_TIE     ((uint8_t)0x40) /*!< Trigger Interrupt Enable Mask. */
#define TIM4_IER_UIE     ((uint8_t)0x01) /*!< Update Interrupt Enable Mask. */

/* SR1*/
#define TIM4_SR1_UIF     ((uint8_t)0x01) /*!< Update Interrupt Flag Mask. */
#define TIM4_SR1_TIF     ((uint8_t)0x40) /*!< Trigger Interrupt Flag Mask. */

/* EGR*/
#define TIM4_EGR_UG      ((uint8_t)0x01) /*!< Update Generation Mask. */
#define TIM4_EGR_TG      ((uint8_t)0x40) /*!< Trigger Generation Mask. */

/* CNTR*/
#define TIM4_CNTR_CNT    ((uint8_t)0xFF) /*!<Counter Value (LSB) Mask. */

/* PSCR*/
#define TIM4_PSCR_PSC    ((uint8_t)0x0F) /*!<Prescaler Value  Mask. */

/* ARR*/
#define TIM4_ARR_ARR     ((uint8_t)0xFF) /*!<Autoreload Value Mask. */
/**
  * @}
  */

/** @addtogroup USART_Registers_Bits_Definition
  * @{
  */
#define USART_SR_TXE       ((uint8_t)0x80) /*!< Transmit Data Register Empty mask */
#define USART_SR_TC        ((uint8_t)0x40) /*!< Transmission Complete mask */
#define USART_SR_RXNE      ((uint8_t)0x20) /*!< Read Data Register Not Empty mask */
#define USART_SR_IDLE      ((uint8_t)0x10) /*!< IDLE line detected mask */
#define USART_SR_OR        ((uint8_t)0x08) /*!< OverRun error mask */
#define USART_SR_NF        ((uint8_t)0x04) /*!< Noise Flag mask */
#define USART_SR_FE        ((uint8_t)0x02) /*!< Framing Error mask */
#define USART_SR_PE        ((uint8_t)0x01) /*!< Parity Error mask */

#define USART_BRR1_DIVM    ((uint8_t)0xFF) /*!< LSB mantissa of USARTDIV [7:0] mask */

#define USART_BRR2_DIVM    ((uint8_t)0xF0) /*!< MSB mantissa of USARTDIV [11:8] mask */
#define USART_BRR2_DIVF    ((uint8_t)0x0F) /*!< Fraction bits of USARTDIV [3:0] mask */

#define USART_CR1_R8       ((uint8_t)0x80) /*!< Receive Data bit 8 */
#define USART_CR1_T8       ((uint8_t)0x40) /*!< Transmit data bit 8 */
#define USART_CR1_USARTD   ((uint8_t)0x20) /*!< USART Disable (for low power consumption) */
#define USART_CR1_M        ((uint8_t)0x10) /*!< Word length mask */
#define USART_CR1_WAKE     ((uint8_t)0x08) /*!< Wake-up method mask */
#define USART_CR1_PCEN     ((uint8_t)0x04) /*!< Parity Control Enable mask */
#define USART_CR1_PS       ((uint8_t)0x02) /*!< USART Parity Selection */
#define USART_CR1_PIEN     ((uint8_t)0x01) /*!< USART Parity Interrupt Enable mask */

#define USART_CR2_TIEN     ((uint8_t)0x80) /*!< Transmitter Interrupt Enable mask */
#define USART_CR2_TCIEN    ((uint8_t)0x40) /*!< TransmissionComplete Interrupt Enable mask */
#define USART_CR2_RIEN     ((uint8_t)0x20) /*!< Receiver Interrupt Enable mask */
#define USART_CR2_ILIEN    ((uint8_t)0x10) /*!< IDLE Line Interrupt Enable mask */
#define USART_CR2_TEN      ((uint8_t)0x08) /*!< Transmitter Enable mask */
#define USART_CR2_REN      ((uint8_t)0x04) /*!< Receiver Enable mask */
#define USART_CR2_RWU      ((uint8_t)0x02) /*!< Receiver Wake-Up mask */
#define USART_CR2_SBK      ((uint8_t)0x01) /*!< Send Break mask */

#define USART_CR3_STOP     ((uint8_t)0x30) /*!< STOP bits [1:0] mask */
#define USART_CR3_CLKEN    ((uint8_t)0x08) /*!< Clock Enable mask */
#define USART_CR3_CPOL     ((uint8_t)0x04) /*!< Clock Polarity mask */
#define USART_CR3_CPHA     ((uint8_t)0x02) /*!< Clock Phase mask */
#define USART_CR3_LBCL     ((uint8_t)0x01) /*!< Last Bit Clock pulse mask */

#define USART_CR4_ADD      ((uint8_t)0x0F) /*!< Address of the USART node mask */

#define USART_CR5_DMAT     ((uint8_t)0x80) /*!< DMA Enable transmitter mask */
#define USART_CR5_DMAR     ((uint8_t)0x40) /*!< DMA Enable receiver mask */
#define USART_CR5_SCEN     ((uint8_t)0x20) /*!< Smart Card Enable mask */
#define USART_CR5_NACK     ((uint8_t)0x10) /*!< Smart Card Nack Enable mask */
#define USART_CR5_HDSEL    ((uint8_t)0x08) /*!< Half-Duplex Selection mask */
#define USART_CR5_IRLP     ((uint8_t)0x04) /*!< Irda Low Power Selection mask */
#define USART_CR5_IREN     ((uint8_t)0x02) /*!< Irda Enable mask */
#define USART_CR5_EIE      ((uint8_t)0x01) /*!< Error Interrupt mask */
/**
  * @}
  */

/** @addtogroup ADC_Registers_Bits_Definition
  * @{
  */
#define  ADC_CR1_ADON           ((uint8_t)0x01)
#define  ADC_CR1_START          ((uint8_t)0x02)
#define  ADC_CR1_CONT           ((uint8_t)0x04)
#define  ADC_CR1_EOCIE          ((uint8_t)0x08)
#define  ADC_CR1_AWDIE          ((uint8_t)0x10)
#define  ADC_CR1_RES            ((uint8_t)0x60)
#define  ADC_CR1_OVERIE         ((uint8_t)0x80)


#define  ADC_CR2_SMPT1          ((uint8_t)0x07)
#define  ADC_CR2_EXTSEL         ((uint8_t)0x18)
#define  ADC_CR2_TRIGEDGE       ((uint8_t)0x60)
#define  ADC_CR2_PRESC          ((uint8_t)0x80)

#define  ADC_CR3_CHSEL          ((uint8_t)0x1F)
#define  ADC_CR3_SMPT2          ((uint8_t)0xE0)

#define  ADC_SR_EOC             ((uint8_t)0x01)
#define  ADC_SR_AWD             ((uint8_t)0x02)
#define  ADC_SR_OVER            ((uint8_t)0x04)

#define  ADC_DRH_CONVDATA       ((uint8_t)0x0F)
#define  ADC_DRL_CONVDATA       ((uint8_t)0xFF)

#define  ADC_HTRH_HT            ((uint8_t)0x0F)
#define  ADC_HTRL_HT            ((uint8_t)0xFF)

#define  ADC_LTRH_LT            ((uint8_t)0x0F)
#define  ADC_LTRL_LT            ((uint8_t)0xFF)

#define  ADC_SQR1_CHSELS        ((uint8_t)0x3F)
#define  ADC_SQR1_DMAOFF        ((uint8_t)0x80)
#define  ADC_SQR2_CHSELS        ((uint8_t)0xFF)
#define  ADC_SQR3_CHSELS        ((uint8_t)0xFF)
#define  ADC_SQR4_CHSELS        ((uint8_t)0xFF)

#define  ADC_TRIGR1_TRIG        ((uint8_t)0x0F)
#define  ADC_TRIGR1_VREFINTON   ((uint8_t)0x10)
#define  ADC_TRIGR1_TSON        ((uint8_t)0x20)

#define  ADC_TRIGR2_TRIG        ((uint8_t)0xFF)
#define  ADC_TRIGR3_TRIG        ((uint8_t)0xFF)
#define  ADC_TRIGR4_TRIG        ((uint8_t)0xFF)

/**
  * @}
  */

/** @addtogroup DAC_Registers_Bits_Definition
  * @{
  */

/* CR1*/
#define DAC_CR1_TSEL          ((uint8_t)0x38) /*!<  DAC channel trigger selection. */
#define DAC_CR1_TEN           ((uint8_t)0x04) /*!<  DAC channel trigger enable. */
#define DAC_CR1_BOFF          ((uint8_t)0x02) /*!<  DAC channel output buffer disable. */
#define DAC_CR1_EN            ((uint8_t)0x01) /*!<  DAC channel enable. */
#define DAC_CR1_WAVEN         ((uint8_t)0xC0) /*!<  DAC channel wave generation enable. */

/* CR2*/
#define DAC_CR2_DMAUDRIE      ((uint8_t)0x20) /*!<  DAC channel DMA underrun interrupt enable. */
#define DAC_CR2_DMAEN         ((uint8_t)0x10) /*!<  DAC DMA enable. */
#define DAC_CR2_MAMPx         ((uint8_t)0x0F) /*!<  DAC Dchannel wave generation config. */

/* SWTRIGR*/
#define DAC_SWTRIGR_SWTRIG1   ((uint8_t)0x01) /*!<  DAC channel 1 software trigger. */
#define DAC_SWTRIGR_SWTRIG2   ((uint8_t)0x02) /*!<  DAC channel 2 software trigger. */

/* SR*/
#define DAC_SR_DMAUDR1        ((uint8_t)0x01) /*!<  DAC channel 1 DMA underrun flag. */
#define DAC_SR_DMAUDR2        ((uint8_t)0x02) /*!<  DAC channel 2 DMA underrun flag. */

/* RDHRH*/
#define DAC_RDHRH_RDHRH       ((uint8_t)0x0F) /*!<  DAC right aligned data holding register most significant bits. */

/* RDHRL*/
#define DAC_RDHRL_RDHRL       ((uint8_t)0xFF) /*!<  DAC right aligned data holding register least significant bits. */

/* LDHRL*/
#define DAC_LDHRH_LDHRH       ((uint8_t)0xFF) /*!<  DAC left aligned data holding register most significant bits. */

/* LDHRL*/
#define DAC_LDHRL_LDHRL       ((uint8_t)0xF0) /*!<  DAC left aligned data holding register least significant bits. */

/* DHR8*/
#define DAC_DHR8_8DHR         ((uint8_t)0xFF) /*!< DAC 8bit data holding bits */

/* DORH*/
#define DAC_DORH_DORH         ((uint8_t)0x0F) /*!< DAC data output register most significant bit */

/* DORL*/
#define DAC_DORL_DORL         ((uint8_t)0xFF) /*!< DAC data output register least significant bit */

/**
  * @}
  */

/** @addtogroup DMA_Registers_Bits_Definition
  * @{
  */

/*  Bit definition for DMA_GCSR register  */

#define  DMA_GCSR_GE        ((uint8_t)0x01)            /*!<Global Enable */
#define  DMA_GCSR_GB        ((uint8_t)0x02)            /*!<Global Busy */
#define  DMA_GCSR_TO        ((uint8_t)0xFC)            /*!<Time Out */

/*  Bit definition for DMA_GIR1 register  */
#define  DMA_GIR1_IFC0      ((uint8_t)0x01)            /*!< Interrupt Flag Channel 0 */
#define  DMA_GIR1_IFC1      ((uint8_t)0x02)            /*!< Interrupt Flag Channel 1 */
#define  DMA_GIR1_IFC2      ((uint8_t)0x04)            /*!< Interrupt Flag Channel 2 */
#define  DMA_GIR1_IFC3      ((uint8_t)0x08)            /*!< Interrupt Flag Channel 3 */


/*  Bit definition for DMA_CCR registers  */
#define  DMA_CCR_CE         ((uint8_t)0x01)            /*!<Channel enable*/
#define  DMA_CCR_TCIE       ((uint8_t)0x02)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR_HTIE       ((uint8_t)0x04)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR_DTD        ((uint8_t)0x08)            /*!<Data transfer direction */
#define  DMA_CCR_ARM        ((uint8_t)0x10)            /*!<Autorelaod mode Circular buffer mode */
#define  DMA_CCR_IDM        ((uint8_t)0x20)            /*!<Inc/Dec mode */
#define  DMA_CCR_MEM        ((uint8_t)0x40)            /*!<Memory Transfer Enable */


/*  Bit definition for DMA_CSPR registers  */
#define  DMA_CSPR_TCIF      ((uint8_t)0x02)            /*!<Transaction Complete Interrupt Flag*/
#define  DMA_CSPR_HTIF      ((uint8_t)0x04)            /*!<Half Transaction Interrupt Flag*/
#define  DMA_CSPR_16BM      ((uint8_t)0x08)            /*!<16 bit mode*/
#define  DMA_CSPR_PL        ((uint8_t)0x30)            /*!<Channel priority level*/
#define  DMA_CSPR_PEND      ((uint8_t)0x40)            /*!<Channel pending*/
#define  DMA_CSPR_BUSY      ((uint8_t)0x80)            /*!<Channel Busy */


/*  Bit definition for DMA_CNBTR register */
#define  DMA_CNBTR_NDT      ((uint8_t)0xFF)            /*!<Number of data to Transfer */


/*  Bit definition for DMA_CPARH register  */
#define  DMA_CPARH_PA       ((uint8_t)0xFF)        /*!<Peripheral MSB Address Pointer */
/*  Bit definition for DMA_CPARL register  */
#define  DMA_CPARL_PA       ((uint8_t)0xFF)        /*!<Peripheral LSB Address Pointer */


/*  Bit definition for DMA_CMAR registers  */
#define  DMA_CM0EAR_MA      ((uint8_t)0x01)        /* Memory Extended Address Pointer only for channel 3 in Memory to memory transfer*/
#define  DMA_CM0ARH_MA      ((uint8_t)0xFF)        /*!<Memory MSB Address Pointer*/
#define  DMA_CM0ARL_MA      ((uint8_t)0xFF)        /*!<Memory LSB Address Pointer */


/**
  * @}
  */

/** @addtogroup WWDG_Registers_Bits_Definition
  * @{
  */

#define WWDG_CR_WDGA ((uint8_t)0x80) /*!< WDGA bit mask */
#define WWDG_CR_T6   ((uint8_t)0x40) /*!< T6 bit mask */
#define WWDG_CR_T    ((uint8_t)0x7F) /*!< T bits mask */

#define WWDG_WR_MSB  ((uint8_t)0x80) /*!< MSB bit mask */
#define WWDG_WR_W    ((uint8_t)0x7F) /*!< W bits mask */


/**
  * @}
  */

/** @addtogroup LCD_Registers_Bits_Definition
  * @{
  */
#define LCD_CR1_BLINK    ((uint8_t)0xC0) /*!< Blink bits mask           */
#define LCD_CR1_BLINKF   ((uint8_t)0x38) /*!< Blink frequency bits mask */
#define LCD_CR1_DUTY     ((uint8_t)0x06) /*!< Duty bits mask            */
#define LCD_CR1_B2       ((uint8_t)0x01) /*!< Bias selector bit mask    */


#define LCD_CR2_PON      ((uint8_t)0xE0) /*!< Pulse on duration bits mask */
#define LCD_CR2_HD       ((uint8_t)0x10) /*!< High drive enable bit mask  */
#define LCD_CR2_CC       ((uint8_t)0x0E) /*!< Contrast control bits mask  */
#define LCD_CR2_VSEL     ((uint8_t)0x01) /*!< Voltage source bit mask     */

#define LCD_CR3_LCDEN    ((uint8_t)0x40) /*!< Enable bit mask           */
#define LCD_CR3_SOFIE    ((uint8_t)0x20) /*!< Start of frame interrupt enable mask */
#define LCD_CR3_SOF      ((uint8_t)0x10) /*!< Start of frame bit mask              */
#define LCD_CR3_SOFC     ((uint8_t)0x08) /*!< Clear start of frame bit mask        */
#define LCD_CR3_DEAD     ((uint8_t)0x07) /*!< DEAD time bits mask                  */

#define LCD_FRQ_DIV      ((uint8_t)0x0F) /*!< Divider bits mask */
#define LCD_FRQ_PS       ((uint8_t)0xF0) /*!< 16 bits prescaler bits mask */

#define LCD_CR4_MAPCOM   ((uint8_t)0x08) /*!< Select the mapping scheme for the COM[7:4] */
#define LCD_CR4_PAGECOM  ((uint8_t)0x04) /*!< Select the LCD RAM page sector */
#define LCD_CR4_DUTY8    ((uint8_t)0x02) /*!< Enable the 1/8 duty */
#define LCD_CR4_B4       ((uint8_t)0x01) /*!< Enable the 1/4 bias */


/**
  * @}
  */

/** @addtogroup AES_Registers_Bits_Definition
  * @{
  */
#define AES_CR_DMAEN  ((uint8_t)0x80) /*!< DMA Enable bit mask */
#define AES_CR_ERRIE  ((uint8_t)0x40) /*!< Error Interrupt Enable bit mask */
#define AES_CR_CCIE   ((uint8_t)0x20) /*!< Computation Complete Interrupt Enable bit mask */
#define AES_CR_ERRC   ((uint8_t)0x10) /*!< Error Clear bit mask  */
#define AES_CR_CCFC   ((uint8_t)0x08) /*!< Computation Complete Flag Clear bit mask */
#define AES_CR_MODE   ((uint8_t)0x06) /*!< AES Modes of Operation bits mask */
#define AES_CR_EN     ((uint8_t)0x01) /*!< AES Enable bit mask */

#define AES_SR_WRERR  ((uint8_t)0x04) /*!< Write Error Flag bit mask */
#define AES_SR_RDERR  ((uint8_t)0x02) /*!< Read Error Flag bit mask */
#define AES_SR_CCF    ((uint8_t)0x01) /*!< Computation Complete Flag bit mask */

#define AES_DINR_FF      ((uint8_t)0xFF) /*!< Data Input bits mask */
#define AES_DOUTR_FF     ((uint8_t)0xFF) /*!< Data Output bits mask */

/**
  * @}
  */



#endif
