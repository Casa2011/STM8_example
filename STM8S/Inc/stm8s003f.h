

/* STM8S103F.h */

/* Copyright (c) 2003-2017 STMicroelectronics */

#ifndef __STM8S103F__
#define __STM8S103F__

#define NULL	(void *)0
#define TRUE  1
#define FALSE 0

#define BIT(NUMBER)            		(1UL << (NUMBER))
#define ARRAY_LENGHT(Value)			(sizeof(Value) / sizeof(Value[0]))

#define enableInterrupts()  	__asm rim; __endasm     // enable interrupts
#define disableInterrupts()     __asm sim; __endasm;    // disable interrupts
#define rim()                   __asm rim; __endasm;    // enable interrupts
#define sim()                   __asm sim; __endasm;    // disable interrupts
#define nop()                   __asm nop; __endasm;    // No Operation
#define trap()                  __asm trap; __endasm;   // Trap (soft IT)
#define wfi()                   __asm wfi;  __endasm;   // Wait For Interrupt
#define halt()                  __asm halt __endasm;   // Halt

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

// CLK modes
#define CLK_ICKR_SWUAH       ((uint8_t)0x20) /*!< Slow Wake-up from Active Halt/Halt modes */
#define CLK_ICKR_LSIRDY      ((uint8_t)0x10) /*!< Low speed internal oscillator ready */
#define CLK_ICKR_LSIEN       ((uint8_t)0x08) /*!< Low speed internal RC oscillator enable */
#define CLK_ICKR_FHWU        ((uint8_t)0x04) /*!< Fast Wake-up from Active Halt/Halt mode */
#define CLK_ICKR_HSIRDY      ((uint8_t)0x02) /*!< High speed internal RC oscillator ready */
#define CLK_ICKR_HSIEN       ((uint8_t)0x01) /*!< High speed internal RC oscillator enable */

#define CLK_ECKR_HSERDY      ((uint8_t)0x02) /*!< High speed external crystal oscillator ready */
#define CLK_ECKR_HSEEN       ((uint8_t)0x01) /*!< High speed external crystal oscillator enable */

#define CLK_CMSR_CKM         ((uint8_t)0xFF) /*!< Clock master status bits */

#define CLK_SWR_SWI          ((uint8_t)0xFF) /*!< Clock master selection bits */

#define CLK_SWCR_SWIF        ((uint8_t)0x08) /*!< Clock switch interrupt flag */
#define CLK_SWCR_SWIEN       ((uint8_t)0x04) /*!< Clock switch interrupt enable */
#define CLK_SWCR_SWEN        ((uint8_t)0x02) /*!< Switch start/stop */
#define CLK_SWCR_SWBSY       ((uint8_t)0x01) /*!< Switch busy flag*/

#define CLK_CKDIVR_HSIDIV    ((uint8_t)0x18) /*!< High speed internal clock prescaler */
#define CLK_CKDIVR_CPUDIV    ((uint8_t)0x07) /*!< CPU clock prescaler */
#define CLK_PCKENR1_TIM1     ((uint8_t)0x80) /*!< Timer 1 clock enable */
#define CLK_PCKENR1_TIM3     ((uint8_t)0x40) /*!< Timer 3 clock enable */
#define CLK_PCKENR1_TIM2     ((uint8_t)0x20) /*!< Timer 2 clock enable */
#define CLK_PCKENR1_TIM5     ((uint8_t)0x20) /*!< Timer 5 clock enable */
#define CLK_PCKENR1_TIM4     ((uint8_t)0x10) /*!< Timer 4 clock enable */
#define CLK_PCKENR1_TIM6     ((uint8_t)0x10) /*!< Timer 6 clock enable */
#define CLK_PCKENR1_UART3    ((uint8_t)0x08) /*!< UART3 clock enable */
#define CLK_PCKENR1_UART2    ((uint8_t)0x08) /*!< UART2 clock enable */
#define CLK_PCKENR1_UART1    ((uint8_t)0x04) /*!< UART1 clock enable */
#define CLK_PCKENR1_SPI      ((uint8_t)0x02) /*!< SPI clock enable */
#define CLK_PCKENR1_I2C      ((uint8_t)0x01) /*!< I2C clock enable */

#define CLK_PCKENR2_CAN      ((uint8_t)0x80) /*!< CAN clock enable */
#define CLK_PCKENR2_ADC      ((uint8_t)0x08) /*!< ADC clock enable */
#define CLK_PCKENR2_AWU      ((uint8_t)0x04) /*!< AWU clock enable */

#define CLK_CSSR_CSSD        ((uint8_t)0x08) /*!< Clock security system detection */
#define CLK_CSSR_CSSDIE      ((uint8_t)0x04) /*!< Clock security system detection interrupt enable */
#define CLK_CSSR_AUX         ((uint8_t)0x02) /*!< Auxiliary oscillator connected to master clock */
#define CLK_CSSR_CSSEN       ((uint8_t)0x01) /*!< Clock security system enable */

#define CLK_CCOR_CCOBSY      ((uint8_t)0x40) /*!< Configurable clock output busy */
#define CLK_CCOR_CCORDY      ((uint8_t)0x20) /*!< Configurable clock output ready */
#define CLK_CCOR_CCOSEL      ((uint8_t)0x1E) /*!< Configurable clock output selection */
#define CLK_CCOR_CCOEN       ((uint8_t)0x01) /*!< Configurable clock output enable */

#define CLK_HSITRIMR_HSITRIM ((uint8_t)0x07) /*!< High speed internal oscillator trimmer */

#define CLK_SWIMCCR_SWIMDIV  ((uint8_t)0x01) /*!< SWIM Clock Dividing Factor */

//------------------ BEEP ------------------------

#define BEEP_CSR_RESET_VALUE ((uint8_t)0x1F)

#define BEEP_CSR_BEEPSEL ((uint8_t)0xC0) /*!< Beeper frequency selection mask */
#define BEEP_CSR_BEEPEN  ((uint8_t)0x20) /*!< Beeper enable mask */
#define BEEP_CSR_BEEPDIV ((uint8_t)0x1F) /*!< Beeper Divider prescalar mask */

//------------------ AWU --------------------------

#define AWU_CSR_RESET_VALUE ((uint8_t)0x00)
#define AWU_APR_RESET_VALUE ((uint8_t)0x3F)
#define AWU_TBR_RESET_VALUE ((uint8_t)0x00)

#define AWU_CSR_AWUF    ((uint8_t)0x20) /*!< Interrupt flag mask */
#define AWU_CSR_AWUEN   ((uint8_t)0x10) /*!< Auto Wake-up enable mask */
#define AWU_CSR_MSR     ((uint8_t)0x01) /*!< LSI Measurement enable mask */

#define AWU_APR_APR     ((uint8_t)0x3F) /*!< Asynchronous Prescaler divider mask */

#define AWU_TBR_AWUTB   ((uint8_t)0x0F) /*!< Timebase selection mask */

/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define PA_ODR *(unsigned char*)0x5000

/* Port A input pin value register */
#define PA_IDR *(unsigned char*)0x5001

/* Port A data direction register */
#define PA_DDR *(unsigned char*)0x5002

/* Port A control register 1 */
#define PA_CR1 *(unsigned char*)0x5003

/* Port A control register 2 */
#define PA_CR2 *(unsigned char*)0x5004

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define PB_ODR *(unsigned char*)0x5005

/* Port B input pin value register */
#define PB_IDR *(unsigned char*)0x5006

/* Port B data direction register */
#define PB_DDR *(unsigned char*)0x5007

/* Port B control register 1 */
#define PB_CR1 *(unsigned char*)0x5008

/* Port B control register 2 */
#define PB_CR2 *(unsigned char*)0x5009

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define PC_ODR *(unsigned char*)0x500a

/* Port C input pin value register */
#define PC_IDR *(unsigned char*)0x500b

/* Port C data direction register */
#define PC_DDR *(unsigned char*)0x500c

/* Port C control register 1 */
#define PC_CR1 *(unsigned char*)0x500d

/* Port C control register 2 */
#define PC_CR2 *(unsigned char*)0x500e

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define PD_ODR *(unsigned char*)0x500f

/* Port D input pin value register */
#define PD_IDR *(unsigned char*)0x5010

/* Port D data direction register */
#define PD_DDR *(unsigned char*)0x5011

/* Port D control register 1 */
#define PD_CR1 *(unsigned char*)0x5012

/* Port D control register 2 */
#define PD_CR2 *(unsigned char*)0x5013

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define FLASH_CR1 *(unsigned char*)0x505a

/* Flash control register 2 */
#define FLASH_CR2 *(unsigned char*)0x505b

/* Flash complementary control register 2 */
#define FLASH_NCR2 *(unsigned char*)0x505c

/* Flash protection register */
#define FLASH_FPR *(unsigned char*)0x505d

/* Flash complementary protection register */
#define FLASH_NFPR *(unsigned char*)0x505e

/* Flash in-application programming status register */
#define FLASH_IAPSR *(unsigned char*)0x505f

/* Flash Program memory unprotection register */
#define FLASH_PUKR *(unsigned char*)0x5062

/* Data EEPROM unprotection register */
#define FLASH_DUKR *(unsigned char*)0x5064

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define EXTI_CR1 *(unsigned char*)0x50a0

/* External interrupt control register 2 */
#define EXTI_CR2 *(unsigned char*)0x50a1

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define RST_SR *(unsigned char*)0x50b3

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define CLK_ICKR *(unsigned char*)0x50c0

/* External clock control register */
#define CLK_ECKR *(unsigned char*)0x50c1

/* Clock master status register */
#define CLK_CMSR *(unsigned char*)0x50c3

/* Clock master switch register */
#define CLK_SWR *(unsigned char*)0x50c4

/* Clock switch control register */
#define CLK_SWCR *(unsigned char*)0x50c5

/* Clock divider register */
#define CLK_CKDIVR *(unsigned char*)0x50c6

/* Peripheral clock gating register 1 */
#define CLK_PCKENR1 *(unsigned char*)0x50c7

/* Clock security system register */
#define CLK_CSSR *(unsigned char*)0x50c8

/* Configurable clock control register */
#define CLK_CCOR *(unsigned char*)0x50c9

/* Peripheral clock gating register 2 */
#define CLK_PCKENR2 *(unsigned char*)0x50ca

/* CAN clock control register */
#define CLK_CANCCR *(unsigned char*)0x50cb

/* HSI clock calibration trimming register */
#define CLK_HSITRIMR *(unsigned char*)0x50cc

/* SWIM clock control register */
#define CLK_SWIMCCR *(unsigned char*)0x50cd

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define WWDG_CR *(unsigned char*)0x50d1

/* WWDR Window Register */
#define WWDG_WR *(unsigned char*)0x50d2

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define IWDG_KR *(unsigned char*)0x50e0

/* IWDG Prescaler Register */
#define IWDG_PR *(unsigned char*)0x50e1

/* IWDG Reload Register */
#define IWDG_RLR *(unsigned char*)0x50e2

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define AWU_CSR *(unsigned char*)0x50f0

/* AWU asynchronous prescaler buffer register */
#define AWU_APR *(unsigned char*)0x50f1

/* AWU Timebase selection register */
#define AWU_TBR *(unsigned char*)0x50f2

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define BEEP_CSR *(unsigned char*)0x50f3

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define SPI_CR1 *(unsigned char*)0x5200

/* SPI Control Register 2 */
#define SPI_CR2 *(unsigned char*)0x5201

/* SPI Interrupt Control Register */
#define SPI_ICR *(unsigned char*)0x5202

/* SPI Status Register */
#define SPI_SR *(unsigned char*)0x5203

/* SPI Data Register */
#define SPI_DR *(unsigned char*)0x5204

/* SPI CRC Polynomial Register */
#define SPI_CRCPR *(unsigned char*)0x5205

/* SPI Rx CRC Register */
#define SPI_RXCRCR *(unsigned char*)0x5206

/* SPI Tx CRC Register */
#define SPI_TXCRCR *(unsigned char*)0x5207

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define I2C_CR1 *(unsigned char*)0x5210

/* I2C control register 2 */
#define I2C_CR2 *(unsigned char*)0x5211

/* I2C frequency register */
#define I2C_FREQR *(unsigned char*)0x5212

/* I2C Own address register low */
#define I2C_OARL *(unsigned char*)0x5213

/* I2C Own address register high */
#define I2C_OARH *(unsigned char*)0x5214

/* I2C data register */
#define I2C_DR *(unsigned char*)0x5216

/* I2C status register 1 */
#define I2C_SR1 *(unsigned char*)0x5217

/* I2C status register 2 */
#define I2C_SR2 *(unsigned char*)0x5218

/* I2C status register 3 */
#define I2C_SR3 *(unsigned char*)0x5219

/* I2C interrupt control register */
#define I2C_ITR *(unsigned char*)0x521a

/* I2C Clock control register low */
#define I2C_CCRL *(unsigned char*)0x521b

/* I2C Clock control register high */
#define I2C_CCRH *(unsigned char*)0x521c

/* I2C TRISE register */
#define I2C_TRISER *(unsigned char*)0x521d

/* I2C packet error checking register */
#define I2C_PECR *(unsigned char*)0x521e

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define UART1_SR *(unsigned char*)0x5230

/* UART1 Data Register */
#define UART1_DR *(unsigned char*)0x5231

/* UART1 Baud Rate Register 1 */
#define UART1_BRR1 *(unsigned char*)0x5232

/* UART1 Baud Rate Register 2 */
#define UART1_BRR2 *(unsigned char*)0x5233

/* UART1 Control Register 1 */
#define UART1_CR1 *(unsigned char*)0x5234

/* UART1 Control Register 2 */
#define UART1_CR2 *(unsigned char*)0x5235

/* UART1 Control Register 3 */
#define UART1_CR3 *(unsigned char*)0x5236

/* UART1 Control Register 4 */
#define UART1_CR4 *(unsigned char*)0x5237

/* UART1 Control Register 5 */
#define UART1_CR5 *(unsigned char*)0x5238

/* UART1 Guard time Register */
#define UART1_GTR *(unsigned char*)0x5239

/* UART1 Prescaler Register */
#define UART1_PSCR *(unsigned char*)0x523a

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define TIM1_CR1 *(unsigned char*)0x5250

/* TIM1 Control register 2 */
#define TIM1_CR2 *(unsigned char*)0x5251

/* TIM1 Slave Mode Control register */
#define TIM1_SMCR *(unsigned char*)0x5252

