
.equ P0, 0
.equ P1, 1
.equ P2, 2
.equ P3, 3
.equ P4, 4
.equ P5, 5
.equ P6, 6
.equ P7, 7

; Port A data output latch register 
.equ PA_ODR, 0x5000

; Port A input pin value register 
.equ PA_IDR, 0x5001

; Port A data direction register 
.equ PA_DDR, 0x5002

; Port A control register 1 
.equ PA_CR1, 0x5003

; Port A control register 2 
.equ PA_CR2, 0x5004

; Port B 
;***************************************************************

; Port B data output latch register 
.equ PB_ODR, 0x5005

; Port B input pin value register 
.equ PB_IDR, 0x5006

; Port B data direction register 
.equ PB_DDR, 0x5007

; Port B control register 1 
.equ PB_CR1, 0x5008

; Port B control register 2 
.equ PB_CR2, 0x5009

; Port C 
;***************************************************************

; Port C data output latch register 
.equ PC_ODR, 0x500a

; Port C input pin value register 
.equ PC_IDR, 0x500b

; Port C data direction register 
.equ PC_DDR, 0x500c

; Port C control register 1 
.equ PC_CR1, 0x500d

; Port C control register 2 
.equ PC_CR2, 0x500e

; Port D 
;***************************************************************

; Port D data output latch register 
.equ PD_ODR, 0x500f

; Port D input pin value register 
.equ PD_IDR, 0x5010

; Port D data direction register 
.equ PD_DDR, 0x5011

; Port D control register 1 
.equ PD_CR1, 0x5012

; Port D control register 2 
.equ PD_CR2, 0x5013

; Flash 
;***************************************************************

; Flash control register 1 
.equ FLASH_CR1, 0x505a

; Flash control register 2 
.equ FLASH_CR2, 0x505b

; Flash complementary control register 2 
.equ FLASH_NCR2, 0x505c

; Flash protection register 
.equ FLASH_FPR, 0x505d

; Flash complementary protection register 
.equ FLASH_NFPR, 0x505e

; Flash in-application programming status register 
.equ FLASH_IAPSR, 0x505f

; Flash Program memory unprotection register 
.equ FLASH_PUKR, 0x5062

; Data EEPROM unprotection register 
.equ FLASH_DUKR, 0x5064

; External Interrupt Control Register (ITC) 
;***************************************************************

; External interrupt control register 1 
.equ EXTI_CR1, 0x50a0

; External interrupt control register 2 
.equ EXTI_CR2, 0x50a1

; Reset (RST) 
;***************************************************************

; Reset status register 1 
.equ RST_SR, 0x50b3

; Clock Control (CLK) 
;***************************************************************

; Internal clock control register 
.equ CLK_ICKR, 0x50c0

; External clock control register 
.equ CLK_ECKR, 0x50c1

; Clock master status register 
.equ CLK_CMSR, 0x50c3

; Clock master switch register 
.equ CLK_SWR, 0x50c4

; Clock switch control register 
.equ CLK_SWCR, 0x50c5

; Clock divider register 
.equ CLK_CKDIVR, 0x50c6

; Peripheral clock gating register 1 
.equ CLK_PCKENR1, 0x50c7

; Clock security system register 
.equ CLK_CSSR, 0x50c8

; Configurable clock control register 
.equ CLK_CCOR, 0x50c9

; Peripheral clock gating register 2 
.equ CLK_PCKENR2, 0x50ca

; CAN clock control register 
.equ CLK_CANCCR, 0x50cb

; HSI clock calibration trimming register 
.equ CLK_HSITRIMR, 0x50cc

; SWIM clock control register 
.equ CLK_SWIMCCR, 0x50cd

; Window Watchdog (WWDG) 
;***************************************************************

; WWDG Control Register 
.equ WWDG_CR, 0x50d1

; WWDR Window Register 
.equ WWDG_WR, 0x50d2

; Independent Watchdog (IWDG) 
;***************************************************************

; IWDG Key Register 
.equ IWDG_KR, 0x50e0

; IWDG Prescaler Register 
.equ IWDG_PR, 0x50e1

; IWDG Reload Register 
.equ IWDG_RLR, 0x50e2

; Auto Wake-Up (AWU) 
;***************************************************************

; AWU Control/Status Register 
.equ AWU_CSR, 0x50f0

; AWU asynchronous prescaler buffer register 
.equ AWU_APR, 0x50f1

; AWU Timebase selection register 
.equ AWU_TBR, 0x50f2

; Beeper (BEEP) 
;***************************************************************

; BEEP Control/Status Register 
.equ BEEP_CSR, 0x50f3

; Serial Peripheral Interface (SPI) 
;***************************************************************

