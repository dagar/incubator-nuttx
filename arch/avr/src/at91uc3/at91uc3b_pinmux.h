/************************************************************************************
 * arch/avr/src/at91uc3/at91uc3_pinmux.h
 *
 *   Copyright (C) 2010 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_AVR_SRC_AT91UC3_AT91UC3_PINMUX_H
#define __ARCH_AVR_SRC_AT91UC3_AT91UC3_PINMUX_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* NOTES:
 * 1. No external pins for PA28-PA31, PB0-PB11 on 48-pin packages (UC3B1).
 * 2. Function D is available only on UC3Bx12.
 */

#define PINMUX_GPIO0              (GPIO_ENABLE | GPIO_PORTA | 0)
#define PINMUX_GPIO1              (GPIO_ENABLE | GPIO_PORTA | 1)
#define PINMUX_GPIO2              (GPIO_ENABLE | GPIO_PORTA | 2)
#define PINMUX_GPIO3              (GPIO_ENABLE | GPIO_PORTA | 3)
#define PINMUX_ADC_AD0            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 3)
#define PINMUX_PM_GCLK0 U         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 3)
#define PINMUX_SBB_USB_ID         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 3)
#define PINMUX_ABDAC_DATA0        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 3)
#define PINMUX_GPIO4              (GPIO_ENABLE | GPIO_PORTA | 4)
#define PINMUX_ADC_AD1            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 4)
#define PINMUX_M_GCLK1            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 4)
#define PINMUX_USBB_USB_VBOF      (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 4)
#define PINMUX_ABDAC_DATAN0       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 4)
#define PINMUX_GPIO5              (GPIO_ENABLE | GPIO_PORTA | 5)
#define PINMUX_EIC_EXTINT0        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 5)
#define PINMUX_ADC_AD2            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 5)
#define PINMUX_USART1_DCD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 5)
#define PINMUX_ABDAC_DATA1        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 5)
#define PINMUX_GPIO6              (GPIO_ENABLE | GPIO_PORTA | 6)
#define PINMUX_EIC_EXTINT1        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 6)
#define PINMUX_ADC_AD3            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 6)
#define PINMUX_USART1_DSR         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 6)
#define PINMUX_ABDAC_DATAN1       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 6)
#define PINMUX_GPIO7              (GPIO_ENABLE | GPIO_PORTA | 7)
#define PINMUX_PM_PWM0            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 7)
#define PINMUX_ADC_AD4            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 7)
#define PINMUX_USART1_DTR         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 7)
#define PINMUX_SSC_RX_FRAME_SYNC  (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 7)
#define PINMUX_GPIO8              (GPIO_ENABLE | GPIO_PORTA | 8)
#define PINMUX_PWM_PWM1           (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 8)
#define PINMUX_ADC_AD5            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 8)
#define PINMUX_USART1_RI          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 8)
#define PINMUX_SSC_RX_CLOCK       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 8)
#define PINMUX_GPIO9              (GPIO_ENABLE | GPIO_PORTA | 9)
#define PINMUX_TWI_SCL            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 9)
#define PINMUX_SPI0_NPCS2         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 9)
#define PINMUX_USART1_CTS         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 9)
#define PINMUX_GPIO10             (GPIO_ENABLE | GPIO_PORTA | 10)
#define PINMUX_TWI_SDA            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 10)
#define PINMUX_SPI0_NPCS3         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 10)
#define PINMUX_USART1_RTS         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 10)
#define PINMUX_GPIO11             (GPIO_ENABLE | GPIO_PORTA | 11)
#define PINMUX_USART0_RTS         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 11)
#define PINMUX_TC_A2              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 11)
#define PINMUX_PWM_PWM0           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 11)
#define PINMUX_SSC_RX_DATA        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 11)
#define PINMUX_GPIO12             (GPIO_ENABLE | GPIO_PORTA | 12)
#define PINMUX_USART0_CTS         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 12)
#define PINMUX_TC_B2              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 12)
#define PINMUX_PWM_PWM1           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 12)
#define PINMUX_USART1_TXD         (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 12)
#define PINMUX_GPIO13             (GPIO_ENABLE | GPIO_PORTA | 13)
#define PINMUX_EIC_NMI            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 13)
#define PINMUX_PWM_PWM2           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 13)
#define PINMUX_USART0_CLK         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 13)
#define PINMUX_SSC_RX_CLOCK       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 13)
#define PINMUX_GPIO14             (GPIO_ENABLE | GPIO_PORTA | 14)
#define PINMUX_SPI0_MOSI          (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 14)
#define PINMUX_PWM_PWM3           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 14)
#define PINMUX_EIC_EXTINT2        (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 14)
#define PINMUX_PM_GCLK2           (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 14)
#define PINMUX_GPIO15             (GPIO_ENABLE | GPIO_PORTA | 15)
#define PINMUX_SPI0_SCK           (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 15)
#define PINMUX_PWM_PWM4           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 15)
#define PINMUX_USART2_CLK         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 15)
#define PINMUX_GPIO16             (GPIO_ENABLE | GPIO_PORTA | 16)
#define PINMUX_SPI0_NPCS0         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 16)
#define PINMUX_TC_CLK1            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 16)
#define PINMUX_PWM_PWM4           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 16)
#define PINMUX_GPIO17             (GPIO_ENABLE | GPIO_PORTA | 17)
#define PINMUX_SPI0_NPCS1         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 17)
#define PINMUX_TC_CLK2            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 17)
#define PINMUX_SPI0_SCK           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 17)
#define PINMUX_USART1_RXD         (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 17)
#define PINMUX_GPIO18             (GPIO_ENABLE | GPIO_PORTA | 18)
#define PINMUX_USART0_RXD         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 18)
#define PINMUX_PWM_PWM5           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 18)
#define PINMUX_SPI0_MISO          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 18)
#define PINMUX_SSC_RX_FRAME_SYNC  (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 18)
#define PINMUX_GPIO19             (GPIO_ENABLE | GPIO_PORTA | 19)
#define PINMUX_USART0_TXD         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 19)
#define PINMUX_PWM_PWM6           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 19)
#define PINMUX_SPI0_MOSI          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 19)
#define PINMUX_SSC_TX_CLOCK       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 19)
#define PINMUX_GPIO20             (GPIO_ENABLE | GPIO_PORTA | 20)
#define PINMUX_USART1_CLK         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 20)
#define PINMUX_TC_CLK0            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 20)
#define PINMUX_USART2_RXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 20)
#define PINMUX_SSC_TX_DATA        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 20)
#define PINMUX_GPIO21             (GPIO_ENABLE | GPIO_PORTA | 21)
#define PINMUX_PWM_PWM2           (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 21)
#define PINMUX_TC_A1              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 21)
#define PINMUX_USART2_TXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 21)
#define PINMUX_SSC_TX_FRAME_SYNC  (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 21)
#define PINMUX_GPIO22             (GPIO_ENABLE | GPIO_PORTA | 22)
#define PINMUX_PWM_PWM6           (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 22)
#define PINMUX_TC_B1              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 22)
#define PINMUX_ADC_TRIGGER        (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 22)
#define PINMUX_ABDAC_DATA0        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 22)
#define PINMUX_GPIO23             (GPIO_ENABLE | GPIO_PORTA | 23)
#define PINMUX_USART1_TXD         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 23)
#define PINMUX_SPI0_NPCS1         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 23)
#define PINMUX_EIC_EXTINT3        (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 23)
#define PINMUX_PWM_PWM0           (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 23)
#define PINMUX_GPIO24             (GPIO_ENABLE | GPIO_PORTA | 24)
#define PINMUX_USART1_RXD         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 24)
#define PINMUX_SPI0_NPCS0         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 24)
#define PINMUX_EIC_EXTINT4        (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 24)
#define PINMUX_PWM_PWM1           (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 24)
#define PINMUX_GPIO25             (GPIO_ENABLE | GPIO_PORTA | 25)
#define PINMUX_SPI0_MISO          (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 25)
#define PINMUX_WM_PWM3            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 25)
#define PINMUX_EIC_EXTINT5        (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 25)
#define PINMUX_GPIO26             (GPIO_ENABLE | GPIO_PORTA | 26)
#define PINMUX_USBB_USB_ID        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 26)
#define PINMUX_USART2_TXD         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 26)
#define PINMUX_TC_A0              (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 26)
#define PINMUX_ABDAC_DATA1        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 26)
#define PINMUX_GPIO27             (GPIO_ENABLE | GPIO_PORTA | 27)
#define PINMUX_USBB_USB_VBOF      (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 27)
#define PINMUX_USART2_RXD         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 27)
#define PINMUX_TC_B0              (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 27)
#define PINMUX_ABDAC_DATAN1       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 27)
#define PINMUX_GPIO28             (GPIO_ENABLE | GPIO_PORTA | 28)
#define PINMUX_USART0_CLK         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 28)
#define PINMUX_PWM_PWM4           (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 28)
#define PINMUX_SPI0_MISO          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 28)
#define PINMUX_ABDAC_DATAN0       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTA | 28)
#define PINMUX_GPIO29             (GPIO_ENABLE | GPIO_PORTA | 29)
#define PINMUX_TC_CLK0            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 29)
#define PINMUX_TC_CLK1            (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 29)
#define PINMUX_SPI0_MOSI          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 29)
#define PINMUX_GPIO30             (GPIO_ENABLE | GPIO_PORTA | 30)
#define PINMUX_ADC_AD6            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 30)
#define PINMUX_EIC_SCAN0          (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 30)
#define PINMUX_PM_GCLK2           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 30)
#define PINMUX_GPIO31             (GPIO_ENABLE | GPIO_PORTA | 31)
#define PINMUX_ADC_AD7            (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTA | 31)
#define PINMUX_EIC_SCAN1          (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTA | 31)
#define PINMUX_PWM_PWM6           (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTA | 31)
#define PINMUX_GPIO32             (GPIO_ENABLE | GPIO_PORTB | 0)
#define PINMUX_TC_A0              (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 0)
#define PINMUX_EIC_SCAN2          (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 0)
#define PINMUX_USART2_CTS         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 0)
#define PINMUX_GPIO33             (GPIO_ENABLE | GPIO_PORTB | 1)
#define PINMUX_TC_B0              (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 1)
#define PINMUX_EIC_SCAN3          (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 1)
#define PINMUX_USART2_RTS         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 1)
#define PINMUX_GPIO34             (GPIO_ENABLE | GPIO_PORTB | 2)
#define PINMUX_EIC_EXTINT6        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 2)
#define PINMUX_TC_A1              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 2)
#define PINMUX_USART1_TXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 2)
#define PINMUX_GPIO35             (GPIO_ENABLE | GPIO_PORTB | 3)
#define PINMUX_EIC_EXTINT7        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 3)
#define PINMUX_TC_B1              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 3)
#define PINMUX_USART1_RXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 3)
#define PINMUX_GPIO36             (GPIO_ENABLE | GPIO_PORTB | 4)
#define PINMUX_USART1_CTS         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 4)
#define PINMUX_SPI0_NPCS3         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 4)
#define PINMUX_TC_CLK2            (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 4)
#define PINMUX_GPIO37             (GPIO_ENABLE | GPIO_PORTB | 5)
#define PINMUX_USART1_RTS         (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 5)
#define PINMUX_SPI0_NPCS2         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 5)
#define PINMUX_WM_PWM5            (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 5)
#define PINMUX_GPIO38             (GPIO_ENABLE | GPIO_PORTB | 6)
#define PINMUX_SSC_RX_CLOCK       (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 6)
#define PINMUX_USART1_DCD         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 6)
#define PINMUX_EIC_SCAN4          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 6)
#define PINMUX_ABDAC_DATA0        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTB | 6)
#define PINMUX_GPIO39             (GPIO_ENABLE | GPIO_PORTB | 7)
#define PINMUX_SSC_RX_DATA        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 7)
#define PINMUX_USART1_DSR         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 7)
#define PINMUX_EIC_SCAN5          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 7)
#define PINMUX_ABDAC_DATAN0       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTB | 7)
#define PINMUX_GPIO40             (GPIO_ENABLE | GPIO_PORTB | 8)
#define PINMUX_SSC_RX_FRAME_SYNC  (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 8)
#define PINMUX_USART1_DTR         (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 8)
#define PINMUX_EIC_SCAN6          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 8)
#define PINMUX_ABDAC_DATA1        (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTB | 8)
#define PINMUX_GPIO41             (GPIO_ENABLE | GPIO_PORTB | 9)
#define PINMUX_SSC_TX_CLOCK       (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 9)
#define PINMUX_USART1_RI          (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 9)
#define PINMUX_EIC_SCAN7          (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 9)
#define PINMUX_ABDAC_DATAN1       (GPIO_PERIPH | GPIO_FUNCD | GPIO_PORTB | 9)
#define PINMUX_GPIO42             (GPIO_ENABLE | GPIO_PORTB | 10)
#define PINMUX_SSC_TX_DATA        (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 10)
#define PINMUX_TC_A2              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 10)
#define PINMUX_USART0_RXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 10)
#define PINMUX_PIO43              (GPIO_ENABLE | GPIO_PORTB | 11)
#define PINMUX_SSC_TX_FRAME_SYNC  (GPIO_PERIPH | GPIO_FUNCA | GPIO_PORTB | 11)
#define PINMUX_TC_B2              (GPIO_PERIPH | GPIO_FUNCB | GPIO_PORTB | 11)
#define PINMUX_USART0_TXD         (GPIO_PERIPH | GPIO_FUNCC | GPIO_PORTB | 11)

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Public Data
 ************************************************************************************/

/************************************************************************************
 * Public Functions
 ************************************************************************************/

#endif /* __ARCH_AVR_SRC_AT91UC3_AT91UC3_PINMUX_H */