/* TIM1 external trigger register */
#define TIM1_ETR *(unsigned char*)0x5253

/* TIM1 Interrupt enable register */
#define TIM1_IER *(unsigned char*)0x5254

/* TIM1 Status register 1 */
#define TIM1_SR1 *(unsigned char*)0x5255

/* TIM1 Status register 2 */
#define TIM1_SR2 *(unsigned char*)0x5256

/* TIM1 Event Generation register */
#define TIM1_EGR *(unsigned char*)0x5257

/* TIM1 Capture/Compare mode register 1 */
#define TIM1_CCMR1 *(unsigned char*)0x5258

/* TIM1 Capture/Compare mode register 2 */
#define TIM1_CCMR2 *(unsigned char*)0x5259

/* TIM1 Capture/Compare mode register 3 */
#define TIM1_CCMR3 *(unsigned char*)0x525a

/* TIM1 Capture/Compare mode register 4 */
#define TIM1_CCMR4 *(unsigned char*)0x525b

/* TIM1 Capture/Compare enable register 1 */
#define TIM1_CCER1 *(unsigned char*)0x525c

/* TIM1 Capture/Compare enable register 2 */
#define TIM1_CCER2 *(unsigned char*)0x525d

/* TIM1 Counter */
#define TIM1_CNTR *(unsigned int*)0x525e
/* Data bits High */
#define TIM1_CNTRH *(unsigned char*)0x525e
/* Data bits Low */
#define TIM1_CNTRL *(unsigned char*)0x525f

/* TIM1 Prescaler register */
#define TIM1_PSCR *(unsigned int*)0x5260
/* Data bits High */
#define TIM1_PSCRH *(unsigned char*)0x5260
/* Data bits Low */
#define TIM1_PSCRL *(unsigned char*)0x5261

/* TIM1 Auto-reload register */
#define TIM1_ARR *(unsigned int*)0x5262
/* Data bits High */
#define TIM1_ARRH *(unsigned char*)0x5262
/* Data bits Low */
#define TIM1_ARRL *(unsigned char*)0x5263

/* TIM1 Repetition counter register */
#define TIM1_RCR *(unsigned char*)0x5264

/* TIM1 Capture/Compare register 1 */
#define TIM1_CCR1 *(unsigned int*)0x5265
/* Data bits High */
#define TIM1_CCR1H *(unsigned char*)0x5265
/* Data bits Low */
#define TIM1_CCR1L *(unsigned char*)0x5266

/* TIM1 Capture/Compare register 2 */
#define TIM1_CCR2 *(unsigned int*)0x5267
/* Data bits High */
#define TIM1_CCR2H *(unsigned char*)0x5267
/* Data bits Low */
#define TIM1_CCR2L *(unsigned char*)0x5268

/* TIM1 Capture/Compare register 3 */
#define TIM1_CCR3 *(unsigned int*)0x5269
/* Data bits High */
#define TIM1_CCR3H *(unsigned char*)0x5269
/* Data bits Low */
#define TIM1_CCR3L *(unsigned char*)0x526a

/* TIM1 Capture/Compare register 4 */
#define TIM1_CCR4 *(unsigned int*)0x526b
/* Data bits High */
#define TIM1_CCR4H *(unsigned char*)0x526b
/* Data bits Low */
#define TIM1_CCR4L *(unsigned char*)0x526c

/* TIM1 Break register */
#define TIM1_BKR *(unsigned char*)0x526d

/* TIM1 Dead-time register */
#define TIM1_DTR *(unsigned char*)0x526e

/* TIM1 Output idle state register */
#define TIM1_OISR *(unsigned char*)0x526f

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define TIM2_CR1 *(unsigned char*)0x5300

/* TIM2 Interrupt enable register */
#define TIM2_IER *(unsigned char*)0x5303

/* TIM2 Status register 1 */
#define TIM2_SR1 *(unsigned char*)0x5304

/* TIM2 Status register 2 */
#define TIM2_SR2 *(unsigned char*)0x5305

/* TIM2 Event Generation register */
#define TIM2_EGR *(unsigned char*)0x5306

/* TIM2 Capture/Compare mode register 1 */
#define TIM2_CCMR1 *(unsigned char*)0x5307

/* TIM2 Capture/Compare mode register 2 */
#define TIM2_CCMR2 *(unsigned char*)0x5308

/* TIM2 Capture/Compare mode register 3 */
#define TIM2_CCMR3 *(unsigned char*)0x5309

/* TIM2 Capture/Compare enable register 1 */
#define TIM2_CCER1 *(unsigned char*)0x530a

/* TIM2 Capture/Compare enable register 2 */
#define TIM2_CCER2 *(unsigned char*)0x530b

/* TIM2 Counter */
#define TIM2_CNTR *(unsigned int*)0x530c
/* Data bits High */
#define TIM2_CNTRH *(unsigned char*)0x530c
/* Data bits Low */
#define TIM2_CNTRL *(unsigned char*)0x530d

/* TIM2 Prescaler register */
#define TIM2_PSCR *(unsigned char*)0x530e

/* TIM2 Auto-reload register */
#define TIM2_ARR *(unsigned int*)0x530f
/* Data bits High */
#define TIM2_ARRH *(unsigned char*)0x530f
/* Data bits Low */
#define TIM2_ARRL *(unsigned char*)0x5310

/* TIM2 Capture/Compare register 1 */
#define TIM2_CCR1 *(unsigned int*)0x5311
/* Data bits High */
#define TIM2_CCR1H *(unsigned char*)0x5311
/* Data bits Low */
#define TIM2_CCR1L *(unsigned char*)0x5312

/* TIM2 Capture/Compare register 2 */
#define TIM2_CCR2 *(unsigned int*)0x5313
/* Data bits High */
#define TIM2_CCR2H *(unsigned char*)0x5313
/* Data bits Low */
#define TIM2_CCR2L *(unsigned char*)0x5314

/* TIM2 Capture/Compare register 3 */
#define TIM2_CCR3 *(unsigned int*)0x5315
/* Data bits High */
#define TIM2_CCR3H *(unsigned char*)0x5315
/* Data bits Low */
#define TIM2_CCR3L *(unsigned char*)0x5316

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define TIM4_CR1 *(unsigned char*)0x5340

/* TIM4 Interrupt enable register */
#define TIM4_IER *(unsigned char*)0x5343

/* TIM4 Status register */
#define TIM4_SR *(unsigned char*)0x5344

/* TIM4 Event Generation register */
#define TIM4_EGR *(unsigned char*)0x5345

/* TIM4 Counter */
#define TIM4_CNTR *(unsigned char*)0x5346

/* TIM4 Prescaler register */
#define TIM4_PSCR *(unsigned char*)0x5347

/* TIM4 Auto-reload register */
#define TIM4_ARR *(unsigned char*)0x5348

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
#define ADC_DB0R *(unsigned int*)0x53e0
/* Data Buffer register 0 High */
#define ADC_DB0RH *(unsigned char*)0x53e0
/* Data Buffer register 0 Low */
#define ADC_DB0RL *(unsigned char*)0x53e1

/* ADC Data buffer Register 1 */
#define ADC_DB1R *(unsigned int*)0x53e2
/* Data Buffer register 1 High */
#define ADC_DB1RH *(unsigned char*)0x53e2
/* Data Buffer register 1 Low */
#define ADC_DB1RL *(unsigned char*)0x53e3

/* ADC Data buffer Register 2 */
#define ADC_DB2R *(unsigned int*)0x53e4
/* Data Buffer register 2 High */
#define ADC_DB2RH *(unsigned char*)0x53e4
/* Data Buffer register 2 Low */
#define ADC_DB2RL *(unsigned char*)0x53e5

/* ADC Data buffer Register 3 */
#define ADC_DB3R *(unsigned int*)0x53e6
/* Data Buffer register 3 High */
#define ADC_DB3RH *(unsigned char*)0x53e6
/* Data Buffer register 3 Low */
#define ADC_DB3RL *(unsigned char*)0x53e7

/* ADC Data buffer Register 4 */
#define ADC_DB4R *(unsigned int*)0x53e8
/* Data Buffer register 4 High */
#define ADC_DB4RH *(unsigned char*)0x53e8
/* Data Buffer register 4 Low */
#define ADC_DB4RL *(unsigned char*)0x53e9

/* ADC Data buffer Register 5 */
#define ADC_DB5R *(unsigned int*)0x53ea
/* Data Buffer register 5 High */
#define ADC_DB5RH *(unsigned char*)0x53ea
/* Data Buffer register 5 Low */
#define ADC_DB5RL *(unsigned char*)0x53eb

/* ADC Data buffer Register 6 */
#define ADC_DB6R *(unsigned int*)0x53ec
/* Data Buffer register 6 High */
#define ADC_DB6RH *(unsigned char*)0x53ec
/* Data Buffer register 6 Low */
#define ADC_DB6RL *(unsigned char*)0x53ed

/* ADC Data buffer Register 7 */
#define ADC_DB7R *(unsigned int*)0x53ee
/* Data Buffer register 7 High */
#define ADC_DB7RH *(unsigned char*)0x53ee
/* Data Buffer register 7 Low */
#define ADC_DB7RL *(unsigned char*)0x53ef

/* ADC Data buffer Register 8 */
#define ADC_DB8R *(unsigned int*)0x53f0
/* Data Buffer register 8 High */
#define ADC_DB8RH *(unsigned char*)0x53f0
/* Data Buffer register 8 Low */
#define ADC_DB8RL *(unsigned char*)0x53f1

/* ADC Data buffer Register 9 */
#define ADC_DB9R *(unsigned int*)0x53f2
/* Data Buffer register 9 High */
#define ADC_DB9RH *(unsigned char*)0x53f2
/* Data Buffer register 9 Low */
#define ADC_DB9RL *(unsigned char*)0x53f3

/* ADC Control/Status Register */
#define ADC_CSR *(unsigned char*)0x5400

/* ADC Configuration Register 1 */
#define ADC_CR1 *(unsigned char*)0x5401

/* ADC Configuration Register 2 */
#define ADC_CR2 *(unsigned char*)0x5402

/* ADC Configuration Register 3 */
#define ADC_CR3 *(unsigned char*)0x5403

/* ADC Data Register */
#define ADC_DR *(unsigned int*)0x5404
/* Data bits High */
#define ADC_DRH *(unsigned char*)0x5404
/* Data bits Low */
#define ADC_DRL *(unsigned char*)0x5405

/* ADC Schmitt Trigger Disable Register */
#define ADC_TDR *(unsigned int*)0x5406
/* Schmitt trigger disable High */
#define ADC_TDRH *(unsigned char*)0x5406
/* Schmitt trigger disable Low */
#define ADC_TDRL *(unsigned char*)0x5407

/* ADC High Threshold Register */
#define ADC_HTR *(unsigned int*)0x5408
/* High Threshold Register High */
#define ADC_HTRH *(unsigned char*)0x5408
/* High Threshold Register Low */
#define ADC_HTRL *(unsigned char*)0x5409

/* ADC Low Threshold Register */
#define ADC_LTR *(unsigned int*)0x540a
/* Low Threshold Register High */
#define ADC_LTRH *(unsigned char*)0x540a
/* Low Threshold Register Low */
#define ADC_LTRL *(unsigned char*)0x540b

/* ADC Analog Watchdog Status Register */
#define ADC_AWSR *(unsigned int*)0x540c
/* Analog Watchdog Status register High */
#define ADC_AWSRH *(unsigned char*)0x540c
/* Analog Watchdog Status register Low */
#define ADC_AWSRL *(unsigned char*)0x540d

/* ADC Analog Watchdog Control Register */
#define ADC_AWCR *(unsigned int*)0x540e
/* Analog Watchdog Control register High */
#define ADC_AWCRH *(unsigned char*)0x540e
/* Analog Watchdog Control register Low */
#define ADC_AWCRL *(unsigned char*)0x540f

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define CFG_GCR *(unsigned char*)0x7f60

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define ITC_SPR1 *(unsigned char*)0x7f70

/* Interrupt Software priority register 2 */
#define ITC_SPR2 *(unsigned char*)0x7f71

/* Interrupt Software priority register 3 */
#define ITC_SPR3 *(unsigned char*)0x7f72

/* Interrupt Software priority register 4 */
#define ITC_SPR4 *(unsigned char*)0x7f73

/* Interrupt Software priority register 5 */
#define ITC_SPR5 *(unsigned char*)0x7f74

/* Interrupt Software priority register 6 */
#define ITC_SPR6 *(unsigned char*)0x7f75

/* Interrupt Software priority register 7 */
#define ITC_SPR7 *(unsigned char*)0x7f76

/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define pa_odr_bset(X) __asm bset 0x5000,X __endasm

/* Port A input pin value register */
#define pa_idr_bset(X) __asm bset 0x5001,X __endasm

/* Port A data direction register */
#define pa_ddr_bset(X) __asm bset 0x5002,X __endasm

/* Port A control register 1 */
#define pa_cr1_bset(X) __asm bset 0x5003,X __endasm

/* Port A control register 2 */
#define pa_cr2_bset(X) __asm bset 0x5004,X __endasm

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define pb_odr_bset(X) __asm bset 0x5005,X __endasm

/* Port B input pin value register */
#define pb_idr_bset(X) __asm bset 0x5006,X __endasm

/* Port B data direction register */
#define pb_ddr_bset(X) __asm bset 0x5007,X __endasm

/* Port B control register 1 */
#define pb_cr1_bset(X) __asm bset 0x5008,X __endasm

/* Port B control register 2 */
#define pb_cr2_bset(X) __asm bset 0x5009,X __endasm

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define pc_odr_bset(X) __asm bset 0x500a,X __endasm

/* Port C input pin value register */
#define pc_idr_bset(X) __asm bset 0x500b,X __endasm

/* Port C data direction register */
#define pc_ddr_bset(X) __asm bset 0x500c,X __endasm

/* Port C control register 1 */
#define pc_cr1_bset(X) __asm bset 0x500d,X __endasm

/* Port C control register 2 */
#define pc_cr2_bset(X) __asm bset 0x500e,X __endasm

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define pd_odr_bset(X) __asm bset 0x500f,X __endasm

/* Port D input pin value register */
#define pd_idr_bset(X) __asm bset 0x5010,X __endasm

/* Port D data direction register */
#define pd_ddr_bset(X) __asm bset 0x5011,X __endasm

/* Port D control register 1 */
#define pd_cr1_bset(X) __asm bset 0x5012,X __endasm