; SPI Control Register 1 
.equ SPI_CR1, 0x5200

; SPI Control Register 2 
.equ SPI_CR2, 0x5201

; SPI Interrupt Control Register 
.equ SPI_ICR, 0x5202

; SPI Status Register 
.equ SPI_SR, 0x5203

; SPI Data Register 
.equ SPI_DR, 0x5204

; SPI CRC Polynomial Register 
.equ SPI_CRCPR, 0x5205

; SPI Rx CRC Register 
.equ SPI_RXCRCR, 0x5206

; SPI Tx CRC Register 
.equ SPI_TXCRCR, 0x5207

; I2C Bus Interface (I2C) 
;***************************************************************

; I2C control register 1 
.equ I2C_CR1, 0x5210

; I2C control register 2 
.equ I2C_CR2, 0x5211

; I2C frequency register 
.equ I2C_FREQR, 0x5212

; I2C Own address register low 
.equ I2C_OARL, 0x5213

; I2C Own address register high 
.equ I2C_OARH, 0x5214

; I2C data register 
.equ I2C_DR, 0x5216

; I2C status register 1 
.equ I2C_SR1, 0x5217

; I2C status register 2 
.equ I2C_SR2, 0x5218

; I2C status register 3 
.equ I2C_SR3, 0x5219

; I2C interrupt control register 
.equ I2C_ITR, 0x521a

; I2C Clock control register low 
.equ I2C_CCRL, 0x521b

; I2C Clock control register high 
.equ I2C_CCRH, 0x521c

; I2C TRISE register 
.equ I2C_TRISER, 0x521d

; I2C packet error checking register 
.equ I2C_PECR, 0x521e

; Universal synch/asynch receiver transmitter (UART1) 
;***************************************************************

; UART1 Status Register 
.equ UART1_SR, 0x5230

; UART1 Data Register 
.equ UART1_DR, 0x5231

; UART1 Baud Rate Register 1 
.equ UART1_BRR1, 0x5232

; UART1 Baud Rate Register 2 
.equ UART1_BRR2, 0x5233

; UART1 Control Register 1 
.equ UART1_CR1, 0x5234

; UART1 Control Register 2 
.equ UART1_CR2, 0x5235

; UART1 Control Register 3 
.equ UART1_CR3, 0x5236

; UART1 Control Register 4 
.equ UART1_CR4, 0x5237

; UART1 Control Register 5 
.equ UART1_CR5, 0x5238

; UART1 Guard time Register 
.equ UART1_GTR, 0x5239

; UART1 Prescaler Register 
.equ UART1_PSCR, 0x523a

; 16-Bit Timer 1 (TIM1) 
;***************************************************************

; TIM1 Control register 1 
.equ TIM1_CR1, 0x5250

; TIM1 Control register 2 
.equ TIM1_CR2, 0x5251

; TIM1 Slave Mode Control register 
.equ TIM1_SMCR, 0x5252

; TIM1 external trigger register 
.equ TIM1_ETR, 0x5253

; TIM1 Interrupt enable register 
.equ TIM1_IER, 0x5254

; TIM1 Status register 1 
.equ TIM1_SR1, 0x5255

; TIM1 Status register 2 
.equ TIM1_SR2, 0x5256

; TIM1 Event Generation register 
.equ TIM1_EGR, 0x5257

; TIM1 Capture/Compare mode register 1 
.equ TIM1_CCMR1, 0x5258

; TIM1 Capture/Compare mode register 2 
.equ TIM1_CCMR2, 0x5259

; TIM1 Capture/Compare mode register 3 
.equ TIM1_CCMR3, 0x525a

; TIM1 Capture/Compare mode register 4 
.equ TIM1_CCMR4, 0x525b

; TIM1 Capture/Compare enable register 1 
.equ TIM1_CCER1, 0x525c

; TIM1 Capture/Compare enable register 2 
.equ TIM1_CCER2, 0x525d

; TIM1 Counter 
.equ TIM1_CNTR, 0x525e
; Data bits High 
.equ TIM1_CNTRH, 0x525e
; Data bits Low 
.equ TIM1_CNTRL, 0x525f

; TIM1 Prescaler register 
.equ TIM1_PSCR, 0x5260
; Data bits High 
.equ TIM1_PSCRH, 0x5260
; Data bits Low 
.equ TIM1_PSCRL, 0x5261

; TIM1 Auto-reload register 
.equ TIM1_ARR, 0x5262
; Data bits High 
.equ TIM1_ARRH, 0x5262
; Data bits Low 
.equ TIM1_ARRL, 0x5263

; TIM1 Repetition counter register 
.equ TIM1_RCR, 0x5264