/* Port D control register 2 */
#define pd_cr2_bset(X) __asm bset 0x5013,X __endasm

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define flash_cr1_bset(X) __asm bset 0x505a,X __endasm

/* Flash control register 2 */
#define flash_cr2_bset(X) __asm bset 0x505b,X __endasm

/* Flash complementary control register 2 */
#define flash_ncr2_bset(X) __asm bset 0x505c,X __endasm

/* Flash protection register */
#define flash_fpr_bset(X) __asm bset 0x505d,X __endasm

/* Flash complementary protection register */
#define flash_nfpr_bset(X) __asm bset 0x505e,X __endasm

/* Flash in-application programming status register */
#define flash_iapsr_bset(X) __asm bset 0x505f,X __endasm

/* Flash Program memory unprotection register */
#define flash_pukr_bset(X) __asm bset 0x5062,X __endasm

/* Data EEPROM unprotection register */
#define flash_dukr_bset(X) __asm bset 0x5064,X __endasm

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define exti_cr1_bset(X) __asm bset 0x50a0,X __endasm

/* External interrupt control register 2 */
#define exti_cr2_bset(X) __asm bset 0x50a1,X __endasm

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define rst_sr_bset(X) __asm bset 0x50b3,X __endasm

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define clk_ickr_bset(X) __asm bset 0x50c0,X __endasm

/* External clock control register */
#define clk_eckr_bset(X) __asm bset 0x50c1,X __endasm

/* Clock master status register */
#define clk_cmsr_bset(X) __asm bset 0x50c3,X __endasm

/* Clock master switch register */
#define clk_swr_bset(X) __asm bset 0x50c4,X __endasm

/* Clock switch control register */
#define clk_swcr_bset(X) __asm bset 0x50c5,X __endasm

/* Clock divider register */
#define clk_ckdivr_bset(X) __asm bset 0x50c6,X __endasm

/* Peripheral clock gating register 1 */
#define clk_pckenr1_bset(X) __asm bset 0x50c7,X __endasm

/* Clock security system register */
#define clk_cssr_bset(X) __asm bset 0x50c8,X __endasm

/* Configurable clock control register */
#define clk_ccor_bset(X) __asm bset 0x50c9,X __endasm

/* Peripheral clock gating register 2 */
#define clk_pckenr2_bset(X) __asm bset 0x50ca,X __endasm

/* CAN clock control register */
#define clk_canccr_bset(X) __asm bset 0x50cb,X __endasm

/* HSI clock calibration trimming register */
#define clk_hsitrimr_bset(X) __asm bset 0x50cc,X __endasm

/* SWIM clock control register */
#define clk_swimccr_bset(X) __asm bset 0x50cd,X __endasm

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define wwdg_cr_bset(X) __asm bset 0x50d1,X __endasm

/* WWDR Window Register */
#define wwdg_wr_bset(X) __asm bset 0x50d2,X __endasm

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define iwdg_kr_bset(X) __asm bset 0x50e0,X __endasm

/* IWDG Prescaler Register */
#define iwdg_pr_bset(X) __asm bset 0x50e1,X __endasm

/* IWDG Reload Register */
#define iwdg_rlr_bset(X) __asm bset 0x50e2,X __endasm

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define awu_csr_bset(X) __asm bset 0x50f0,X __endasm

/* AWU asynchronous prescaler buffer register */
#define awu_apr_bset(X) __asm bset 0x50f1,X __endasm

/* AWU Timebase selection register */
#define awu_tbr_bset(X) __asm bset 0x50f2,X __endasm

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define beep_csr_bset(X) __asm bset 0x50f3,X __endasm

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define spi_cr1_bset(X) __asm bset 0x5200,X __endasm

/* SPI Control Register 2 */
#define spi_cr2_bset(X) __asm bset 0x5201,X __endasm

/* SPI Interrupt Control Register */
#define spi_icr_bset(X) __asm bset 0x5202,X __endasm

/* SPI Status Register */
#define spi_sr_bset(X) __asm bset 0x5203,X __endasm

/* SPI Data Register */
#define spi_dr_bset(X) __asm bset 0x5204,X __endasm

/* SPI CRC Polynomial Register */
#define spi_crcpr_bset(X) __asm bset 0x5205,X __endasm

/* SPI Rx CRC Register */
#define spi_rxcrcr_bset(X) __asm bset 0x5206,X __endasm

/* SPI Tx CRC Register */
#define spi_txcrcr_bset(X) __asm bset 0x5207,X __endasm

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define i2c_cr1_bset(X) __asm bset 0x5210,X __endasm

/* I2C control register 2 */
#define i2c_cr2_bset(X) __asm bset 0x5211,X __endasm

/* I2C frequency register */
#define i2c_freqr_bset(X) __asm bset 0x5212,X __endasm

/* I2C Own address register low */
#define i2c_oarl_bset(X) __asm bset 0x5213,X __endasm

/* I2C Own address register high */
#define i2c_oarh_bset(X) __asm bset 0x5214,X __endasm

/* I2C data register */
#define i2c_dr_bset(X) __asm bset 0x5216,X __endasm

/* I2C status register 1 */
#define i2c_sr1_bset(X) __asm bset 0x5217,X __endasm

/* I2C status register 2 */
#define i2c_sr2_bset(X) __asm bset 0x5218,X __endasm

/* I2C status register 3 */
#define i2c_sr3_bset(X) __asm bset 0x5219,X __endasm

/* I2C interrupt control register */
#define i2c_itr_bset(X) __asm bset 0x521a,X __endasm

/* I2C Clock control register low */
#define i2c_ccrl_bset(X) __asm bset 0x521b,X __endasm

/* I2C Clock control register high */
#define i2c_ccrh_bset(X) __asm bset 0x521c,X __endasm

/* I2C TRISE register */
#define i2c_triser_bset(X) __asm bset 0x521d,X __endasm

/* I2C packet error checking register */
#define i2c_pecr_bset(X) __asm bset 0x521e,X __endasm

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define uart1_sr_bset(X) __asm bset 0x5230,X __endasm

/* UART1 Data Register */
#define uart1_dr_bset(X) __asm bset 0x5231,X __endasm

/* UART1 Baud Rate Register 1 */
#define uart1_brr1_bset(X) __asm bset 0x5232,X __endasm

/* UART1 Baud Rate Register 2 */
#define uart1_brr2_bset(X) __asm bset 0x5233,X __endasm

/* UART1 Control Register 1 */
#define uart1_cr1_bset(X) __asm bset 0x5234,X __endasm

/* UART1 Control Register 2 */
#define uart1_cr2_bset(X) __asm bset 0x5235,X __endasm

/* UART1 Control Register 3 */
#define uart1_cr3_bset(X) __asm bset 0x5236,X __endasm

/* UART1 Control Register 4 */
#define uart1_cr4_bset(X) __asm bset 0x5237,X __endasm

/* UART1 Control Register 5 */
#define uart1_cr5_bset(X) __asm bset 0x5238,X __endasm

/* UART1 Guard time Register */
#define uart1_gtr_bset(X) __asm bset 0x5239,X __endasm

/* UART1 Prescaler Register */
#define uart1_pscr_bset(X) __asm bset 0x523a,X __endasm

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define tim1_cr1_bset(X) __asm bset 0x5250,X __endasm

/* TIM1 Control register 2 */
#define tim1_cr2_bset(X) __asm bset 0x5251,X __endasm

/* TIM1 Slave Mode Control register */
#define tim1_smcr_bset(X) __asm bset 0x5252,X __endasm

/* TIM1 external trigger register */
#define tim1_etr_bset(X) __asm bset 0x5253,X __endasm

/* TIM1 Interrupt enable register */
#define tim1_ier_bset(X) __asm bset 0x5254,X __endasm

/* TIM1 Status register 1 */
#define tim1_sr1_bset(X) __asm bset 0x5255,X __endasm

/* TIM1 Status register 2 */
#define tim1_sr2_bset(X) __asm bset 0x5256,X __endasm

/* TIM1 Event Generation register */
#define tim1_egr_bset(X) __asm bset 0x5257,X __endasm

/* TIM1 Capture/Compare mode register 1 */
#define tim1_ccmr1_bset(X) __asm bset 0x5258,X __endasm

/* TIM1 Capture/Compare mode register 2 */
#define tim1_ccmr2_bset(X) __asm bset 0x5259,X __endasm

/* TIM1 Capture/Compare mode register 3 */
#define tim1_ccmr3_bset(X) __asm bset 0x525a,X __endasm

/* TIM1 Capture/Compare mode register 4 */
#define tim1_ccmr4_bset(X) __asm bset 0x525b,X __endasm

/* TIM1 Capture/Compare enable register 1 */
#define tim1_ccer1_bset(X) __asm bset 0x525c,X __endasm

/* TIM1 Capture/Compare enable register 2 */
#define tim1_ccer2_bset(X) __asm bset 0x525d,X __endasm

/* TIM1 Counter */
/* Data bits High */
#define tim1_cntrh_bset(X) __asm bset 0x525e,X __endasm
/* Data bits Low */
#define tim1_cntrl_bset(X) __asm bset 0x525f,X __endasm

/* TIM1 Prescaler register */
/* Data bits High */
#define tim1_pscrh_bset(X) __asm bset 0x5260,X __endasm
/* Data bits Low */
#define tim1_pscrl_bset(X) __asm bset 0x5261,X __endasm

/* TIM1 Auto-reload register */
/* Data bits High */
#define tim1_arrh_bset(X) __asm bset 0x5262,X __endasm
/* Data bits Low */
#define tim1_arrl_bset(X) __asm bset 0x5263,X __endasm

/* TIM1 Repetition counter register */
#define tim1_rcr_bset(X) __asm bset 0x5264,X __endasm

/* TIM1 Capture/Compare register 1 */
/* Data bits High */
#define tim1_ccr1h_bset(X) __asm bset 0x5265,X __endasm
/* Data bits Low */
#define tim1_ccr1l_bset(X) __asm bset 0x5266,X __endasm

/* TIM1 Capture/Compare register 2 */
/* Data bits High */
#define tim1_ccr2h_bset(X) __asm bset 0x5267,X __endasm
/* Data bits Low */
#define tim1_ccr2l_bset(X) __asm bset 0x5268,X __endasm

/* TIM1 Capture/Compare register 3 */
/* Data bits High */
#define tim1_ccr3h_bset(X) __asm bset 0x5269,X __endasm
/* Data bits Low */
#define tim1_ccr3l_bset(X) __asm bset 0x526a,X __endasm

/* TIM1 Capture/Compare register 4 */
/* Data bits High */
#define tim1_ccr4h_bset(X) __asm bset 0x526b,X __endasm
/* Data bits Low */
#define tim1_ccr4l_bset(X) __asm bset 0x526c,X __endasm

/* TIM1 Break register */
#define tim1_bkr_bset(X) __asm bset 0x526d,X __endasm

/* TIM1 Dead-time register */
#define tim1_dtr_bset(X) __asm bset 0x526e,X __endasm

/* TIM1 Output idle state register */
#define tim1_oisr_bset(X) __asm bset 0x526f,X __endasm

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define tim2_cr1_bset(X) __asm bset 0x5300,X __endasm

/* TIM2 Interrupt enable register */
#define tim2_ier_bset(X) __asm bset 0x5303,X __endasm

/* TIM2 Status register 1 */
#define tim2_sr1_bset(X) __asm bset 0x5304,X __endasm

/* TIM2 Status register 2 */
#define tim2_sr2_bset(X) __asm bset 0x5305,X __endasm

/* TIM2 Event Generation register */
#define tim2_egr_bset(X) __asm bset 0x5306,X __endasm

/* TIM2 Capture/Compare mode register 1 */
#define tim2_ccmr1_bset(X) __asm bset 0x5307,X __endasm

/* TIM2 Capture/Compare mode register 2 */
#define tim2_ccmr2_bset(X) __asm bset 0x5308,X __endasm

/* TIM2 Capture/Compare mode register 3 */
#define tim2_ccmr3_bset(X) __asm bset 0x5309,X __endasm

/* TIM2 Capture/Compare enable register 1 */
#define tim2_ccer1_bset(X) __asm bset 0x530a,X __endasm

/* TIM2 Capture/Compare enable register 2 */
#define tim2_ccer2_bset(X) __asm bset 0x530b,X __endasm

/* TIM2 Counter */
/* Data bits High */
#define tim2_cntrh_bset(X) __asm bset 0x530c,X __endasm
/* Data bits Low */
#define tim2_cntrl_bset(X) __asm bset 0x530d,X __endasm

/* TIM2 Prescaler register */
#define tim2_pscr_bset(X) __asm bset 0x530e,X __endasm

/* TIM2 Auto-reload register */
/* Data bits High */
#define tim2_arrh_bset(X) __asm bset 0x530f,X __endasm
/* Data bits Low */
#define tim2_arrl_bset(X) __asm bset 0x5310,X __endasm

/* TIM2 Capture/Compare register 1 */
/* Data bits High */
#define tim2_ccr1h_bset(X) __asm bset 0x5311,X __endasm
/* Data bits Low */
#define tim2_ccr1l_bset(X) __asm bset 0x5312,X __endasm

/* TIM2 Capture/Compare register 2 */
/* Data bits High */
#define tim2_ccr2h_bset(X) __asm bset 0x5313,X __endasm
/* Data bits Low */
#define tim2_ccr2l_bset(X) __asm bset 0x5314,X __endasm

/* TIM2 Capture/Compare register 3 */
/* Data bits High */
#define tim2_ccr3h_bset(X) __asm bset 0x5315,X __endasm
/* Data bits Low */
#define tim2_ccr3l_bset(X) __asm bset 0x5316,X __endasm

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define tim4_cr1_bset(X) __asm bset 0x5340,X __endasm

/* TIM4 Interrupt enable register */
#define tim4_ier_bset(X) __asm bset 0x5343,X __endasm

/* TIM4 Status register */
#define tim4_sr_bset(X) __asm bset 0x5344,X __endasm

/* TIM4 Event Generation register */
#define tim4_egr_bset(X) __asm bset 0x5345,X __endasm

/* TIM4 Counter */
#define tim4_cntr_bset(X) __asm bset 0x5346,X __endasm

/* TIM4 Prescaler register */
#define tim4_pscr_bset(X) __asm bset 0x5347,X __endasm

/* TIM4 Auto-reload register */
#define tim4_arr_bset(X) __asm bset 0x5348,X __endasm

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
/* Data Buffer register 0 High */
#define adc_db0rh_bset(X) __asm bset 0x53e0,X __endasm
/* Data Buffer register 0 Low */
#define adc_db0rl_bset(X) __asm bset 0x53e1,X __endasm

/* ADC Data buffer Register 1 */
/* Data Buffer register 1 High */
#define adc_db1rh_bset(X) __asm bset 0x53e2,X __endasm
/* Data Buffer register 1 Low */
#define adc_db1rl_bset(X) __asm bset 0x53e3,X __endasm

/* ADC Data buffer Register 2 */
/* Data Buffer register 2 High */
#define adc_db2rh_bset(X) __asm bset 0x53e4,X __endasm
/* Data Buffer register 2 Low */
#define adc_db2rl_bset(X) __asm bset 0x53e5,X __endasm

/* ADC Data buffer Register 3 */
/* Data Buffer register 3 High */
#define adc_db3rh_bset(X) __asm bset 0x53e6,X __endasm
/* Data Buffer register 3 Low */
#define adc_db3rl_bset(X) __asm bset 0x53e7,X __endasm

/* ADC Data buffer Register 4 */
/* Data Buffer register 4 High */
#define adc_db4rh_bset(X) __asm bset 0x53e8,X __endasm
/* Data Buffer register 4 Low */
#define adc_db4rl_bset(X) __asm bset 0x53e9,X __endasm

/* ADC Data buffer Register 5 */
/* Data Buffer register 5 High */
#define adc_db5rh_bset(X) __asm bset 0x53ea,X __endasm
/* Data Buffer register 5 Low */
#define adc_db5rl_bset(X) __asm bset 0x53eb,X __endasm

/* ADC Data buffer Register 6 */
/* Data Buffer register 6 High */
#define adc_db6rh_bset(X) __asm bset 0x53ec,X __endasm
/* Data Buffer register 6 Low */
#define adc_db6rl_bset(X) __asm bset 0x53ed,X __endasm

/* ADC Data buffer Register 7 */
/* Data Buffer register 7 High */
#define adc_db7rh_bset(X) __asm bset 0x53ee,X __endasm
/* Data Buffer register 7 Low */
#define adc_db7rl_bset(X) __asm bset 0x53ef,X __endasm

/* ADC Data buffer Register 8 */
/* Data Buffer register 8 High */
#define adc_db8rh_bset(X) __asm bset 0x53f0,X __endasm
/* Data Buffer register 8 Low */
#define adc_db8rl_bset(X) __asm bset 0x53f1,X __endasm

/* ADC Data buffer Register 9 */
/* Data Buffer register 9 High */
#define adc_db9rh_bset(X) __asm bset 0x53f2,X __endasm
/* Data Buffer register 9 Low */
#define adc_db9rl_bset(X) __asm bset 0x53f3,X __endasm

/* ADC Control/Status Register */
#define adc_csr_bset(X) __asm bset 0x5400,X __endasm

/* ADC Configuration Register 1 */
#define adc_cr1_bset(X) __asm bset 0x5401,X __endasm

/* ADC Configuration Register 2 */
#define adc_cr2_bset(X) __asm bset 0x5402,X __endasm

/* ADC Configuration Register 3 */
#define adc_cr3_bset(X) __asm bset 0x5403,X __endasm

/* ADC Data Register */
/* Data bits High */
#define adc_drh_bset(X) __asm bset 0x5404,X __endasm
/* Data bits Low */
#define adc_drl_bset(X) __asm bset 0x5405,X __endasm

/* ADC Schmitt Trigger Disable Register */
/* Schmitt trigger disable High */
#define adc_tdrh_bset(X) __asm bset 0x5406,X __endasm
/* Schmitt trigger disable Low */
#define adc_tdrl_bset(X) __asm bset 0x5407,X __endasm

/* ADC High Threshold Register */
/* High Threshold Register High */
#define adc_htrh_bset(X) __asm bset 0x5408,X __endasm
/* High Threshold Register Low */
#define adc_htrl_bset(X) __asm bset 0x5409,X __endasm

/* ADC Low Threshold Register */
/* Low Threshold Register High */
#define adc_ltrh_bset(X) __asm bset 0x540a,X __endasm
/* Low Threshold Register Low */
#define adc_ltrl_bset(X) __asm bset 0x540b,X __endasm

/* ADC Analog Watchdog Status Register */
/* Analog Watchdog Status register High */
#define adc_awsrh_bset(X) __asm bset 0x540c,X __endasm
/* Analog Watchdog Status register Low */
#define adc_awsrl_bset(X) __asm bset 0x540d,X __endasm

/* ADC Analog Watchdog Control Register */
/* Analog Watchdog Control register High */
#define adc_awcrh_bset(X) __asm bset 0x540e,X __endasm
/* Analog Watchdog Control register Low */
#define adc_awcrl_bset(X) __asm bset 0x540f,X __endasm

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define cfg_gcr_bset(X) __asm bset 0x7f60,X __endasm

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define itc_spr1_bset(X) __asm bset 0x7f70,X __endasm

/* Interrupt Software priority register 2 */
#define itc_spr2_bset(X) __asm bset 0x7f71,X __endasm

/* Interrupt Software priority register 3 */
#define itc_spr3_bset(X) __asm bset 0x7f72,X __endasm

/* Interrupt Software priority register 4 */
#define itc_spr4_bset(X) __asm bset 0x7f73,X __endasm

/* Interrupt Software priority register 5 */
#define itc_spr5_bset(X) __asm bset 0x7f74,X __endasm

/* Interrupt Software priority register 6 */
#define itc_spr6_bset(X) __asm bset 0x7f75,X __endasm

/* Interrupt Software priority register 7 */
#define itc_spr7_bset(X) __asm bset 0x7f76,X __endasm
/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define pa_odr_bres(X) __asm bres 0x5000,X __endasm

/* Port A input pin value register */
#define pa_idr_bres(X) __asm bres 0x5001,X __endasm

/* Port A data direction register */
#define pa_ddr_bres(X) __asm bres 0x5002,X __endasm

/* Port A control register 1 */
#define pa_cr1_bres(X) __asm bres 0x5003,X __endasm

/* Port A control register 2 */
#define pa_cr2_bres(X) __asm bres 0x5004,X __endasm

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define pb_odr_bres(X) __asm bres 0x5005,X __endasm

/* Port B input pin value register */
#define pb_idr_bres(X) __asm bres 0x5006,X __endasm

/* Port B data direction register */
#define pb_ddr_bres(X) __asm bres 0x5007,X __endasm

/* Port B control register 1 */
#define pb_cr1_bres(X) __asm bres 0x5008,X __endasm

/* Port B control register 2 */
#define pb_cr2_bres(X) __asm bres 0x5009,X __endasm

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define pc_odr_bres(X) __asm bres 0x500a,X __endasm

/* Port C input pin value register */
#define pc_idr_bres(X) __asm bres 0x500b,X __endasm

/* Port C data direction register */
#define pc_ddr_bres(X) __asm bres 0x500c,X __endasm

/* Port C control register 1 */
#define pc_cr1_bres(X) __asm bres 0x500d,X __endasm

/* Port C control register 2 */
#define pc_cr2_bres(X) __asm bres 0x500e,X __endasm

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define pd_odr_bres(X) __asm bres 0x500f,X __endasm

/* Port D input pin value register */
#define pd_idr_bres(X) __asm bres 0x5010,X __endasm

/* Port D data direction register */
#define pd_ddr_bres(X) __asm bres 0x5011,X __endasm

/* Port D control register 1 */
#define pd_cr1_bres(X) __asm bres 0x5012,X __endasm

/* Port D control register 2 */
#define pd_cr2_bres(X) __asm bres 0x5013,X __endasm

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define flash_cr1_bres(X) __asm bres 0x505a,X __endasm

/* Flash control register 2 */
#define flash_cr2_bres(X) __asm bres 0x505b,X __endasm

/* Flash complementary control register 2 */
#define flash_ncr2_bres(X) __asm bres 0x505c,X __endasm

/* Flash protection register */
#define flash_fpr_bres(X) __asm bres 0x505d,X __endasm

/* Flash complementary protection register */
#define flash_nfpr_bres(X) __asm bres 0x505e,X __endasm

/* Flash in-application programming status register */
#define flash_iapsr_bres(X) __asm bres 0x505f,X __endasm

/* Flash Program memory unprotection register */
#define flash_pukr_bres(X) __asm bres 0x5062,X __endasm

/* Data EEPROM unprotection register */
#define flash_dukr_bres(X) __asm bres 0x5064,X __endasm

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define exti_cr1_bres(X) __asm bres 0x50a0,X __endasm

/* External interrupt control register 2 */
#define exti_cr2_bres(X) __asm bres 0x50a1,X __endasm

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define rst_sr_bres(X) __asm bres 0x50b3,X __endasm

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define clk_ickr_bres(X) __asm bres 0x50c0,X __endasm

/* External clock control register */
#define clk_eckr_bres(X) __asm bres 0x50c1,X __endasm

/* Clock master status register */
#define clk_cmsr_bres(X) __asm bres 0x50c3,X __endasm

/* Clock master switch register */
#define clk_swr_bres(X) __asm bres 0x50c4,X __endasm

/* Clock switch control register */
#define clk_swcr_bres(X) __asm bres 0x50c5,X __endasm

/* Clock divider register */
#define clk_ckdivr_bres(X) __asm bres 0x50c6,X __endasm

/* Peripheral clock gating register 1 */
#define clk_pckenr1_bres(X) __asm bres 0x50c7,X __endasm

/* Clock security system register */
#define clk_cssr_bres(X) __asm bres 0x50c8,X __endasm

/* Configurable clock control register */
#define clk_ccor_bres(X) __asm bres 0x50c9,X __endasm

/* Peripheral clock gating register 2 */
#define clk_pckenr2_bres(X) __asm bres 0x50ca,X __endasm

/* CAN clock control register */
#define clk_canccr_bres(X) __asm bres 0x50cb,X __endasm

/* HSI clock calibration trimming register */
#define clk_hsitrimr_bres(X) __asm bres 0x50cc,X __endasm

/* SWIM clock control register */
#define clk_swimccr_bres(X) __asm bres 0x50cd,X __endasm

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define wwdg_cr_bres(X) __asm bres 0x50d1,X __endasm

/* WWDR Window Register */
#define wwdg_wr_bres(X) __asm bres 0x50d2,X __endasm

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define iwdg_kr_bres(X) __asm bres 0x50e0,X __endasm

/* IWDG Prescaler Register */
#define iwdg_pr_bres(X) __asm bres 0x50e1,X __endasm

/* IWDG Reload Register */
#define iwdg_rlr_bres(X) __asm bres 0x50e2,X __endasm

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define awu_csr_bres(X) __asm bres 0x50f0,X __endasm

/* AWU asynchronous prescaler buffer register */
#define awu_apr_bres(X) __asm bres 0x50f1,X __endasm

/* AWU Timebase selection register */
#define awu_tbr_bres(X) __asm bres 0x50f2,X __endasm

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define beep_csr_bres(X) __asm bres 0x50f3,X __endasm

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define spi_cr1_bres(X) __asm bres 0x5200,X __endasm

/* SPI Control Register 2 */
#define spi_cr2_bres(X) __asm bres 0x5201,X __endasm

/* SPI Interrupt Control Register */
#define spi_icr_bres(X) __asm bres 0x5202,X __endasm

/* SPI Status Register */
#define spi_sr_bres(X) __asm bres 0x5203,X __endasm

/* SPI Data Register */
#define spi_dr_bres(X) __asm bres 0x5204,X __endasm

/* SPI CRC Polynomial Register */
#define spi_crcpr_bres(X) __asm bres 0x5205,X __endasm

/* SPI Rx CRC Register */
#define spi_rxcrcr_bres(X) __asm bres 0x5206,X __endasm

/* SPI Tx CRC Register */
#define spi_txcrcr_bres(X) __asm bres 0x5207,X __endasm

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define i2c_cr1_bres(X) __asm bres 0x5210,X __endasm

/* I2C control register 2 */
#define i2c_cr2_bres(X) __asm bres 0x5211,X __endasm

/* I2C frequency register */
#define i2c_freqr_bres(X) __asm bres 0x5212,X __endasm

/* I2C Own address register low */
#define i2c_oarl_bres(X) __asm bres 0x5213,X __endasm

/* I2C Own address register high */
#define i2c_oarh_bres(X) __asm bres 0x5214,X __endasm

/* I2C data register */
#define i2c_dr_bres(X) __asm bres 0x5216,X __endasm

/* I2C status register 1 */
#define i2c_sr1_bres(X) __asm bres 0x5217,X __endasm

/* I2C status register 2 */
#define i2c_sr2_bres(X) __asm bres 0x5218,X __endasm

/* I2C status register 3 */
#define i2c_sr3_bres(X) __asm bres 0x5219,X __endasm

/* I2C interrupt control register */
#define i2c_itr_bres(X) __asm bres 0x521a,X __endasm

/* I2C Clock control register low */
#define i2c_ccrl_bres(X) __asm bres 0x521b,X __endasm

/* I2C Clock control register high */
#define i2c_ccrh_bres(X) __asm bres 0x521c,X __endasm

/* I2C TRISE register */
#define i2c_triser_bres(X) __asm bres 0x521d,X __endasm

/* I2C packet error checking register */
#define i2c_pecr_bres(X) __asm bres 0x521e,X __endasm

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define uart1_sr_bres(X) __asm bres 0x5230,X __endasm

/* UART1 Data Register */
#define uart1_dr_bres(X) __asm bres 0x5231,X __endasm

/* UART1 Baud Rate Register 1 */
#define uart1_brr1_bres(X) __asm bres 0x5232,X __endasm

/* UART1 Baud Rate Register 2 */
#define uart1_brr2_bres(X) __asm bres 0x5233,X __endasm

/* UART1 Control Register 1 */
#define uart1_cr1_bres(X) __asm bres 0x5234,X __endasm

/* UART1 Control Register 2 */
#define uart1_cr2_bres(X) __asm bres 0x5235,X __endasm

/* UART1 Control Register 3 */
#define uart1_cr3_bres(X) __asm bres 0x5236,X __endasm

/* UART1 Control Register 4 */
#define uart1_cr4_bres(X) __asm bres 0x5237,X __endasm

/* UART1 Control Register 5 */
#define uart1_cr5_bres(X) __asm bres 0x5238,X __endasm

/* UART1 Guard time Register */
#define uart1_gtr_bres(X) __asm bres 0x5239,X __endasm