; TIM1 Capture/Compare register 1 
.equ TIM1_CCR1, 0x5265
; Data bits High 
.equ TIM1_CCR1H, 0x5265
; Data bits Low 
.equ TIM1_CCR1L, 0x5266

; TIM1 Capture/Compare register 2 
.equ TIM1_CCR2, 0x5267
; Data bits High 
.equ TIM1_CCR2H, 0x5267
; Data bits Low 
.equ TIM1_CCR2L, 0x5268

; TIM1 Capture/Compare register 3 
.equ TIM1_CCR3, 0x5269
; Data bits High 
.equ TIM1_CCR3H, 0x5269
; Data bits Low 
.equ TIM1_CCR3L, 0x526a

; TIM1 Capture/Compare register 4 
.equ TIM1_CCR4, 0x526b
; Data bits High 
.equ TIM1_CCR4H, 0x526b
; Data bits Low 
.equ TIM1_CCR4L, 0x526c

; TIM1 Break register 
.equ TIM1_BKR, 0x526d

; TIM1 Dead-time register 
.equ TIM1_DTR, 0x526e

; TIM1 Output idle state register 
.equ TIM1_OISR, 0x526f

; 16-Bit Timer 2 (TIM2) 
;***************************************************************

; TIM2 Control register 1 
.equ TIM2_CR1, 0x5300

; TIM2 Interrupt enable register 
.equ TIM2_IER, 0x5303

; TIM2 Status register 1 
.equ TIM2_SR1, 0x5304

; TIM2 Status register 2 
.equ TIM2_SR2, 0x5305

; TIM2 Event Generation register 
.equ TIM2_EGR, 0x5306

; TIM2 Capture/Compare mode register 1 
.equ TIM2_CCMR1, 0x5307

; TIM2 Capture/Compare mode register 2 
.equ TIM2_CCMR2, 0x5308

; TIM2 Capture/Compare mode register 3 
.equ TIM2_CCMR3, 0x5309

; TIM2 Capture/Compare enable register 1 
.equ TIM2_CCER1, 0x530a

; TIM2 Capture/Compare enable register 2 
.equ TIM2_CCER2, 0x530b

; TIM2 Counter 
.equ TIM2_CNTR, 0x530c
; Data bits High 
.equ TIM2_CNTRH, 0x530c
; Data bits Low 
.equ TIM2_CNTRL, 0x530d

; TIM2 Prescaler register 
.equ TIM2_PSCR, 0x530e

; TIM2 Auto-reload register 
.equ TIM2_ARR, 0x530f
; Data bits High 
.equ TIM2_ARRH, 0x530f
; Data bits Low 
.equ TIM2_ARRL, 0x5310

; TIM2 Capture/Compare register 1 
.equ TIM2_CCR1, 0x5311
; Data bits High 
.equ TIM2_CCR1H, 0x5311
; Data bits Low 
.equ TIM2_CCR1L, 0x5312

; TIM2 Capture/Compare register 2 
.equ TIM2_CCR2, 0x5313
; Data bits High 
.equ TIM2_CCR2H, 0x5313
; Data bits Low 
.equ TIM2_CCR2L, 0x5314

; TIM2 Capture/Compare register 3 
.equ TIM2_CCR3, 0x5315
; Data bits High 
.equ TIM2_CCR3H, 0x5315
; Data bits Low 
.equ TIM2_CCR3L, 0x5316

; 8-Bit  Timer 4 (TIM4) 
;***************************************************************

; TIM4 Control register 1 
.equ TIM4_CR1, 0x5340

; TIM4 Interrupt enable register 
.equ TIM4_IER, 0x5343

; TIM4 Status register 
.equ TIM4_SR, 0x5344

; TIM4 Event Generation register 
.equ TIM4_EGR, 0x5345

; TIM4 Counter 
.equ TIM4_CNTR, 0x5346

; TIM4 Prescaler register 
.equ TIM4_PSCR, 0x5347

; TIM4 Auto-reload register 
.equ TIM4_ARR, 0x5348

; 10-Bit A/D Converter (ADC1) 
;***************************************************************

; ADC Data buffer Register 0 
.equ ADC_DB0R, 0x53e0
; Data Buffer register 0 High 
.equ ADC_DB0RH, 0x53e0
; Data Buffer register 0 Low 
.equ ADC_DB0RL, 0x53e1

; ADC Data buffer Register 1 
.equ ADC_DB1R, 0x53e2
; Data Buffer register 1 High 
.equ ADC_DB1RH, 0x53e2
; Data Buffer register 1 Low 
.equ ADC_DB1RL, 0x53e3