/* UART1 Prescaler Register */
#define uart1_pscr_bres(X) __asm bres 0x523a,X __endasm

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define tim1_cr1_bres(X) __asm bres 0x5250,X __endasm

/* TIM1 Control register 2 */
#define tim1_cr2_bres(X) __asm bres 0x5251,X __endasm

/* TIM1 Slave Mode Control register */
#define tim1_smcr_bres(X) __asm bres 0x5252,X __endasm

/* TIM1 external trigger register */
#define tim1_etr_bres(X) __asm bres 0x5253,X __endasm

/* TIM1 Interrupt enable register */
#define tim1_ier_bres(X) __asm bres 0x5254,X __endasm

/* TIM1 Status register 1 */
#define tim1_sr1_bres(X) __asm bres 0x5255,X __endasm

/* TIM1 Status register 2 */
#define tim1_sr2_bres(X) __asm bres 0x5256,X __endasm

/* TIM1 Event Generation register */
#define tim1_egr_bres(X) __asm bres 0x5257,X __endasm

/* TIM1 Capture/Compare mode register 1 */
#define tim1_ccmr1_bres(X) __asm bres 0x5258,X __endasm

/* TIM1 Capture/Compare mode register 2 */
#define tim1_ccmr2_bres(X) __asm bres 0x5259,X __endasm

/* TIM1 Capture/Compare mode register 3 */
#define tim1_ccmr3_bres(X) __asm bres 0x525a,X __endasm

/* TIM1 Capture/Compare mode register 4 */
#define tim1_ccmr4_bres(X) __asm bres 0x525b,X __endasm

/* TIM1 Capture/Compare enable register 1 */
#define tim1_ccer1_bres(X) __asm bres 0x525c,X __endasm

/* TIM1 Capture/Compare enable register 2 */
#define tim1_ccer2_bres(X) __asm bres 0x525d,X __endasm

/* TIM1 Counter */
/* Data bits High */
#define tim1_cntrh_bres(X) __asm bres 0x525e,X __endasm
/* Data bits Low */
#define tim1_cntrl_bres(X) __asm bres 0x525f,X __endasm

/* TIM1 Prescaler register */
/* Data bits High */
#define tim1_pscrh_bres(X) __asm bres 0x5260,X __endasm
/* Data bits Low */
#define tim1_pscrl_bres(X) __asm bres 0x5261,X __endasm

/* TIM1 Auto-reload register */
/* Data bits High */
#define tim1_arrh_bres(X) __asm bres 0x5262,X __endasm
/* Data bits Low */
#define tim1_arrl_bres(X) __asm bres 0x5263,X __endasm

/* TIM1 Repetition counter register */
#define tim1_rcr_bres(X) __asm bres 0x5264,X __endasm

/* TIM1 Capture/Compare register 1 */
/* Data bits High */
#define tim1_ccr1h_bres(X) __asm bres 0x5265,X __endasm
/* Data bits Low */
#define tim1_ccr1l_bres(X) __asm bres 0x5266,X __endasm

/* TIM1 Capture/Compare register 2 */
/* Data bits High */
#define tim1_ccr2h_bres(X) __asm bres 0x5267,X __endasm
/* Data bits Low */
#define tim1_ccr2l_bres(X) __asm bres 0x5268,X __endasm

/* TIM1 Capture/Compare register 3 */
/* Data bits High */
#define tim1_ccr3h_bres(X) __asm bres 0x5269,X __endasm
/* Data bits Low */
#define tim1_ccr3l_bres(X) __asm bres 0x526a,X __endasm

/* TIM1 Capture/Compare register 4 */
/* Data bits High */
#define tim1_ccr4h_bres(X) __asm bres 0x526b,X __endasm
/* Data bits Low */
#define tim1_ccr4l_bres(X) __asm bres 0x526c,X __endasm

/* TIM1 Break register */
#define tim1_bkr_bres(X) __asm bres 0x526d,X __endasm

/* TIM1 Dead-time register */
#define tim1_dtr_bres(X) __asm bres 0x526e,X __endasm

/* TIM1 Output idle state register */
#define tim1_oisr_bres(X) __asm bres 0x526f,X __endasm

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define tim2_cr1_bres(X) __asm bres 0x5300,X __endasm

/* TIM2 Interrupt enable register */
#define tim2_ier_bres(X) __asm bres 0x5303,X __endasm

/* TIM2 Status register 1 */
#define tim2_sr1_bres(X) __asm bres 0x5304,X __endasm

/* TIM2 Status register 2 */
#define tim2_sr2_bres(X) __asm bres 0x5305,X __endasm

/* TIM2 Event Generation register */
#define tim2_egr_bres(X) __asm bres 0x5306,X __endasm

/* TIM2 Capture/Compare mode register 1 */
#define tim2_ccmr1_bres(X) __asm bres 0x5307,X __endasm

/* TIM2 Capture/Compare mode register 2 */
#define tim2_ccmr2_bres(X) __asm bres 0x5308,X __endasm

/* TIM2 Capture/Compare mode register 3 */
#define tim2_ccmr3_bres(X) __asm bres 0x5309,X __endasm

/* TIM2 Capture/Compare enable register 1 */
#define tim2_ccer1_bres(X) __asm bres 0x530a,X __endasm

/* TIM2 Capture/Compare enable register 2 */
#define tim2_ccer2_bres(X) __asm bres 0x530b,X __endasm

/* TIM2 Counter */
/* Data bits High */
#define tim2_cntrh_bres(X) __asm bres 0x530c,X __endasm
/* Data bits Low */
#define tim2_cntrl_bres(X) __asm bres 0x530d,X __endasm

/* TIM2 Prescaler register */
#define tim2_pscr_bres(X) __asm bres 0x530e,X __endasm

/* TIM2 Auto-reload register */
/* Data bits High */
#define tim2_arrh_bres(X) __asm bres 0x530f,X __endasm
/* Data bits Low */
#define tim2_arrl_bres(X) __asm bres 0x5310,X __endasm

/* TIM2 Capture/Compare register 1 */
/* Data bits High */
#define tim2_ccr1h_bres(X) __asm bres 0x5311,X __endasm
/* Data bits Low */
#define tim2_ccr1l_bres(X) __asm bres 0x5312,X __endasm

/* TIM2 Capture/Compare register 2 */
/* Data bits High */
#define tim2_ccr2h_bres(X) __asm bres 0x5313,X __endasm
/* Data bits Low */
#define tim2_ccr2l_bres(X) __asm bres 0x5314,X __endasm

/* TIM2 Capture/Compare register 3 */
/* Data bits High */
#define tim2_ccr3h_bres(X) __asm bres 0x5315,X __endasm
/* Data bits Low */
#define tim2_ccr3l_bres(X) __asm bres 0x5316,X __endasm

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define tim4_cr1_bres(X) __asm bres 0x5340,X __endasm

/* TIM4 Interrupt enable register */
#define tim4_ier_bres(X) __asm bres 0x5343,X __endasm

/* TIM4 Status register */
#define tim4_sr_bres(X) __asm bres 0x5344,X __endasm

/* TIM4 Event Generation register */
#define tim4_egr_bres(X) __asm bres 0x5345,X __endasm

/* TIM4 Counter */
#define tim4_cntr_bres(X) __asm bres 0x5346,X __endasm

/* TIM4 Prescaler register */
#define tim4_pscr_bres(X) __asm bres 0x5347,X __endasm

/* TIM4 Auto-reload register */
#define tim4_arr_bres(X) __asm bres 0x5348,X __endasm

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
/* Data Buffer register 0 High */
#define adc_db0rh_bres(X) __asm bres 0x53e0,X __endasm
/* Data Buffer register 0 Low */
#define adc_db0rl_bres(X) __asm bres 0x53e1,X __endasm

/* ADC Data buffer Register 1 */
/* Data Buffer register 1 High */
#define adc_db1rh_bres(X) __asm bres 0x53e2,X __endasm
/* Data Buffer register 1 Low */
#define adc_db1rl_bres(X) __asm bres 0x53e3,X __endasm

/* ADC Data buffer Register 2 */
/* Data Buffer register 2 High */
#define adc_db2rh_bres(X) __asm bres 0x53e4,X __endasm
/* Data Buffer register 2 Low */
#define adc_db2rl_bres(X) __asm bres 0x53e5,X __endasm

/* ADC Data buffer Register 3 */
/* Data Buffer register 3 High */
#define adc_db3rh_bres(X) __asm bres 0x53e6,X __endasm
/* Data Buffer register 3 Low */
#define adc_db3rl_bres(X) __asm bres 0x53e7,X __endasm

/* ADC Data buffer Register 4 */
/* Data Buffer register 4 High */
#define adc_db4rh_bres(X) __asm bres 0x53e8,X __endasm
/* Data Buffer register 4 Low */
#define adc_db4rl_bres(X) __asm bres 0x53e9,X __endasm

/* ADC Data buffer Register 5 */
/* Data Buffer register 5 High */
#define adc_db5rh_bres(X) __asm bres 0x53ea,X __endasm
/* Data Buffer register 5 Low */
#define adc_db5rl_bres(X) __asm bres 0x53eb,X __endasm

/* ADC Data buffer Register 6 */
/* Data Buffer register 6 High */
#define adc_db6rh_bres(X) __asm bres 0x53ec,X __endasm
/* Data Buffer register 6 Low */
#define adc_db6rl_bres(X) __asm bres 0x53ed,X __endasm

/* ADC Data buffer Register 7 */
/* Data Buffer register 7 High */
#define adc_db7rh_bres(X) __asm bres 0x53ee,X __endasm
/* Data Buffer register 7 Low */
#define adc_db7rl_bres(X) __asm bres 0x53ef,X __endasm

/* ADC Data buffer Register 8 */
/* Data Buffer register 8 High */
#define adc_db8rh_bres(X) __asm bres 0x53f0,X __endasm
/* Data Buffer register 8 Low */
#define adc_db8rl_bres(X) __asm bres 0x53f1,X __endasm

/* ADC Data buffer Register 9 */
/* Data Buffer register 9 High */
#define adc_db9rh_bres(X) __asm bres 0x53f2,X __endasm
/* Data Buffer register 9 Low */
#define adc_db9rl_bres(X) __asm bres 0x53f3,X __endasm

/* ADC Control/Status Register */
#define adc_csr_bres(X) __asm bres 0x5400,X __endasm

/* ADC Configuration Register 1 */
#define adc_cr1_bres(X) __asm bres 0x5401,X __endasm

/* ADC Configuration Register 2 */
#define adc_cr2_bres(X) __asm bres 0x5402,X __endasm

/* ADC Configuration Register 3 */
#define adc_cr3_bres(X) __asm bres 0x5403,X __endasm

/* ADC Data Register */
/* Data bits High */
#define adc_drh_bres(X) __asm bres 0x5404,X __endasm
/* Data bits Low */
#define adc_drl_bres(X) __asm bres 0x5405,X __endasm

/* ADC Schmitt Trigger Disable Register */
/* Schmitt trigger disable High */
#define adc_tdrh_bres(X) __asm bres 0x5406,X __endasm
/* Schmitt trigger disable Low */
#define adc_tdrl_bres(X) __asm bres 0x5407,X __endasm

/* ADC High Threshold Register */
/* High Threshold Register High */
#define adc_htrh_bres(X) __asm bres 0x5408,X __endasm
/* High Threshold Register Low */
#define adc_htrl_bres(X) __asm bres 0x5409,X __endasm

/* ADC Low Threshold Register */
/* Low Threshold Register High */
#define adc_ltrh_bres(X) __asm bres 0x540a,X __endasm
/* Low Threshold Register Low */
#define adc_ltrl_bres(X) __asm bres 0x540b,X __endasm

/* ADC Analog Watchdog Status Register */
/* Analog Watchdog Status register High */
#define adc_awsrh_bres(X) __asm bres 0x540c,X __endasm
/* Analog Watchdog Status register Low */
#define adc_awsrl_bres(X) __asm bres 0x540d,X __endasm

/* ADC Analog Watchdog Control Register */
/* Analog Watchdog Control register High */
#define adc_awcrh_bres(X) __asm bres 0x540e,X __endasm
/* Analog Watchdog Control register Low */
#define adc_awcrl_bres(X) __asm bres 0x540f,X __endasm

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define cfg_gcr_bres(X) __asm bres 0x7f60,X __endasm

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define itc_spr1_bres(X) __asm bres 0x7f70,X __endasm

/* Interrupt Software priority register 2 */
#define itc_spr2_bres(X) __asm bres 0x7f71,X __endasm

/* Interrupt Software priority register 3 */
#define itc_spr3_bres(X) __asm bres 0x7f72,X __endasm

/* Interrupt Software priority register 4 */
#define itc_spr4_bres(X) __asm bres 0x7f73,X __endasm

/* Interrupt Software priority register 5 */
#define itc_spr5_bres(X) __asm bres 0x7f74,X __endasm

/* Interrupt Software priority register 6 */
#define itc_spr6_bres(X) __asm bres 0x7f75,X __endasm

/* Interrupt Software priority register 7 */
#define itc_spr7_bres(X) __asm bres 0x7f76,X __endasm

/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define pa_odr_bcpl(X) __asm bcpl 0x5000,X __endasm

/* Port A input pin value register */
#define pa_idr_bcpl(X) __asm bcpl 0x5001,X __endasm

/* Port A data direction register */
#define pa_ddr_bcpl(X) __asm bcpl 0x5002,X __endasm

/* Port A control register 1 */
#define pa_cr1_bcpl(X) __asm bcpl 0x5003,X __endasm

/* Port A control register 2 */
#define pa_cr2_bcpl(X) __asm bcpl 0x5004,X __endasm

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define pb_odr_bcpl(X) __asm bcpl 0x5005,X __endasm

/* Port B input pin value register */
#define pb_idr_bcpl(X) __asm bcpl 0x5006,X __endasm

/* Port B data direction register */
#define pb_ddr_bcpl(X) __asm bcpl 0x5007,X __endasm

/* Port B control register 1 */
#define pb_cr1_bcpl(X) __asm bcpl 0x5008,X __endasm

/* Port B control register 2 */
#define pb_cr2_bcpl(X) __asm bcpl 0x5009,X __endasm

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define pc_odr_bcpl(X) __asm bcpl 0x500a,X __endasm

/* Port C input pin value register */
#define pc_idr_bcpl(X) __asm bcpl 0x500b,X __endasm

/* Port C data direction register */
#define pc_ddr_bcpl(X) __asm bcpl 0x500c,X __endasm

/* Port C control register 1 */
#define pc_cr1_bcpl(X) __asm bcpl 0x500d,X __endasm