; ADC Data buffer Register 2 
.equ ADC_DB2R, 0x53e4
; Data Buffer register 2 High 
.equ ADC_DB2RH, 0x53e4
; Data Buffer register 2 Low 
.equ ADC_DB2RL, 0x53e5

; ADC Data buffer Register 3 
.equ ADC_DB3R, 0x53e6
; Data Buffer register 3 High 
.equ ADC_DB3RH, 0x53e6
; Data Buffer register 3 Low 
.equ ADC_DB3RL, 0x53e7

; ADC Data buffer Register 4 
.equ ADC_DB4R, 0x53e8
; Data Buffer register 4 High 
.equ ADC_DB4RH, 0x53e8
; Data Buffer register 4 Low 
.equ ADC_DB4RL, 0x53e9

; ADC Data buffer Register 5 
.equ ADC_DB5R, 0x53ea
; Data Buffer register 5 High 
.equ ADC_DB5RH, 0x53ea
; Data Buffer register 5 Low 
.equ ADC_DB5RL, 0x53eb

; ADC Data buffer Register 6 
.equ ADC_DB6R, 0x53ec
; Data Buffer register 6 High 
.equ ADC_DB6RH, 0x53ec
; Data Buffer register 6 Low 
.equ ADC_DB6RL, 0x53ed

; ADC Data buffer Register 7 
.equ ADC_DB7R, 0x53ee
; Data Buffer register 7 High 
.equ ADC_DB7RH, 0x53ee
; Data Buffer register 7 Low 
.equ ADC_DB7RL, 0x53ef

; ADC Data buffer Register 8 
.equ ADC_DB8R, 0x53f0
; Data Buffer register 8 High 
.equ ADC_DB8RH, 0x53f0
; Data Buffer register 8 Low 
.equ ADC_DB8RL, 0x53f1

; ADC Data buffer Register 9 
.equ ADC_DB9R, 0x53f2
; Data Buffer register 9 High 
.equ ADC_DB9RH, 0x53f2
; Data Buffer register 9 Low 
.equ ADC_DB9RL, 0x53f3

; ADC Control/Status Register 
.equ ADC_CSR, 0x5400

; ADC Configuration Register 1 
.equ ADC_CR1, 0x5401

; ADC Configuration Register 2 
.equ ADC_CR2, 0x5402

; ADC Configuration Register 3 
.equ ADC_CR3, 0x5403

; ADC Data Register 
.equ ADC_DR, 0x5404
; Data bits High 
.equ ADC_DRH, 0x5404
; Data bits Low 
.equ ADC_DRL, 0x5405

; ADC Schmitt Trigger Disable Register 
.equ ADC_TDR, 0x5406
; Schmitt trigger disable High 
.equ ADC_TDRH, 0x5406
; Schmitt trigger disable Low 
.equ ADC_TDRL, 0x5407

; ADC High Threshold Register 
.equ ADC_HTR, 0x5408
; High Threshold Register High 
.equ ADC_HTRH, 0x5408
; High Threshold Register Low 
.equ ADC_HTRL, 0x5409

; ADC Low Threshold Register 
.equ ADC_LTR, 0x540a
; Low Threshold Register High 
.equ ADC_LTRH, 0x540a
; Low Threshold Register Low 
.equ ADC_LTRL, 0x540b

; ADC Analog Watchdog Status Register 
.equ ADC_AWSR, 0x540c
; Analog Watchdog Status register High 
.equ ADC_AWSRH, 0x540c
; Analog Watchdog Status register Low 
.equ ADC_AWSRL, 0x540d

; ADC Analog Watchdog Control Register 
.equ ADC_AWCR, 0x540e
; Analog Watchdog Control register High 
.equ ADC_AWCRH, 0x540e
; Analog Watchdog Control register Low 
.equ ADC_AWCRL, 0x540f

;  Global configuration register (CFG) 
;***************************************************************

; CFG Global configuration register 
.equ CFG_GCR, 0x7f60

; Interrupt Software Priority Register (ITC) 
;***************************************************************

; Interrupt Software priority register 1 
.equ ITC_SPR1, 0x7f70

; Interrupt Software priority register 2 
.equ ITC_SPR2, 0x7f71

; Interrupt Software priority register 3 
.equ ITC_SPR3, 0x7f72

; Interrupt Software priority register 4 
.equ ITC_SPR4, 0x7f73

; Interrupt Software priority register 5 
.equ ITC_SPR5, 0x7f74

; Interrupt Software priority register 6 
.equ ITC_SPR6, 0x7f75

; Interrupt Software priority register 7 
.equ ITC_SPR7, 0x7f76

;#endif ; __STM8S103F__ 