/* Port C control register 2 */
#define pc_cr2_bcpl(X) __asm bcpl 0x500e,X __endasm

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define pd_odr_bcpl(X) __asm bcpl 0x500f,X __endasm

/* Port D input pin value register */
#define pd_idr_bcpl(X) __asm bcpl 0x5010,X __endasm

/* Port D data direction register */
#define pd_ddr_bcpl(X) __asm bcpl 0x5011,X __endasm

/* Port D control register 1 */
#define pd_cr1_bcpl(X) __asm bcpl 0x5012,X __endasm

/* Port D control register 2 */
#define pd_cr2_bcpl(X) __asm bcpl 0x5013,X __endasm

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define flash_cr1_bcpl(X) __asm bcpl 0x505a,X __endasm

/* Flash control register 2 */
#define flash_cr2_bcpl(X) __asm bcpl 0x505b,X __endasm

/* Flash complementary control register 2 */
#define flash_ncr2_bcpl(X) __asm bcpl 0x505c,X __endasm

/* Flash protection register */
#define flash_fpr_bcpl(X) __asm bcpl 0x505d,X __endasm

/* Flash complementary protection register */
#define flash_nfpr_bcpl(X) __asm bcpl 0x505e,X __endasm

/* Flash in-application programming status register */
#define flash_iapsr_bcpl(X) __asm bcpl 0x505f,X __endasm

/* Flash Program memory unprotection register */
#define flash_pukr_bcpl(X) __asm bcpl 0x5062,X __endasm

/* Data EEPROM unprotection register */
#define flash_dukr_bcpl(X) __asm bcpl 0x5064,X __endasm

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define exti_cr1_bcpl(X) __asm bcpl 0x50a0,X __endasm

/* External interrupt control register 2 */
#define exti_cr2_bcpl(X) __asm bcpl 0x50a1,X __endasm

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define rst_sr_bcpl(X) __asm bcpl 0x50b3,X __endasm

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define clk_ickr_bcpl(X) __asm bcpl 0x50c0,X __endasm

/* External clock control register */
#define clk_eckr_bcpl(X) __asm bcpl 0x50c1,X __endasm

/* Clock master status register */
#define clk_cmsr_bcpl(X) __asm bcpl 0x50c3,X __endasm

/* Clock master switch register */
#define clk_swr_bcpl(X) __asm bcpl 0x50c4,X __endasm

/* Clock switch control register */
#define clk_swcr_bcpl(X) __asm bcpl 0x50c5,X __endasm

/* Clock divider register */
#define clk_ckdivr_bcpl(X) __asm bcpl 0x50c6,X __endasm

/* Peripheral clock gating register 1 */
#define clk_pckenr1_bcpl(X) __asm bcpl 0x50c7,X __endasm

/* Clock security system register */
#define clk_cssr_bcpl(X) __asm bcpl 0x50c8,X __endasm

/* Configurable clock control register */
#define clk_ccor_bcpl(X) __asm bcpl 0x50c9,X __endasm

/* Peripheral clock gating register 2 */
#define clk_pckenr2_bcpl(X) __asm bcpl 0x50ca,X __endasm

/* CAN clock control register */
#define clk_canccr_bcpl(X) __asm bcpl 0x50cb,X __endasm

/* HSI clock calibration trimming register */
#define clk_hsitrimr_bcpl(X) __asm bcpl 0x50cc,X __endasm

/* SWIM clock control register */
#define clk_swimccr_bcpl(X) __asm bcpl 0x50cd,X __endasm

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define wwdg_cr_bcpl(X) __asm bcpl 0x50d1,X __endasm

/* WWDR Window Register */
#define wwdg_wr_bcpl(X) __asm bcpl 0x50d2,X __endasm

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define iwdg_kr_bcpl(X) __asm bcpl 0x50e0,X __endasm

/* IWDG Prescaler Register */
#define iwdg_pr_bcpl(X) __asm bcpl 0x50e1,X __endasm

/* IWDG Reload Register */
#define iwdg_rlr_bcpl(X) __asm bcpl 0x50e2,X __endasm

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define awu_csr_bcpl(X) __asm bcpl 0x50f0,X __endasm

/* AWU asynchronous prescaler buffer register */
#define awu_apr_bcpl(X) __asm bcpl 0x50f1,X __endasm

/* AWU Timebase selection register */
#define awu_tbr_bcpl(X) __asm bcpl 0x50f2,X __endasm

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define beep_csr_bcpl(X) __asm bcpl 0x50f3,X __endasm

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define spi_cr1_bcpl(X) __asm bcpl 0x5200,X __endasm

/* SPI Control Register 2 */
#define spi_cr2_bcpl(X) __asm bcpl 0x5201,X __endasm

/* SPI Interrupt Control Register */
#define spi_icr_bcpl(X) __asm bcpl 0x5202,X __endasm

/* SPI Status Register */
#define spi_sr_bcpl(X) __asm bcpl 0x5203,X __endasm

/* SPI Data Register */
#define spi_dr_bcpl(X) __asm bcpl 0x5204,X __endasm

/* SPI CRC Polynomial Register */
#define spi_crcpr_bcpl(X) __asm bcpl 0x5205,X __endasm

/* SPI Rx CRC Register */
#define spi_rxcrcr_bcpl(X) __asm bcpl 0x5206,X __endasm

/* SPI Tx CRC Register */
#define spi_txcrcr_bcpl(X) __asm bcpl 0x5207,X __endasm

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define i2c_cr1_bcpl(X) __asm bcpl 0x5210,X __endasm

/* I2C control register 2 */
#define i2c_cr2_bcpl(X) __asm bcpl 0x5211,X __endasm

/* I2C frequency register */
#define i2c_freqr_bcpl(X) __asm bcpl 0x5212,X __endasm

/* I2C Own address register low */
#define i2c_oarl_bcpl(X) __asm bcpl 0x5213,X __endasm

/* I2C Own address register high */
#define i2c_oarh_bcpl(X) __asm bcpl 0x5214,X __endasm

/* I2C data register */
#define i2c_dr_bcpl(X) __asm bcpl 0x5216,X __endasm

/* I2C status register 1 */
#define i2c_sr1_bcpl(X) __asm bcpl 0x5217,X __endasm

/* I2C status register 2 */
#define i2c_sr2_bcpl(X) __asm bcpl 0x5218,X __endasm

/* I2C status register 3 */
#define i2c_sr3_bcpl(X) __asm bcpl 0x5219,X __endasm

/* I2C interrupt control register */
#define i2c_itr_bcpl(X) __asm bcpl 0x521a,X __endasm

/* I2C Clock control register low */
#define i2c_ccrl_bcpl(X) __asm bcpl 0x521b,X __endasm

/* I2C Clock control register high */
#define i2c_ccrh_bcpl(X) __asm bcpl 0x521c,X __endasm

/* I2C TRISE register */
#define i2c_triser_bcpl(X) __asm bcpl 0x521d,X __endasm

/* I2C packet error checking register */
#define i2c_pecr_bcpl(X) __asm bcpl 0x521e,X __endasm

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define uart1_sr_bcpl(X) __asm bcpl 0x5230,X __endasm

/* UART1 Data Register */
#define uart1_dr_bcpl(X) __asm bcpl 0x5231,X __endasm

/* UART1 Baud Rate Register 1 */
#define uart1_brr1_bcpl(X) __asm bcpl 0x5232,X __endasm

/* UART1 Baud Rate Register 2 */
#define uart1_brr2_bcpl(X) __asm bcpl 0x5233,X __endasm

/* UART1 Control Register 1 */
#define uart1_cr1_bcpl(X) __asm bcpl 0x5234,X __endasm

/* UART1 Control Register 2 */
#define uart1_cr2_bcpl(X) __asm bcpl 0x5235,X __endasm

/* UART1 Control Register 3 */
#define uart1_cr3_bcpl(X) __asm bcpl 0x5236,X __endasm

/* UART1 Control Register 4 */
#define uart1_cr4_bcpl(X) __asm bcpl 0x5237,X __endasm

/* UART1 Control Register 5 */
#define uart1_cr5_bcpl(X) __asm bcpl 0x5238,X __endasm

/* UART1 Guard time Register */
#define uart1_gtr_bcpl(X) __asm bcpl 0x5239,X __endasm

/* UART1 Prescaler Register */
#define uart1_pscr_bcpl(X) __asm bcpl 0x523a,X __endasm

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define tim1_cr1_bcpl(X) __asm bcpl 0x5250,X __endasm

/* TIM1 Control register 2 */
#define tim1_cr2_bcpl(X) __asm bcpl 0x5251,X __endasm

/* TIM1 Slave Mode Control register */
#define tim1_smcr_bcpl(X) __asm bcpl 0x5252,X __endasm

/* TIM1 external trigger register */
#define tim1_etr_bcpl(X) __asm bcpl 0x5253,X __endasm

/* TIM1 Interrupt enable register */
#define tim1_ier_bcpl(X) __asm bcpl 0x5254,X __endasm

/* TIM1 Status register 1 */
#define tim1_sr1_bcpl(X) __asm bcpl 0x5255,X __endasm

/* TIM1 Status register 2 */
#define tim1_sr2_bcpl(X) __asm bcpl 0x5256,X __endasm

/* TIM1 Event Generation register */
#define tim1_egr_bcpl(X) __asm bcpl 0x5257,X __endasm

/* TIM1 Capture/Compare mode register 1 */
#define tim1_ccmr1_bcpl(X) __asm bcpl 0x5258,X __endasm

/* TIM1 Capture/Compare mode register 2 */
#define tim1_ccmr2_bcpl(X) __asm bcpl 0x5259,X __endasm

/* TIM1 Capture/Compare mode register 3 */
#define tim1_ccmr3_bcpl(X) __asm bcpl 0x525a,X __endasm

/* TIM1 Capture/Compare mode register 4 */
#define tim1_ccmr4_bcpl(X) __asm bcpl 0x525b,X __endasm

/* TIM1 Capture/Compare enable register 1 */
#define tim1_ccer1_bcpl(X) __asm bcpl 0x525c,X __endasm

/* TIM1 Capture/Compare enable register 2 */
#define tim1_ccer2_bcpl(X) __asm bcpl 0x525d,X __endasm

/* TIM1 Counter */
/* Data bits High */
#define tim1_cntrh_bcpl(X) __asm bcpl 0x525e,X __endasm
/* Data bits Low */
#define tim1_cntrl_bcpl(X) __asm bcpl 0x525f,X __endasm

/* TIM1 Prescaler register */
/* Data bits High */
#define tim1_pscrh_bcpl(X) __asm bcpl 0x5260,X __endasm
/* Data bits Low */
#define tim1_pscrl_bcpl(X) __asm bcpl 0x5261,X __endasm

/* TIM1 Auto-reload register */
/* Data bits High */
#define tim1_arrh_bcpl(X) __asm bcpl 0x5262,X __endasm
/* Data bits Low */
#define tim1_arrl_bcpl(X) __asm bcpl 0x5263,X __endasm

/* TIM1 Repetition counter register */
#define tim1_rcr_bcpl(X) __asm bcpl 0x5264,X __endasm

/* TIM1 Capture/Compare register 1 */
/* Data bits High */
#define tim1_ccr1h_bcpl(X) __asm bcpl 0x5265,X __endasm
/* Data bits Low */
#define tim1_ccr1l_bcpl(X) __asm bcpl 0x5266,X __endasm

/* TIM1 Capture/Compare register 2 */
/* Data bits High */
#define tim1_ccr2h_bcpl(X) __asm bcpl 0x5267,X __endasm
/* Data bits Low */
#define tim1_ccr2l_bcpl(X) __asm bcpl 0x5268,X __endasm

/* TIM1 Capture/Compare register 3 */
/* Data bits High */
#define tim1_ccr3h_bcpl(X) __asm bcpl 0x5269,X __endasm
/* Data bits Low */
#define tim1_ccr3l_bcpl(X) __asm bcpl 0x526a,X __endasm

/* TIM1 Capture/Compare register 4 */
/* Data bits High */
#define tim1_ccr4h_bcpl(X) __asm bcpl 0x526b,X __endasm
/* Data bits Low */
#define tim1_ccr4l_bcpl(X) __asm bcpl 0x526c,X __endasm

/* TIM1 Break register */
#define tim1_bkr_bcpl(X) __asm bcpl 0x526d,X __endasm

/* TIM1 Dead-time register */
#define tim1_dtr_bcpl(X) __asm bcpl 0x526e,X __endasm

/* TIM1 Output idle state register */
#define tim1_oisr_bcpl(X) __asm bcpl 0x526f,X __endasm

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define tim2_cr1_bcpl(X) __asm bcpl 0x5300,X __endasm

/* TIM2 Interrupt enable register */
#define tim2_ier_bcpl(X) __asm bcpl 0x5303,X __endasm

/* TIM2 Status register 1 */
#define tim2_sr1_bcpl(X) __asm bcpl 0x5304,X __endasm

/* TIM2 Status register 2 */
#define tim2_sr2_bcpl(X) __asm bcpl 0x5305,X __endasm

/* TIM2 Event Generation register */
#define tim2_egr_bcpl(X) __asm bcpl 0x5306,X __endasm

/* TIM2 Capture/Compare mode register 1 */
#define tim2_ccmr1_bcpl(X) __asm bcpl 0x5307,X __endasm

/* TIM2 Capture/Compare mode register 2 */
#define tim2_ccmr2_bcpl(X) __asm bcpl 0x5308,X __endasm

/* TIM2 Capture/Compare mode register 3 */
#define tim2_ccmr3_bcpl(X) __asm bcpl 0x5309,X __endasm

/* TIM2 Capture/Compare enable register 1 */
#define tim2_ccer1_bcpl(X) __asm bcpl 0x530a,X __endasm

/* TIM2 Capture/Compare enable register 2 */
#define tim2_ccer2_bcpl(X) __asm bcpl 0x530b,X __endasm

/* TIM2 Counter */
/* Data bits High */
#define tim2_cntrh_bcpl(X) __asm bcpl 0x530c,X __endasm
/* Data bits Low */
#define tim2_cntrl_bcpl(X) __asm bcpl 0x530d,X __endasm

/* TIM2 Prescaler register */
#define tim2_pscr_bcpl(X) __asm bcpl 0x530e,X __endasm

/* TIM2 Auto-reload register */
/* Data bits High */
#define tim2_arrh_bcpl(X) __asm bcpl 0x530f,X __endasm
/* Data bits Low */
#define tim2_arrl_bcpl(X) __asm bcpl 0x5310,X __endasm

/* TIM2 Capture/Compare register 1 */
/* Data bits High */
#define tim2_ccr1h_bcpl(X) __asm bcpl 0x5311,X __endasm
/* Data bits Low */
#define tim2_ccr1l_bcpl(X) __asm bcpl 0x5312,X __endasm

/* TIM2 Capture/Compare register 2 */
/* Data bits High */
#define tim2_ccr2h_bcpl(X) __asm bcpl 0x5313,X __endasm
/* Data bits Low */
#define tim2_ccr2l_bcpl(X) __asm bcpl 0x5314,X __endasm

/* TIM2 Capture/Compare register 3 */
/* Data bits High */
#define tim2_ccr3h_bcpl(X) __asm bcpl 0x5315,X __endasm
/* Data bits Low */
#define tim2_ccr3l_bcpl(X) __asm bcpl 0x5316,X __endasm

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define tim4_cr1_bcpl(X) __asm bcpl 0x5340,X __endasm

/* TIM4 Interrupt enable register */
#define tim4_ier_bcpl(X) __asm bcpl 0x5343,X __endasm

/* TIM4 Status register */
#define tim4_sr_bcpl(X) __asm bcpl 0x5344,X __endasm

/* TIM4 Event Generation register */
#define tim4_egr_bcpl(X) __asm bcpl 0x5345,X __endasm

/* TIM4 Counter */
#define tim4_cntr_bcpl(X) __asm bcpl 0x5346,X __endasm

/* TIM4 Prescaler register */
#define tim4_pscr_bcpl(X) __asm bcpl 0x5347,X __endasm

/* TIM4 Auto-reload register */
#define tim4_arr_bcpl(X) __asm bcpl 0x5348,X __endasm

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
/* Data Buffer register 0 High */
#define adc_db0rh_bcpl(X) __asm bcpl 0x53e0,X __endasm
/* Data Buffer register 0 Low */
#define adc_db0rl_bcpl(X) __asm bcpl 0x53e1,X __endasm

/* ADC Data buffer Register 1 */
/* Data Buffer register 1 High */
#define adc_db1rh_bcpl(X) __asm bcpl 0x53e2,X __endasm
/* Data Buffer register 1 Low */
#define adc_db1rl_bcpl(X) __asm bcpl 0x53e3,X __endasm

/* ADC Data buffer Register 2 */
/* Data Buffer register 2 High */
#define adc_db2rh_bcpl(X) __asm bcpl 0x53e4,X __endasm
/* Data Buffer register 2 Low */
#define adc_db2rl_bcpl(X) __asm bcpl 0x53e5,X __endasm

/* ADC Data buffer Register 3 */
/* Data Buffer register 3 High */
#define adc_db3rh_bcpl(X) __asm bcpl 0x53e6,X __endasm
/* Data Buffer register 3 Low */
#define adc_db3rl_bcpl(X) __asm bcpl 0x53e7,X __endasm

/* ADC Data buffer Register 4 */
/* Data Buffer register 4 High */
#define adc_db4rh_bcpl(X) __asm bcpl 0x53e8,X __endasm
/* Data Buffer register 4 Low */
#define adc_db4rl_bcpl(X) __asm bcpl 0x53e9,X __endasm

/* ADC Data buffer Register 5 */
/* Data Buffer register 5 High */
#define adc_db5rh_bcpl(X) __asm bcpl 0x53ea,X __endasm
/* Data Buffer register 5 Low */
#define adc_db5rl_bcpl(X) __asm bcpl 0x53eb,X __endasm

/* ADC Data buffer Register 6 */
/* Data Buffer register 6 High */
#define adc_db6rh_bcpl(X) __asm bcpl 0x53ec,X __endasm
/* Data Buffer register 6 Low */
#define adc_db6rl_bcpl(X) __asm bcpl 0x53ed,X __endasm

/* ADC Data buffer Register 7 */
/* Data Buffer register 7 High */
#define adc_db7rh_bcpl(X) __asm bcpl 0x53ee,X __endasm
/* Data Buffer register 7 Low */
#define adc_db7rl_bcpl(X) __asm bcpl 0x53ef,X __endasm

/* ADC Data buffer Register 8 */
/* Data Buffer register 8 High */
#define adc_db8rh_bcpl(X) __asm bcpl 0x53f0,X __endasm
/* Data Buffer register 8 Low */
#define adc_db8rl_bcpl(X) __asm bcpl 0x53f1,X __endasm

/* ADC Data buffer Register 9 */
/* Data Buffer register 9 High */
#define adc_db9rh_bcpl(X) __asm bcpl 0x53f2,X __endasm
/* Data Buffer register 9 Low */
#define adc_db9rl_bcpl(X) __asm bcpl 0x53f3,X __endasm

/* ADC Control/Status Register */
#define adc_csr_bcpl(X) __asm bcpl 0x5400,X __endasm

/* ADC Configuration Register 1 */
#define adc_cr1_bcpl(X) __asm bcpl 0x5401,X __endasm

/* ADC Configuration Register 2 */
#define adc_cr2_bcpl(X) __asm bcpl 0x5402,X __endasm

/* ADC Configuration Register 3 */
#define adc_cr3_bcpl(X) __asm bcpl 0x5403,X __endasm

/* ADC Data Register */
/* Data bits High */
#define adc_drh_bcpl(X) __asm bcpl 0x5404,X __endasm
/* Data bits Low */
#define adc_drl_bcpl(X) __asm bcpl 0x5405,X __endasm

/* ADC Schmitt Trigger Disable Register */
/* Schmitt trigger disable High */
#define adc_tdrh_bcpl(X) __asm bcpl 0x5406,X __endasm
/* Schmitt trigger disable Low */
#define adc_tdrl_bcpl(X) __asm bcpl 0x5407,X __endasm

/* ADC High Threshold Register */
/* High Threshold Register High */
#define adc_htrh_bcpl(X) __asm bcpl 0x5408,X __endasm
/* High Threshold Register Low */
#define adc_htrl_bcpl(X) __asm bcpl 0x5409,X __endasm

/* ADC Low Threshold Register */
/* Low Threshold Register High */
#define adc_ltrh_bcpl(X) __asm bcpl 0x540a,X __endasm
/* Low Threshold Register Low */
#define adc_ltrl_bcpl(X) __asm bcpl 0x540b,X __endasm

/* ADC Analog Watchdog Status Register */
/* Analog Watchdog Status register High */
#define adc_awsrh_bcpl(X) __asm bcpl 0x540c,X __endasm
/* Analog Watchdog Status register Low */
#define adc_awsrl_bcpl(X) __asm bcpl 0x540d,X __endasm

/* ADC Analog Watchdog Control Register */
/* Analog Watchdog Control register High */
#define adc_awcrh_bcpl(X) __asm bcpl 0x540e,X __endasm
/* Analog Watchdog Control register Low */
#define adc_awcrl_bcpl(X) __asm bcpl 0x540f,X __endasm

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define cfg_gcr_bcpl(X) __asm bcpl 0x7f60,X __endasm

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define itc_spr1_bcpl(X) __asm bcpl 0x7f70,X __endasm

/* Interrupt Software priority register 2 */
#define itc_spr2_bcpl(X) __asm bcpl 0x7f71,X __endasm

/* Interrupt Software priority register 3 */
#define itc_spr3_bcpl(X) __asm bcpl 0x7f72,X __endasm

/* Interrupt Software priority register 4 */
#define itc_spr4_bcpl(X) __asm bcpl 0x7f73,X __endasm

/* Interrupt Software priority register 5 */
#define itc_spr5_bcpl(X) __asm bcpl 0x7f74,X __endasm

/* Interrupt Software priority register 6 */
#define itc_spr6_bcpl(X) __asm bcpl 0x7f75,X __endasm

/* Interrupt Software priority register 7 */
#define itc_spr7_bcpl(X) __asm bcpl 0x7f76,X __endasm

/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define pa_odr_clr() __asm	clr 0x5000  __endasm

/* Port A input pin value register */
#define pa_idr_clr() __asm	clr 0x5001  __endasm

/* Port A data direction register */
#define pa_ddr_clr() __asm	clr 0x5002  __endasm

/* Port A control register 1 */
#define pa_cr1_clr() __asm	clr 0x5003  __endasm

/* Port A control register 2 */
#define pa_cr2_clr() __asm	clr 0x5004  __endasm

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define pb_odr_clr() __asm	clr 0x5005  __endasm

/* Port B input pin value register */
#define pb_idr_clr() __asm	clr 0x5006  __endasm

/* Port B data direction register */
#define pb_ddr_clr() __asm	clr 0x5007  __endasm

/* Port B control register 1 */
#define pb_cr1_clr() __asm	clr 0x5008  __endasm

/* Port B control register 2 */
#define pb_cr2_clr() __asm	clr 0x5009  __endasm

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define pc_odr_clr() __asm	clr 0x500a  __endasm

/* Port C input pin value register */
#define pc_idr_clr() __asm	clr 0x500b  __endasm

/* Port C data direction register */
#define pc_ddr_clr() __asm	clr 0x500c  __endasm

/* Port C control register 1 */
#define pc_cr1_clr() __asm	clr 0x500d  __endasm

/* Port C control register 2 */
#define pc_cr2_clr() __asm	clr 0x500e  __endasm

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define pd_odr_clr() __asm	clr 0x500f  __endasm

/* Port D input pin value register */
#define pd_idr_clr() __asm	clr 0x5010  __endasm

/* Port D data direction register */
#define pd_ddr_clr() __asm	clr 0x5011  __endasm

/* Port D control register 1 */
#define pd_cr1_clr() __asm	clr 0x5012  __endasm

/* Port D control register 2 */
#define pd_cr2_clr() __asm	clr 0x5013  __endasm

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define flash_cr1_clr() __asm	clr 0x505a  __endasm

/* Flash control register 2 */
#define flash_cr2_clr() __asm	clr 0x505b  __endasm

/* Flash complementary control register 2 */
#define flash_ncr2_clr() __asm	clr 0x505c  __endasm

/* Flash protection register */
#define flash_fpr_clr() __asm	clr 0x505d  __endasm

/* Flash complementary protection register */
#define flash_nfpr_clr() __asm	clr 0x505e  __endasm

/* Flash in-application programming status register */
#define flash_iapsr_clr() __asm	clr 0x505f  __endasm

/* Flash Program memory unprotection register */
#define flash_pukr_clr() __asm	clr 0x5062  __endasm

/* Data EEPROM unprotection register */
#define flash_dukr_clr() __asm	clr 0x5064  __endasm

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define exti_cr1_clr() __asm	clr 0x50a0  __endasm

/* External interrupt control register 2 */
#define exti_cr2_clr() __asm	clr 0x50a1  __endasm

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define rst_sr_clr() __asm	clr 0x50b3  __endasm

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define clk_ickr_clr() __asm	clr 0x50c0  __endasm

/* External clock control register */
#define clk_eckr_clr() __asm	clr 0x50c1  __endasm

/* Clock master status register */
#define clk_cmsr_clr() __asm	clr 0x50c3  __endasm

/* Clock master switch register */
#define clk_swr_clr() __asm	clr 0x50c4  __endasm

/* Clock switch control register */
#define clk_swcr_clr() __asm	clr 0x50c5  __endasm

/* Clock divider register */
#define clk_ckdivr_clr() __asm	clr 0x50c6  __endasm

/* Peripheral clock gating register 1 */
#define clk_pckenr1_clr() __asm	clr 0x50c7  __endasm

/* Clock security system register */
#define clk_cssr_clr() __asm	clr 0x50c8  __endasm

/* Configurable clock control register */
#define clk_ccor_clr() __asm	clr 0x50c9  __endasm

/* Peripheral clock gating register 2 */
#define clk_pckenr2_clr() __asm	clr 0x50ca  __endasm

/* CAN clock control register */
#define clk_canccr_clr() __asm	clr 0x50cb  __endasm

/* HSI clock calibration trimming register */
#define clk_hsitrimr_clr() __asm	clr 0x50cc  __endasm

/* SWIM clock control register */
#define clk_swimccr_clr() __asm	clr 0x50cd  __endasm

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define wwdg_cr_clr() __asm	clr 0x50d1  __endasm

/* WWDR Window Register */
#define wwdg_wr_clr() __asm	clr 0x50d2  __endasm

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define iwdg_kr_clr() __asm	clr 0x50e0  __endasm

/* IWDG Prescaler Register */
#define iwdg_pr_clr() __asm	clr 0x50e1  __endasm

/* IWDG Reload Register */
#define iwdg_rlr_clr() __asm	clr 0x50e2  __endasm

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define awu_csr_clr() __asm	clr 0x50f0  __endasm

/* AWU asynchronous prescaler buffer register */
#define awu_apr_clr() __asm	clr 0x50f1  __endasm

/* AWU Timebase selection register */
#define awu_tbr_clr() __asm	clr 0x50f2  __endasm

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define beep_csr_clr() __asm	clr 0x50f3  __endasm

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define spi_cr1_clr() __asm	clr 0x5200  __endasm

/* SPI Control Register 2 */
#define spi_cr2_clr() __asm	clr 0x5201  __endasm

/* SPI Interrupt Control Register */
#define spi_icr_clr() __asm	clr 0x5202  __endasm

/* SPI Status Register */
#define spi_sr_clr() __asm	clr 0x5203  __endasm

/* SPI Data Register */
#define spi_dr_clr() __asm	clr 0x5204  __endasm

/* SPI CRC Polynomial Register */
#define spi_crcpr_clr() __asm	clr 0x5205  __endasm

/* SPI Rx CRC Register */
#define spi_rxcrcr_clr() __asm	clr 0x5206  __endasm

/* SPI Tx CRC Register */
#define spi_txcrcr_clr() __asm	clr 0x5207  __endasm

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define i2c_cr1_clr() __asm	clr 0x5210  __endasm

/* I2C control register 2 */
#define i2c_cr2_clr() __asm	clr 0x5211  __endasm

/* I2C frequency register */
#define i2c_freqr_clr() __asm	clr 0x5212  __endasm

/* I2C Own address register low */
#define i2c_oarl_clr() __asm	clr 0x5213  __endasm

/* I2C Own address register high */
#define i2c_oarh_clr() __asm	clr 0x5214  __endasm

/* I2C data register */
#define i2c_dr_clr() __asm	clr 0x5216  __endasm

/* I2C status register 1 */
#define i2c_sr1_clr() __asm	clr 0x5217  __endasm

/* I2C status register 2 */
#define i2c_sr2_clr() __asm	clr 0x5218  __endasm

/* I2C status register 3 */
#define i2c_sr3_clr() __asm	clr 0x5219  __endasm

/* I2C interrupt control register */
#define i2c_itr_clr() __asm	clr 0x521a  __endasm

/* I2C Clock control register low */
#define i2c_ccrl_clr() __asm	clr 0x521b  __endasm

/* I2C Clock control register high */
#define i2c_ccrh_clr() __asm	clr 0x521c  __endasm

/* I2C TRISE register */
#define i2c_triser_clr() __asm	clr 0x521d  __endasm

/* I2C packet error checking register */
#define i2c_pecr_clr() __asm	clr 0x521e  __endasm

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define uart1_sr_clr() __asm	clr 0x5230  __endasm

/* UART1 Data Register */
#define uart1_dr_clr() __asm	clr 0x5231  __endasm

/* UART1 Baud Rate Register 1 */
#define uart1_brr1_clr() __asm	clr 0x5232  __endasm

/* UART1 Baud Rate Register 2 */
#define uart1_brr2_clr() __asm	clr 0x5233  __endasm

/* UART1 Control Register 1 */
#define uart1_cr1_clr() __asm	clr 0x5234  __endasm

/* UART1 Control Register 2 */
#define uart1_cr2_clr() __asm	clr 0x5235  __endasm

/* UART1 Control Register 3 */
#define uart1_cr3_clr() __asm	clr 0x5236  __endasm

/* UART1 Control Register 4 */
#define uart1_cr4_clr() __asm	clr 0x5237  __endasm

/* UART1 Control Register 5 */
#define uart1_cr5_clr() __asm	clr 0x5238  __endasm

/* UART1 Guard time Register */
#define uart1_gtr_clr() __asm	clr 0x5239  __endasm

/* UART1 Prescaler Register */
#define uart1_pscr_clr() __asm	clr 0x523a  __endasm

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define tim1_cr1_clr() __asm	clr 0x5250  __endasm

/* TIM1 Control register 2 */
#define tim1_cr2_clr() __asm	clr 0x5251  __endasm

/* TIM1 Slave Mode Control register */
#define tim1_smcr_clr() __asm	clr 0x5252  __endasm

/* TIM1 external trigger register */
#define tim1_etr_clr() __asm	clr 0x5253  __endasm

/* TIM1 Interrupt enable register */
#define tim1_ier_clr() __asm	clr 0x5254  __endasm

/* TIM1 Status register 1 */
#define tim1_sr1_clr() __asm	clr 0x5255  __endasm

/* TIM1 Status register 2 */
#define tim1_sr2_clr() __asm	clr 0x5256  __endasm

/* TIM1 Event Generation register */
#define tim1_egr_clr() __asm	clr 0x5257  __endasm

/* TIM1 Capture/Compare mode register 1 */
#define tim1_ccmr1_clr() __asm	clr 0x5258  __endasm

/* TIM1 Capture/Compare mode register 2 */
#define tim1_ccmr2_clr() __asm	clr 0x5259  __endasm

/* TIM1 Capture/Compare mode register 3 */
#define tim1_ccmr3_clr() __asm	clr 0x525a  __endasm

/* TIM1 Capture/Compare mode register 4 */
#define tim1_ccmr4_clr() __asm	clr 0x525b  __endasm

/* TIM1 Capture/Compare enable register 1 */
#define tim1_ccer1_clr() __asm	clr 0x525c  __endasm

/* TIM1 Capture/Compare enable register 2 */
#define tim1_ccer2_clr() __asm	clr 0x525d  __endasm

/* TIM1 Counter */
/* Data bits High */
#define tim1_cntrh_clr() __asm	clr 0x525e  __endasm
/* Data bits Low */
#define tim1_cntrl_clr() __asm	clr 0x525f  __endasm

/* TIM1 Prescaler register */
/* Data bits High */
#define tim1_pscrh_clr() __asm	clr 0x5260  __endasm
/* Data bits Low */
#define tim1_pscrl_clr() __asm	clr 0x5261  __endasm

/* TIM1 Auto-reload register */
/* Data bits High */
#define tim1_arrh_clr() __asm	clr 0x5262  __endasm
/* Data bits Low */
#define tim1_arrl_clr() __asm	clr 0x5263  __endasm

/* TIM1 Repetition counter register */
#define tim1_rcr_clr() __asm	clr 0x5264  __endasm

/* TIM1 Capture/Compare register 1 */
/* Data bits High */
#define tim1_ccr1h_clr() __asm	clr 0x5265  __endasm
/* Data bits Low */
#define tim1_ccr1l_clr() __asm	clr 0x5266  __endasm

/* TIM1 Capture/Compare register 2 */
/* Data bits High */
#define tim1_ccr2h_clr() __asm	clr 0x5267  __endasm
/* Data bits Low */
#define tim1_ccr2l_clr() __asm	clr 0x5268  __endasm

/* TIM1 Capture/Compare register 3 */
/* Data bits High */
#define tim1_ccr3h_clr() __asm	clr 0x5269  __endasm
/* Data bits Low */
#define tim1_ccr3l_clr() __asm	clr 0x526a  __endasm

/* TIM1 Capture/Compare register 4 */
/* Data bits High */
#define tim1_ccr4h_clr() __asm	clr 0x526b  __endasm
/* Data bits Low */
#define tim1_ccr4l_clr() __asm	clr 0x526c  __endasm

/* TIM1 Break register */
#define tim1_bkr_clr() __asm	clr 0x526d  __endasm

/* TIM1 Dead-time register */
#define tim1_dtr_clr() __asm	clr 0x526e  __endasm

/* TIM1 Output idle state register */
#define tim1_oisr_clr() __asm	clr 0x526f  __endasm

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define tim2_cr1_clr() __asm	clr 0x5300  __endasm

/* TIM2 Interrupt enable register */
#define tim2_ier_clr() __asm	clr 0x5303  __endasm

/* TIM2 Status register 1 */
#define tim2_sr1_clr() __asm	clr 0x5304  __endasm

/* TIM2 Status register 2 */
#define tim2_sr2_clr() __asm	clr 0x5305  __endasm

/* TIM2 Event Generation register */
#define tim2_egr_clr() __asm	clr 0x5306  __endasm

/* TIM2 Capture/Compare mode register 1 */
#define tim2_ccmr1_clr() __asm	clr 0x5307  __endasm

/* TIM2 Capture/Compare mode register 2 */
#define tim2_ccmr2_clr() __asm	clr 0x5308  __endasm

/* TIM2 Capture/Compare mode register 3 */
#define tim2_ccmr3_clr() __asm	clr 0x5309  __endasm

/* TIM2 Capture/Compare enable register 1 */
#define tim2_ccer1_clr() __asm	clr 0x530a  __endasm

/* TIM2 Capture/Compare enable register 2 */
#define tim2_ccer2_clr() __asm	clr 0x530b  __endasm

/* TIM2 Counter */
/* Data bits High */
#define tim2_cntrh_clr() __asm	clr 0x530c  __endasm
/* Data bits Low */
#define tim2_cntrl_clr() __asm	clr 0x530d  __endasm

/* TIM2 Prescaler register */
#define tim2_pscr_clr() __asm	clr 0x530e  __endasm

/* TIM2 Auto-reload register */
/* Data bits High */
#define tim2_arrh_clr() __asm	clr 0x530f  __endasm
/* Data bits Low */
#define tim2_arrl_clr() __asm	clr 0x5310  __endasm

/* TIM2 Capture/Compare register 1 */
/* Data bits High */
#define tim2_ccr1h_clr() __asm	clr 0x5311  __endasm
/* Data bits Low */
#define tim2_ccr1l_clr() __asm	clr 0x5312  __endasm

/* TIM2 Capture/Compare register 2 */
/* Data bits High */
#define tim2_ccr2h_clr() __asm	clr 0x5313  __endasm
/* Data bits Low */
#define tim2_ccr2l_clr() __asm	clr 0x5314  __endasm

/* TIM2 Capture/Compare register 3 */
/* Data bits High */
#define tim2_ccr3h_clr() __asm	clr 0x5315  __endasm
/* Data bits Low */
#define tim2_ccr3l_clr() __asm	clr 0x5316  __endasm

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define tim4_cr1_clr() __asm	clr 0x5340  __endasm

/* TIM4 Interrupt enable register */
#define tim4_ier_clr() __asm	clr 0x5343  __endasm

/* TIM4 Status register */
#define tim4_sr_clr() __asm	clr 0x5344  __endasm

/* TIM4 Event Generation register */
#define tim4_egr_clr() __asm	clr 0x5345  __endasm

/* TIM4 Counter */
#define tim4_cntr_clr() __asm	clr 0x5346  __endasm

/* TIM4 Prescaler register */
#define tim4_pscr_clr() __asm	clr 0x5347  __endasm

/* TIM4 Auto-reload register */
#define tim4_arr_clr() __asm	clr 0x5348  __endasm

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
/* Data Buffer register 0 High */
#define adc_db0rh_clr() __asm	clr 0x53e0  __endasm
/* Data Buffer register 0 Low */
#define adc_db0rl_clr() __asm	clr 0x53e1  __endasm

/* ADC Data buffer Register 1 */
/* Data Buffer register 1 High */
#define adc_db1rh_clr() __asm	clr 0x53e2  __endasm
/* Data Buffer register 1 Low */
#define adc_db1rl_clr() __asm	clr 0x53e3  __endasm

/* ADC Data buffer Register 2 */
/* Data Buffer register 2 High */
#define adc_db2rh_clr() __asm	clr 0x53e4  __endasm
/* Data Buffer register 2 Low */
#define adc_db2rl_clr() __asm	clr 0x53e5  __endasm

/* ADC Data buffer Register 3 */
/* Data Buffer register 3 High */
#define adc_db3rh_clr() __asm	clr 0x53e6  __endasm
/* Data Buffer register 3 Low */
#define adc_db3rl_clr() __asm	clr 0x53e7  __endasm

/* ADC Data buffer Register 4 */
/* Data Buffer register 4 High */
#define adc_db4rh_clr() __asm	clr 0x53e8  __endasm
/* Data Buffer register 4 Low */
#define adc_db4rl_clr() __asm	clr 0x53e9  __endasm

/* ADC Data buffer Register 5 */
/* Data Buffer register 5 High */
#define adc_db5rh_clr() __asm	clr 0x53ea  __endasm
/* Data Buffer register 5 Low */
#define adc_db5rl_clr() __asm	clr 0x53eb  __endasm

/* ADC Data buffer Register 6 */
/* Data Buffer register 6 High */
#define adc_db6rh_clr() __asm	clr 0x53ec  __endasm
/* Data Buffer register 6 Low */
#define adc_db6rl_clr() __asm	clr 0x53ed  __endasm

/* ADC Data buffer Register 7 */
/* Data Buffer register 7 High */
#define adc_db7rh_clr() __asm	clr 0x53ee  __endasm
/* Data Buffer register 7 Low */
#define adc_db7rl_clr() __asm	clr 0x53ef  __endasm

/* ADC Data buffer Register 8 */
/* Data Buffer register 8 High */
#define adc_db8rh_clr() __asm	clr 0x53f0  __endasm
/* Data Buffer register 8 Low */
#define adc_db8rl_clr() __asm	clr 0x53f1  __endasm

/* ADC Data buffer Register 9 */
/* Data Buffer register 9 High */
#define adc_db9rh_clr() __asm	clr 0x53f2  __endasm
/* Data Buffer register 9 Low */
#define adc_db9rl_clr() __asm	clr 0x53f3  __endasm

/* ADC Control/Status Register */
#define adc_csr_clr() __asm	clr 0x5400  __endasm

/* ADC Configuration Register 1 */
#define adc_cr1_clr() __asm	clr 0x5401  __endasm

/* ADC Configuration Register 2 */
#define adc_cr2_clr() __asm	clr 0x5402  __endasm

/* ADC Configuration Register 3 */
#define adc_cr3_clr() __asm	clr 0x5403  __endasm

/* ADC Data Register */
/* Data bits High */
#define adc_drh_clr() __asm	clr 0x5404  __endasm
/* Data bits Low */
#define adc_drl_clr() __asm	clr 0x5405  __endasm

/* ADC Schmitt Trigger Disable Register */
/* Schmitt trigger disable High */
#define adc_tdrh_clr() __asm	clr 0x5406  __endasm
/* Schmitt trigger disable Low */
#define adc_tdrl_clr() __asm	clr 0x5407  __endasm

/* ADC High Threshold Register */
/* High Threshold Register High */
#define adc_htrh_clr() __asm	clr 0x5408  __endasm
/* High Threshold Register Low */
#define adc_htrl_clr() __asm	clr 0x5409  __endasm

/* ADC Low Threshold Register */
/* Low Threshold Register High */
#define adc_ltrh_clr() __asm	clr 0x540a  __endasm
/* Low Threshold Register Low */
#define adc_ltrl_clr() __asm	clr 0x540b  __endasm

/* ADC Analog Watchdog Status Register */
/* Analog Watchdog Status register High */
#define adc_awsrh_clr() __asm	clr 0x540c  __endasm
/* Analog Watchdog Status register Low */
#define adc_awsrl_clr() __asm	clr 0x540d  __endasm

/* ADC Analog Watchdog Control Register */
/* Analog Watchdog Control register High */
#define adc_awcrh_clr() __asm	clr 0x540e  __endasm
/* Analog Watchdog Control register Low */
#define adc_awcrl_clr() __asm	clr 0x540f  __endasm

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define cfg_gcr_clr() __asm	clr 0x7f60  __endasm

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define itc_spr1_clr() __asm	clr 0x7f70  __endasm

/* Interrupt Software priority register 2 */
#define itc_spr2_clr() __asm	clr 0x7f71  __endasm

/* Interrupt Software priority register 3 */
#define itc_spr3_clr() __asm	clr 0x7f72  __endasm

/* Interrupt Software priority register 4 */
#define itc_spr4_clr() __asm	clr 0x7f73  __endasm

/* Interrupt Software priority register 5 */
#define itc_spr5_clr() __asm	clr 0x7f74  __endasm

/* Interrupt Software priority register 6 */
#define itc_spr6_clr() __asm	clr 0x7f75  __endasm

/* Interrupt Software priority register 7 */
#define itc_spr7_clr() __asm	clr 0x7f76  __endasm

#endif /* __STM8S103F__ */
