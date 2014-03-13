#ifndef __GPIO_H__
#define __GPIO_H__

#include "gpio.h"
#include "CoX_base.h"


//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplu
extern "C"
{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Interface
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO
//! @{
//
//*****************************************************************************


//*****************************************************************************
//
//! \addtogroup xGPIO_Config xGPIO interrupt number config
//!
//! \section xGPIO_Config_section 1. Where to use this group
//! This is use to config xGPIO interrupt number.The default number is 8.
//! You can change this value according to your situation.
//!
//! \section xGPIO_Config_CoX 2.CoX Port Details
//! This is the GPIO interrupt number configuration in CoX. It show as same Macro name \ref xGPIO_INT_NUMBER
//! in all series of CoX implementation.
//!
//! |xGPIO General Pin ID    |       CoX      |     LPC17xx            |
//! |------------------------|----------------|------------------------|
//! |xGPIO_INT_NUMBER        |    Mandatory   |   xGPIO_INT_NUMBER     |
//! more please refer to [xGPIO interrupt number config ID in MD file](@ref xGPIO_Config_md).
//! @{
//
//*****************************************************************************

//
//! xGPIO interrupt number config
//
#define xGPIO_INT_NUMBER        8

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_General_Pin_IDs xGPIO General Pin ID
//!
//! \section    xGPIO_General_Pin_IDs 1. Where to use this group
//!             The following values define the bit field for the ulPins argument
//!             to several of the APIs. So all the API which have a ulPins
//!             argument must use this group.<br>
//!             \ref xGPIODirModeSet <br>
//!             \ref xGPIODirModeGet <br>
//!             \ref xGPIOPinIntCallbackInit <br>
//!             \ref xGPIOPinIntEnable <br>
//!             \ref xGPIOPinIntDisable <br>
//!             \ref xGPIOPinIntClear <br>
//!             \ref xGPIOPinRead <br>
//!             \ref xGPIOPinWrite <br>
//!             \ref xGPIOPadConfigSet <br>
//!             \ref xGPIOPadConfigSet <br>
//!
//! \section    xGPIO_General_Pin_IDs_CoX 2.CoX Port Details
//!
//! This is a mandatory argument in cox,it show as xGPIO_PIN_n, n is general be 7\15 or 31.
//! For LPC17xx n is 31.
//!
//! |  xGPIO General Pin ID    |       CoX      |          LPC17xx       |
//! |--------------------------|----------------|------------------------|
//! |  xGPIO_PIN_n             |    Mandatory   |       xGPIO_PIN_0      |
//! |                          |                |       xGPIO_PIN_1      |
//! |                          |                |         ...            |
//! |                          |                |      xGPIO_PIN_30      |
//! |                          |                |      xGPIO_PIN_31      |
//!
//! More please refer to [xGPIO General Pin ID in MD file](@ref xGPIO_General_Pin_IDs_md).
//! @{
//
//*****************************************************************************

//! GPIO Pin 0
#define xGPIO_PIN_0             GPIO_PIN_0

//! GPIO Pin 1
#define xGPIO_PIN_1             GPIO_PIN_1

//! GPIO Pin 2
#define xGPIO_PIN_2             GPIO_PIN_2

//! GPIO Pin 3
#define xGPIO_PIN_3             GPIO_PIN_3

//! GPIO Pin 4
#define xGPIO_PIN_4             GPIO_PIN_4

//! GPIO Pin 5
#define xGPIO_PIN_5             GPIO_PIN_5

//! GPIO Pin 6
#define xGPIO_PIN_6             GPIO_PIN_6

//! GPIO Pin 7
#define xGPIO_PIN_7             GPIO_PIN_7

//! GPIO Pin 8
#define xGPIO_PIN_8             GPIO_PIN_8

//! GPIO Pin 9
#define xGPIO_PIN_9             GPIO_PIN_9

//! GPIO Pin 10
#define xGPIO_PIN_10            GPIO_PIN_10

//! GPIO Pin 11
#define xGPIO_PIN_11            GPIO_PIN_11

//! GPIO Pin 12
#define xGPIO_PIN_12            GPIO_PIN_12

//! GPIO Pin 13
#define xGPIO_PIN_13            GPIO_PIN_13

//! GPIO Pin 14
#define xGPIO_PIN_14            GPIO_PIN_14

//! GPIO Pin 15
#define xGPIO_PIN_15            GPIO_PIN_15

//! GPIO Pin 16
#define xGPIO_PIN_16            GPIO_PIN_16

//! GPIO Pin 17
#define xGPIO_PIN_17            GPIO_PIN_17

//! GPIO Pin 18
#define xGPIO_PIN_18            GPIO_PIN_18

//! GPIO Pin 19
#define xGPIO_PIN_19            GPIO_PIN_19

//! GPIO Pin 20
#define xGPIO_PIN_20            GPIO_PIN_20

//! GPIO Pin 21
#define xGPIO_PIN_21            GPIO_PIN_21

//! GPIO Pin 22
#define xGPIO_PIN_22            GPIO_PIN_22

//! GPIO Pin 23
#define xGPIO_PIN_23            GPIO_PIN_23

//! GPIO Pin 24
#define xGPIO_PIN_24            GPIO_PIN_24

//! GPIO Pin 25
#define xGPIO_PIN_25            GPIO_PIN_25

//! GPIO Pin 26
#define xGPIO_PIN_26            GPIO_PIN_26

//! GPIO Pin 27
#define xGPIO_PIN_27            GPIO_PIN_27

//! GPIO Pin 28
#define xGPIO_PIN_28            GPIO_PIN_28

//! GPIO Pin 29
#define xGPIO_PIN_29            GPIO_PIN_29

//! GPIO Pin 30
#define xGPIO_PIN_30            GPIO_PIN_30

//! GPIO Pin 31
#define xGPIO_PIN_31            GPIO_PIN_31

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_Dir_Mode xGPIO Dir Mode
//!
//! \section    xGPIO_Dir_Mode_S1 1. Where to use this group
//!             Values that can be passed to \ref xGPIODirModeSet as the ulPinIO
//!             parameter, and returned from \ref xGPIODirModeGet.
//!
//! \section    xGPIO_Dir_Mode_CoX 2.CoX Port Details
//! This is the GPIO mode in CoX. It show as same Macro name
//! in all series of CoX implementation.
//!
//! |  xGPIO Dir Mode       |       CoX       |          LPC17xx       |
//! |-----------------------|-----------------|------------------------|
//! |  xGPIO_DIR_MODE_IN    |    Mandatory    |            Y           |
//! |  xGPIO_DIR_MODE_OUT   |    Mandatory    |            Y           |
//! |  xGPIO_DIR_MODE_HW    |  Non-Mandatory  |            N           |
//! |  xGPIO_DIR_MODE_QB    |  Non-Mandatory  |            N           |
//! |  xGPIO_DIR_MODE_OD    |  Non-Mandatory  |            Y           |
//! More please refer to [xGPIO Dir Mode in MD file](@ref xGPIO_Dir_Mode_md).
//! @{
//
//*****************************************************************************

//
//! Pin is a GPIO input
//
#define xGPIO_DIR_MODE_IN       GPIO_DIR_MODE_IN

//
//! Pin is a GPIO output
//
#define xGPIO_DIR_MODE_OUT      GPIO_DIR_MODE_OUT

//
//! Pin is a peripheral function
//
#define xGPIO_DIR_MODE_HW       GPIO_DIR_MODE_HW

//
//! Pin is in Quasi-bidirectional mode
//
#define xGPIO_DIR_MODE_QB       GPIO_DIR_MODE_QB

//
//! Pin is in Open-Drain mode.
//
#define xGPIO_DIR_MODE_OD       GPIO_DIR_MODE_OD

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_Int_Type xGPIO Int Type
//!
//! \section    xGPIO_Int_Type_S1 1. Where to use this group
//!             Values that can be passed to xGPIOIntTypeSet as the ulIntType
//!             parameter, and returned from xGPIOIntTypeGet.
//!
//! \section xGPIO_Int_Type_CoX 2.CoX Port Details
//!
//! |  xGPIO Int Type       |       CoX      |          LPC17xx       |
//! |-----------------------|----------------|------------------------|
//! |  xGPIO_FALLING_EDGE   |    Mandatory   |            Y           |
//! |  xGPIO_RISING_EDGE    |    Mandatory   |            Y           |
//! |  xGPIO_LOW_LEVEL      |    Mandatory   |            N           |
//! |  xGPIO_HIGH_LEVEL     |    Mandatory   |            N           |
//! |  xGPIO_BOTH_LEVEL     |  Non-Mandatory |            N           |
//! |  xGPIO_BOTH_EDGES     |  Non-Mandatory |            Y           |
//!
//! More please refer to [xGPIO Int Type in MD file](@ref xGPIO_Int_Type_md).
//! @{
//
//*****************************************************************************

//
//! Interrupt on falling edge
//
#define xGPIO_FALLING_EDGE      INT_TYPE_FALLING

//
//! Interrupt on rising edge
//
#define xGPIO_RISING_EDGE       INT_TYPE_RISING

//
//! Interrupt on low level
//
#define xGPIO_LOW_LEVEL         GPIO_LOW_LEVEL

//
//! Interrupt on high level
//
#define xGPIO_HIGH_LEVEL        GPIO_HIGH_LEVEL

//
//! Interrupt on both edge
//
#define xGPIO_BOTH_EDGES        GPIO_BOTH_EDGES

//
//! Interrupt on both level
//
#define xGPIO_BOTH_LEVEL        GPIO_BOTH_LEVEL

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_Pad_Config_Strength xGPIO Pad Config Strength
//!
//! \section    xGPIO_Pad_Config_Strength_S1 1. Where to use this group
//!             Values that can be passed to xGPIOPadConfigSet as the ulStrength
//!             parameter, and returned by xGPIOPadConfigGet in the pulStrength
//!             parameter.
//!
//! \section    xGPIO_Pad_Config_Strength_CoX 2.CoX Port Details
//!
//! |  xGPIO Pad Strength   |       CoX      |          LPC17xx       |
//! |-----------------------|----------------|------------------------|
//! |  xGPIO_STRENGTH_nMA   | Non-Mandatory  |            N           |
//!
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_Short_Pin xGPIO Short Pin ID
//!
//! \section    xGPIO_Short_Pin_S1 1. Where to use this group
//!             The following values define the short pin argument(dShortPin)
//!             to several of the \b XPinTypexxx APIs and all the API which have
//!             a eShortPin argument.
//!             Such as
//!             \ref xGPIOSPinRead()
//!             \ref xGPIOSPinWrite()
//!
//! \section    xGPIO_Short_Pin_CoX 2.CoX Port Details
//! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//! +-------------------------+----------------+------------------------+
//! |  xGPIO Short Pin ID     |       CoX      |          LPC17xx       |
//! |-------------------------|----------------|------------------------|
//! |  PXn                    |    Mandatory   |    PA0 PA1 ... PA31    |
//! |   (X = A/B/...)         |                |------------------------|
//! |   (n = 0/1/...)         |                |    PB0 PB1 ... PB31    |
//! |                         |                |------------------------|
//! |                         |                |     ...                |
//! |                         |                |------------------------|
//! |                         |                |    PE0 PE1 ... PE31    |
//! +-------------------------+----------------+------------------------+
//! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//! @{
//
//*****************************************************************************

//! PortA
//! For LPC17xx mcu, Port A is equal to Port 0
#define PA0                      PA0
#define PA1                      PA1
#define PA2                      PA2
#define PA3                      PA3
#define PA4                      PA4
#define PA5                      PA5
#define PA6                      PA6
#define PA7                      PA7
#define PA8                      PA8
#define PA9                      PA9
#define PA10                     PA10
#define PA11                     PA11
#define PA12                     PA12
#define PA13                     PA13
#define PA14                     PA14
#define PA15                     PA15
#define PA16                     PA16
#define PA17                     PA17
#define PA18                     PA18
#define PA19                     PA19
#define PA20                     PA20
#define PA21                     PA21
#define PA22                     PA22
#define PA23                     PA23
#define PA24                     PA24
#define PA25                     PA25
#define PA26                     PA26
#define PA27                     PA27
#define PA28                     PA28
#define PA29                     PA29
#define PA30                     PA30
#define PA31                     PA31

//! PortB
//! For LPC17xx mcu, Port B is equal to Port 1
#define PB0                      PB0
#define PB1                      PB1
#define PB2                      PB2
#define PB3                      PB3
#define PB4                      PB4
#define PB5                      PB5
#define PB6                      PB6
#define PB7                      PB7
#define PB8                      PB8
#define PB9                      PB9
#define PB10                     PB10
#define PB11                     PB11
#define PB12                     PB12
#define PB13                     PB13
#define PB14                     PB14
#define PB15                     PB15
#define PB16                     PB16
#define PB17                     PB17
#define PB18                     PB18
#define PB19                     PB19
#define PB20                     PB20
#define PB21                     PB21
#define PB22                     PB22
#define PB23                     PB23
#define PB24                     PB24
#define PB25                     PB25
#define PB26                     PB26
#define PB27                     PB27
#define PB28                     PB28
#define PB29                     PB29
#define PB30                     PB30
#define PB31                     PB31

//! PortC
//! For LPC17xx mcu, Port C is equal to Port 2
#define PC0                      PC0
#define PC1                      PC1
#define PC2                      PC2
#define PC3                      PC3
#define PC4                      PC4
#define PC5                      PC5
#define PC6                      PC6
#define PC7                      PC7
#define PC8                      PC8
#define PC9                      PC9
#define PC10                     PC10
#define PC11                     PC11
#define PC12                     PC12
#define PC13                     PC13
#define PC14                     PC14
#define PC15                     PC15
#define PC16                     PC16
#define PC17                     PC17
#define PC18                     PC18
#define PC19                     PC19
#define PC20                     PC20
#define PC21                     PC21
#define PC22                     PC22
#define PC23                     PC23
#define PC24                     PC24
#define PC25                     PC25
#define PC26                     PC26
#define PC27                     PC27
#define PC28                     PC28
#define PC29                     PC29
#define PC30                     PC30
#define PC31                     PC31

//! PortD
//! For LPC17xx mcu, Port D is equal to Port 3
#define PD0                      PD0
#define PD1                      PD1
#define PD2                      PD2
#define PD3                      PD3
#define PD4                      PD4
#define PD5                      PD5
#define PD6                      PD6
#define PD7                      PD7
#define PD8                      PD8
#define PD9                      PD9
#define PD10                     PD10
#define PD11                     PD11
#define PD12                     PD12
#define PD13                     PD13
#define PD14                     PD14
#define PD15                     PD15
#define PD16                     PD16
#define PD17                     PD17
#define PD18                     PD18
#define PD19                     PD19
#define PD20                     PD20
#define PD21                     PD21
#define PD22                     PD22
#define PD23                     PD23
#define PD24                     PD24
#define PD25                     PD25
#define PD26                     PD26
#define PD27                     PD27
#define PD28                     PD28
#define PD29                     PD29
#define PD30                     PD30
#define PD31                     PD31

//! PortE
//! For LPC17xx mcu, Port E is equal to Port 4
#define PE0                      PE0
#define PE1                      PE1
#define PE2                      PE2
#define PE3                      PE3
#define PE4                      PE4
#define PE5                      PE5
#define PE6                      PE6
#define PE7                      PE7
#define PE8                      PE8
#define PE9                      PE9
#define PE10                     PE10
#define PE11                     PE11
#define PE12                     PE12
#define PE13                     PE13
#define PE14                     PE14
#define PE15                     PE15
#define PE16                     PE16
#define PE17                     PE17
#define PE18                     PE18
#define PE19                     PE19
#define PE20                     PE20
#define PE21                     PE21
#define PE22                     PE22
#define PE23                     PE23
#define PE24                     PE24
#define PE25                     PE25
#define PE26                     PE26
#define PE27                     PE27
#define PE28                     PE28
#define PE29                     PE29
#define PE30                     PE30
#define PE31                     PE31

//! PortF
//! For LPC17xx mcu, Port F is equal to Port 5
#define PF0                      PF0
#define PF1                      PF1
#define PF2                      PF2
#define PF3                      PF3
#define PF4                      PF4
#define PF5                      PF5
#define PF6                      PF6
#define PF7                      PF7
#define PF8                      PF8
#define PF9                      PF9
#define PF10                     PF10
#define PF11                     PF11
#define PF12                     PF12
#define PF13                     PF13
#define PF14                     PF14
#define PF15                     PF15
#define PF16                     PF16
#define PF17                     PF17
#define PF18                     PF18
#define PF19                     PF19
#define PF20                     PF20
#define PF21                     PF21
#define PF22                     PF22
#define PF23                     PF23
#define PF24                     PF24
#define PF25                     PF25
#define PF26                     PF26
#define PF27                     PF27
#define PF28                     PF28
#define PF29                     PF29
#define PF30                     PF30
#define PF31                     PF31

//! PortG
//! For LPC17xx mcu, Port G is equal to Port 6
#define PG0                      PG0
#define PG1                      PG1
#define PG2                      PG2
#define PG3                      PG3
#define PG4                      PG4
#define PG5                      PG5
#define PG6                      PG6
#define PG7                      PG7
#define PG8                      PG8
#define PG9                      PG9
#define PG10                     PG10
#define PG11                     PG11
#define PG12                     PG12
#define PG13                     PG13
#define PG14                     PG14
#define PG15                     PG15
#define PG16                     PG16
#define PG17                     PG17
#define PG18                     PG18
#define PG19                     PG19
#define PG20                     PG20
#define PG21                     PG21
#define PG22                     PG22
#define PG23                     PG23
#define PG24                     PG24
#define PG25                     PG25
#define PG26                     PG26
#define PG27                     PG27
#define PG28                     PG28
#define PG29                     PG29
#define PG30                     PG30
#define PG31                     PG31

//*****************************************************************************
//
//! @}
//
//*****************************************************************************


//*****************************************************************************
//
//! \addtogroup xGPIO_Peripheral_Pin xGPIO General Peripheral Pin
//! \brief      General Peripheral Pin Name.
//!
//! \section    xGPIO_Peripheral_Pin_define xGPIO Peripheral Pin define
//!             The macros of General Peripheral Pin Name always like:
//!             <b> ModuleName + n + PinName </b>, such as CAN0RX, SPI1CLK.
//!
//! \section    xGPIO_Peripheral_Pin_Port CoX Port Details.
//!
//! | General Peripheral Pin  |       CoX      |          LPC17xx                |
//! |-------------------------|----------------|---------------------------------|
//! | ADCn                    |    Mandatory   | ADC0 ADC1 ... ADC7              |
//! | I2CnSCK                 |    Mandatory   | I2C0SCK I2C1SCK I2C2SCK         |
//! | I2CnSDA                 |    Mandatory   | I2C0SDA I2C1SDA I2C2SDA         |
//! | SPInCLK                 |    Mandatory   | SPI0CLK                         |
//! | SPInMOSI                |    Mandatory   | SPI0MOSI                        |
//! | SPInMISO                |    Mandatory   | SPI0MISO                        |
//! | SPInCS                  |    Mandatory   | SPI0CS                          |
//! | UARTnRX                 |    Mandatory   | UART0RX UART1RX UART2RX UART3RX |
//! | UARTnTX                 |    Mandatory   | UART0TX UART1TX UART2TX UART3TX |
//! | UARTnCTS                |    Mandatory   | UART1CTS                        |
//! | UARTnDCD                |    Mandatory   | UART1DCD                        |
//! | UARTnDSR                |    Mandatory   | UART1DSR                        |
//! | UARTnDTR                |    Mandatory   | UART1DTR                        |
//! | PWMn                    |    Mandatory   | PWM0 ... PWM6                   |
//! | TIMCCPn                 |    Mandatory   | TIMCCP0 ... TIMCCP7             |
//! | DACOUTn                 |    Mandatory   | DACOUT0                         |
//! | CANnRX                  |    Mandatory   | CAN0RX  CAN1RX                  |
//! | CANnTX                  |    Mandatory   | CAN0TX  CAN1TX                  |
//!
//! @{
//
//*****************************************************************************

//! PWM Pin Type
#define PWM1                    PWM1
#define PWM2                    PWM2
#define PWM3                    PWM3
#define PWM4                    PWM4
#define PWM5                    PWM5
#define PWM6                    PWM6


//! UART Pin Type
#define UART0TX                 UART0TX
#define UART0RX                 UART0RX
#define UART0RI                 UART0RI
#define UART0CTS                UART0CTS
#define UART0DCD                UART0DCD
#define UART0DSR                UART0DSR
#define UART0DTR                UART0DTR
#define UART0RTS                UART0RTS
#define UART1TX                 UART1TX
#define UART1RX                 UART1RX
#define UART1RI                 UART1RI
#define UART1CTS                UART1CTS
#define UART1DCD                UART1DCD
#define UART1DSR                UART1DSR
#define UART1DTR                UART1DTR
#define UART1RTS                UART1RTS
#define UART2TX                 UART2TX
#define UART2RX                 UART2RX
#define UART2RI                 UART2RI
#define UART2CTS                UART2CTS
#define UART2DCD                UART2DCD
#define UART2DSR                UART2DSR
#define UART2DTR                UART2DTR
#define UART2RTS                UART2RTS
#define UART3TX                 UART3TX
#define UART3RX                 UART3RX
#define UART3RI                 UART3RI
#define UART3CTS                UART3CTS
#define UART3DCD                UART3DCD
#define UART3DSR                UART3DSR
#define UART3DTR                UART3DTR
#define UART3RTS                UART3RTS

//! I2C Pin Type
#define I2C0SDA                 I2C0SDA
#define I2C0SCL                 I2C0SCL
#define I2C1SDA                 I2C1SDA
#define I2C1SCL                 I2C1SCL
#define I2C2SDA                 I2C2SDA
#define I2C2SCL                 I2C2SCL
#define I2C3SDA                 I2C3SDA
#define I2C3SCL                 I2C3SCL

//! ADC Pin Type
#define ADC0                    ADC0
#define ADC1                    ADC1
#define ADC2                    ADC2
#define ADC3                    ADC3
#define ADC4                    ADC4
#define ADC5                    ADC5
#define ADC6                    ADC6
#define ADC7                    ADC7
#define ADC8                    ADC8
#define ADC9                    ADC9
#define ADC10                   ADC10
#define ADC11                   ADC11
#define ADC12                   ADC12
#define ADC13                   ADC13
#define ADC14                   ADC14
#define ADC15                   ADC15

#define CMP0N                   CMP0N
#define CMP0P                   CMP0P
#define CMP0O                   CMP0O
#define CMP1N                   CMP1N
#define CMP1P                   CMP1P
#define CMP1O                   CMP1O

//! \todo How to deal timer capture pin
//! Timer Pin Type
#define TIMCCP0                 TIMCCP0
#define TIMCCP1                 TIMCCP1
#define TIMCCP2                 TIMCCP2
#define TIMCCP3                 TIMCCP3
#define TIMCCP4                 TIMCCP4
#define TIMCCP5                 TIMCCP5
#define TIMCCP6                 TIMCCP6
#define TIMCCP7                 TIMCCP7
#define TIM_MAT0                TIM_MAT0
#define TIM_MAT1                TIM_MAT1
#define TIM_MAT2                TIM_MAT2
#define TIM_MAT3                TIM_MAT3

//! SPI Pin Type
#define SPI0CLK                 SPI0CLK
#define SPI0MOSI                SPI0MOSI
#define SPI0MISO                SPI0MISO
#define SPI0CS                  SPI0CS
#define SPI1CLK                 SPI1CLK
#define SPI1MOSI                SPI1MOSI
#define SPI1MISO                SPI1MISO
#define SPI1CS                  SPI1CS
#define SPI2CLK                 SPI2CLK
#define SPI2MOSI                SPI2MOSI
#define SPI2MISO                SPI2MISO
#define SPI2CS                  SPI2CS
#define SPI3CLK                 SPI3CLK
#define SPI3MOSI                SPI3MOSI
#define SPI3MISO                SPI3MISO
#define SPI3CS                  SPI3CS

//! DAC Pin Type
#define DACOUT1                 DACOUT1
#define DACOUT2                 DACOUT2

//! CAN Pin Type
#define CAN1RX                  CAN1RX
#define CAN1TX                  CAN1TX
#define CAN2RX                  CAN2RX
#define CAN2TX                  CAN2TX

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xGPIO_Exported_APIs xGPIO API
//! \brief      xGPIO API Reference.
//!
//! \section    xGPIO_Exported_APIs_Port CoX Port Details
//!
//! |       xGPIO API                 |       CoX      |          LPC17xx       |
//! |---------------------------------|----------------|------------------------|
//! |  \ref xGPIODirModeSet           |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinToPeripheralId   |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinToPort           |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinToPin            |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinDirModeSet       |    Mandatory   |            Y           |
//! |  \ref xGPIODirModeGet           |    Mandatory   |            Y           |
//! |  \ref xGPIOPinIntCallbackInit   |    Mandatory   |            Y           |
//! |  \ref xGPIOPinIntEnable         |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinIntEnable        |    Mandatory   |            Y           |
//! |  \ref xGPIOPinIntDisable        |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinIntDisable       |    Mandatory   |            Y           |
//! |  \ref xGPIOPinIntStatus         |    Mandatory   |            Y           |
//! |  \ref xGPIOPinIntClear          |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinIntClear         |    Mandatory   |            Y           |
//! |  \ref xGPIOPinRead              |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinRead             |    Mandatory   |            Y           |
//! |  \ref xGPIOPinWrite             |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinWrite            |    Mandatory   |            Y           |
//! |  \ref xGPIOPinConfigure         |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinTypeGPIOInput    |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinTypeGPIOOutput   |    Mandatory   |            Y           |
//! |  \ref xGPIOSPinTypeGPIOOutputOD |  Non-Mandatory |            Y           |
//! |  \ref xGPIOSPinTypeGPIOOutputQB |  Non-Mandatory |            Y           |
//! |  \ref xSPinTypeADC              |    Mandatory   |            Y           |
//! |  \ref xSPinTypeDAC              |    Mandatory   |            Y           |
//! |  \ref xSPinTypeCAN              |    Mandatory   |            Y           |
//! |  \ref xSPinTypeI2C              |    Mandatory   |            Y           |
//! |  \ref xSPinTypePWM              |  Non-Mandatory |            Y           |
//! |  \ref xSPinTypeSPI              |    Mandatory   |            Y           |
//! |  \ref xSPinTypeTimer            |    Mandatory   |            Y           |
//! |  \ref xSPinTypeUART             |    Mandatory   |            Y           |
//! |  \ref xSPinTypeACMP             |    Mandatory   |            N           |
//!
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \brief  Set the direction and mode of the specified pin(s).
//!         This function will set the specified pin(s) on the selected GPIO
//!         port as either an input or output under software control, or it
//!         will set the pin to be under hardware control.
//!
//! \param  [in] ulPort is the base address of the GPIO port, this value can
//!              be one of the following value:
//!              - \ref GPIOA_BASE
//!              - \ref GPIOB_BASE
//!              - ...
//!              More Information, please refer to \ref xLowLayer_Peripheral_Memmap.
//!
//! \param  [in] ulPins is the bit-packed representation of the pin(s).
//!              elemnt can be one of the following value:
//!              - \ref GPIO_PIN0
//!              - \ref GPIO_PIN1
//!              - \ref ...
//!              More Information, please refer to \ref xGPIO_General_Pin_IDs.
//!
//! \param  [in] ulPinIO is the pin direction and/or mode.
//!              This parameter can be one of the following value:
//!              Where \ref xGPIO_DIR_MODE_IN specifies that the pin will be
//!              programmed a software controlled input, \ref xGPIO_DIR_MODE_OUT
//!              specifies that the pin will be programmed as a software
//!              controlled output, and \ref xGPIO_DIR_MODE_HW specifies that
//!              the pin will be placed under hardware control.
//!
//! \return None.
//!
//! \note   \ref xGPIOPadConfigSet() must also be used to configure the corresponding
//!         pad(s) in order for them to propagate the signal to/from the GPIO.
//
//*****************************************************************************
extern void xGPIODirModeSet(unsigned long ulPort, unsigned long ulPins,
                            unsigned long ulPinIO);

//*****************************************************************************
//
//! \brief  Get the GPIO port from a Pin.
//!
//! \param  [in] eShortPin is the base address of the GPIO port
//!
//! \return GPIO port code, which is one of the following value:
//!             - \ref xSYSCTL_PERIPH_GPIOC
//!             - \ref xSYSCTL_PERIPH_I2C1
//!             -      ...
//!             - \ref xSYSCTL_PERIPH_TIMER2
//!             - \ref xSYSCTL_PERIPH_TIMER3
//!
//!         which can be used in those functions:
//!             - \ref xSysCtlPeripheralEnable
//!             - \ref xSysCtlPeripheralDisable
//!             - \ref xSysCtlPeripheralReset
//
//*****************************************************************************
#define xGPIOSPinToPeripheralId(eShortPin)                                    \
        GPIOPinToPeripheralId(G##eShortPin)

//*****************************************************************************
//
//! \brief  Get the GPIO port from a short Pin.
//!
//! \param  [in] eShortPin is the base address of the GPIO port
//!
//! \return GPIO port address which is used by GPIO API.
//
//*****************************************************************************
#define xGPIOSPinToPort(eShortPin)                                            \
        GPIOPinToPort(G##eShortPin)


//*****************************************************************************
//
//! \brief  Get the GPIO port and Pin number from a short Pin.
//!
//! \param  [in] eShortPin is the base address of the GPIO port
//!
//! \return GPIO port address which is used by GPIO API.
//
//*****************************************************************************
#define xGPIOSPinToPortPin(eShortPin)                                         \
        GPIOSPinToPortPin(eShortPin)

//*****************************************************************************
//
//! \brief  Get the GPIO pin number from a short Pin.
//!
//! \param  [in] eShortPin is the base address of the GPIO port
//!
//! \return GPIO pin number which is used by GPIO API.
//
//*****************************************************************************
#define xGPIOSPinToPin(eShortPin)                                             \
        GPIOPinToPin(G##eShortPin)

//*****************************************************************************
//
//! \brief  Set the direction and mode of the specified pin(s).
//!         This function will set the specified pin(s) on the selected GPIO port
//!         as either an input or output under software control, or it will set
//!         the pin to be under hardware control.
//!
//! \param  [in] eShortPin Specified port and pin.
//!              The pin is specified by eShortPin, which can only be one pin.
//!
//! \param  [in] ulPinIO is the pin direction and/or mode.
//!              This parameter can be one of the following value:
//!              Where \ref xGPIO_DIR_MODE_IN specifies that the pin will be
//!              programmed a software controlled input, \ref xGPIO_DIR_MODE_OUT
//!              specifies that the pin will be programmed as a software
//!              controlled output, and \ref xGPIO_DIR_MODE_HW specifies that
//!              the pin will be placed under hardware control.
//!
//! \return None.
//!
//! \note   \ref xGPIOPadConfigSet() must also be used to configure the corresponding
//!         pad(s) in order for them to propagate the signal to/from the GPIO.
//
//*****************************************************************************
#define xGPIOSPinDirModeSet(eShortPin, ulPinIO)                               \
        xGPIODirModeSet(G##eShortPin, ulPinIO)

//*****************************************************************************
//
//! \brief  Get the direction and mode of a pin.
//!         This function gets the direction and control mode for a specified
//!         pin on the selected GPIO port.  The pin can be configured as either
//!         an input or output under software control, or it can be under
//!         hardware control. The type of control and direction are returned
//!         as an enumerated data type.
//!
//! \param  [in] ulPort is the base address of the GPIO port
//! \param  [in] ulPin is the bit-packed representation of the pin.
//!
//! \return Returns one of the enumerated data types
//!         - \ref xGPIO_DIR_MODE_IN
//!         - \ref xGPIO_DIR_MODE_OUT
//!         - \ref xGPIO_DIR_MODE_HW
//!         - \ref xGPIO_DIR_MODE_QB
//!         - \ref xGPIO_DIR_MODE_OD
//
//*****************************************************************************
extern unsigned long xGPIODirModeGet(unsigned long ulPort, unsigned long ulPin);

//*****************************************************************************
//
//! \brief  Register user's gpio interrupt function.
//!
//! \param  [in] ulPort is the base address of the GPIO port.
//! \param  [in] ulPin is the bit-packed representation of the pin.
//! \param  [in] pfnCallback is the callback function.
//!
//! \return None.
//
//*****************************************************************************
extern void xGPIOPinIntCallbackInit(unsigned long ulPort, unsigned long ulPin,
                                   xtEventCallback xtPortCallback);

//*****************************************************************************
//
//! \brief  Set the interrupt type and Enable interrupt for the specified pin(s).
//!         This function sets up the various interrupt trigger mechanisms for the
//!         specified pin(s) on the selected GPIO port.
//!
//! \param  [in] ulPort is the base address of the GPIO port
//! \param  [in] ulPins is the bit-packed representation of the pin(s).
//! \param  [in] ulIntType specifies the type of interrupt trigger mechanism.
//!
//! \return None.
//!
//! \note   In order to avoid any spurious interrupts, the user must ensure that
//!         the GPIO inputs remain stable for the duration of this function.
//
//*****************************************************************************
extern void xGPIOPinIntEnable(unsigned long ulPort, unsigned long ulPins,
        unsigned long ulIntType);

//*****************************************************************************
//
//! \brief  Set the interrupt type and Enable interrupt for the specified pin(s).
//!
//! \param  [in] eShortPin Specified port and pin.
//! \param  [in] ulIntType specifies the type of interrupt trigger mechanism.
//!
//! \return None.
//!
//! \note   In order to avoid any spurious interrupts, the user must ensure that
//!         the GPIO inputs remain stable for the duration of this function.
//
//*****************************************************************************
#define xGPIOSPinIntEnable(eShortPin, ulIntType)                              \
        xGPIOPinIntEnable(G##eShortPin, ulIntType)

//*****************************************************************************
//
//! \brief  Disables interrupts for the specified pin(s).
//!
//! \param  [in] ulPort is the base address of the GPIO port
//! \param  [in] ulPins is the bit-packed representation of the pin(s).
//!
//! \return None.
//
//*****************************************************************************
extern void xGPIOPinIntDisable(unsigned long ulPort, unsigned long ulPins);

//*****************************************************************************
//
//! \brief  Disables interrupts for the specified pin.
//!
//! \param  [in] eShortPin Specified port and pin.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOSPinIntDisable(eShortPin)                                        \
        xGPIOPinIntDisable(G##eShortPin)

//*****************************************************************************
//
//! \brief  Get interrupt status for the specified GPIO port.
//!
//! \param  [in] ulPort is the base address of the GPIO port.
//!
//! \return Returns a bit-packed byte, where each bit that is set identifie
//!         an active masked or raw interrupt, and where bit 0 of the byte
//!         represents GPIO port pin 0, bit 1 represents GPIO port pin 1, and
//!         so on.
//
//*****************************************************************************
#define xGPIOPinIntStatus(ulPort)

//*****************************************************************************
//
//! \brief  Clear the interrupt for the specified pin(s).
//!
//! \param  [in] ulPort is the base address of the GPIO port
//! \param  [in] ulPins is the bit-packed representation of the pin(s).
//!
//! \return None.
//!
//! \note   Because there is a write buffer in the Cortex-M0 processor, it may
//!         take several clock cycles before the interrupt source is actually
//!         cleared. Therefore, it is recommended that the interrupt source
//!         be cleared early in the interrupt handler (as opposed to the very
//!         last action) to avoid returning from the interrupt handler before
//!         the interrupt source i actually cleared.  Failure to do so may
//!         result in the interrupt handler being immediately reentered (because
//!         the interrupt controller still see the interrupt source asserted).
//
//*****************************************************************************
extern void xGPIOPinIntClear(unsigned long ulPort, unsigned long ulPins);

//*****************************************************************************
//
//! \brief  Clear the interrupt for the specified pin.
//!
//! \param  [in] eShortPin Specified port and pin.
//!
//! \return None.
//!
//! \note   Because there is a write buffer in the Cortex-M0 processor, it may
//!         take several clock cycles before the interrupt source is actually
//!         cleared. Therefore, it is recommended that the interrupt source
//!         be cleared early in the interrupt handler (as opposed to the very
//!         last action) to avoid returning from the interrupt handler before
//!         the interrupt source i actually cleared.  Failure to do so may
//!         result in the interrupt handler being immediately reentered (because
//!         the interrupt controller still see the interrupt source asserted).
//
//*****************************************************************************
#define xGPIOSPinIntClear(eShortPin)                                          \
        xGPIOPinIntClear(G##eShortPin)

//*****************************************************************************
//
//! \brief  Reads the values present of the specified pin(s).
//!         The values at the specified pin(s) are read, as specified by \e ucPins.
//!         Values are returned for both input and output pin(s), and the value
//!         for pin(s) that are not specified by \e ucPins are set to 0.
//!
//! \param  [in] ulPort is the base address of the GPIO port
//! \param  [in] ulPins is the bit-packed representation of the pin(s).
//!
//! \return Returns a bit-packed byte, where each bit that is set identifie
//!         an active masked or raw interrupt, and where bit 0 of the byte
//!         represents GPIO port pin 0, bit 1 represents GPIO port pin 1, and
//!         so on.
//
//*****************************************************************************
extern unsigned long xGPIOPinRead(unsigned long ulPort, unsigned long ulPins);

//*****************************************************************************
//
//! \brief  Reads the values present of the specified Port.
//!
//! \param  [in] ulPort is the base address of the GPIO port.
//!
//! \return Returns a bit-packed byte providing the state of the specified Port
//
//*****************************************************************************
#define xGPIOPortRead(ulPort)                                                 \
        GPIOPortRead(ulPort)

//*****************************************************************************
//
//! \brief Reads the values present of the specified pin.
//!        The values at the specified pin are read, as specified by \e eShortPin.
//!        Values are returned for both input and output pin(s), and the value
//!        for pin(s) that are not specified by \e eShortPin are set to 0.
//!
//! \param eShortPin Specified port and pin.
//!
//! \return Returns the value of specified port and pin.
//
//*****************************************************************************
#define xGPIOSPinRead(eShortPin)                                              \
        GPIOPinRead(G##eShortPin)

//*****************************************************************************
//
//! \brief Write a value to the specified pin(s).
//!        Write the corresponding bit values to the output pin(s) specified by
//!        \e ucPins.  Writing to a pin configured as an input pin has no effect.
//!
//! \param [in] ulPort is the base address of the GPIO port
//! \param [in] ulPins is the bit-packed representation of the pin(s).
//! \param [in] ucVal is the value to write to the pin(s), 0 or 1.
//!
//! \return None.
//
//*****************************************************************************
extern void xGPIOPinWrite(unsigned long ulPort, unsigned long ulPins,
        unsigned long ucVal);

//*****************************************************************************
//
//! \brief  Writes a value to the specified Port.
//!         Writes the corresponding bit values to the output Port
//!
//! \param  [in] ulPort is the base address of the GPIO port.
//! \param  [in] ucVal is the value to write to the Port.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOPortWrite(ulPort, ulVal)                                         \
        GPIOPortWrite(ulPort, ulVal)

//*****************************************************************************
//
//! \brief  Write a value to the specified pin.
//!         Write the corresponding bit values to the output pin specified by
//!         \e eShortPin. Writing to a pin configured as an input pin has no effect.
//!
//! \param  [in] eShortPin Specified port and pin.
//! \param  [in] ucVal is the value to write to the pin(s), 0 or 1.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOSPinWrite(eShortPin, ulVal)                                      \
        GPIOPinWrite(G##eShortPin, ulVal)

//*****************************************************************************
//
//! \brief  Configure the alternate function of a GPIO pin.
//!         This function configures the pin mux that selects the peripheral
//!         function associated with a particular GPIO pin. Only one peripheral
//!         function at a time can be associated with a GPIO pin, and each
//!         peripheral function should only be associated with a single GPIO pin
//!         at a time (despite the fact that many of them can be associated with
//!         more than one GPIO pin).
//!
//! \param  [in] eShortPin Specified port and pin.
//! \param  [in] ulPinConfig is the pin configuration value, specified as only
//!              one of the \b GPIO_P??_??? values.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOPinConfigure(eShortPin, ulPinConfig)                             \
        GPIOPinFunCfg(G##eShortPin, ulPinConfig)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO Input pin.
//!         This function configures a pin for use as an GPIO Input pin device
//!         and turns the pin into a GPIO input pin.
//!
//! \param  [in] eShortPin Specified port and pin.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOSPinTypeGPIOInput(eShortPin)                                     \
        do                                                                    \
        {                                                                     \
            GPIOPinFunCfg(G##eShortPin, GPIO_##eShortPin##_##eShortPin);      \
            GPIOPinModeCfg(G##eShortPin, PIN_MODE_INPUT);                     \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO Output(push-pull) pin.
//!         This function configures a pin for use as an GPIO Output pin device
//!         and turns the pin into a GPIO Output pin.
//!
//! \param  [in] eShortPin Specified port and pin.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOSPinTypeGPIOOutput(eShortPin)                                    \
        do                                                                    \
        {                                                                     \
            GPIOPinFunCfg(G##eShortPin, GPIO_##eShortPin##_##eShortPin);      \
            GPIOPinModeCfg(G##eShortPin, PIN_MODE_OUTPUT);                    \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO Output(open drain) pin.
//!         This function configures a pin for use as an GPIO Output pin device
//!         and turns the pin into a GPIO Output(open drain) pin.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//
//*****************************************************************************
#define xGPIOSPinTypeGPIOOutputOD(eShortPin)                                  \
        do                                                                    \
        {                                                                     \
            GPIOPinFunCfg(G##eShortPin, GPIO_##eShortPin##_eShortPin);        \
            GPIOPinModeCfg(G##eShortPin, PIN_MODE_OD_EN);                     \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO ADC input pin.
//!         This function configures a pin for use as an ADC function device
//!         and turns the pin into a GPIO ADC input pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as ADC0.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//! \note
//!         Table shows what the ePeripheralPin and eShortPin should be, only
//!         the argument which are in the same line can be combined.
//!         For eaxmple(TI):
//! \note
//!             xSPinTypeADC(ADC0, PE7)  --> Correct
//!             xSPinTypeADC(ADC1, PE6)  --> Correct
//! \note
//!             xSPinTypeADC(ADC0, PE6)  --> Error
//!             xSPinTypeADC(ADC0, PE5)  --> Error
//!
//!     +-----------------+-------------------------+--------------------------+
//!     |  manufacturer   | ePeripheralPin          | eShortPin                |
//!     |-----------------|-------------------------|--------------------------|
//!     |  CoX            | This parameter is a     | This parameter is a      |
//!     |                 | mandatory.The mandatory | mandatory. the mandatory |
//!     |                 | is the format of        | is the format of         |
//!     |                 | Variable naming.So it   | Variable naming.So it    |
//!     |                 | should be: ADCn         | should be: PXn           |
//!     |                 | n indicate the pin      | XX indicate the GPIO     |
//!     |                 | number such as          | PORT,Such as             |
//!     |                 | 0 1 2 3 ....            | A B C D E ...            |
//!     |                 |                         | n indicate the pin       |
//!     |                 |                         | number such as           |
//!     |                 |                         | 0 1 2 3 ....             |
//!     |-----------------|-------------------------|--------------------------|
//!     |     LPC17xx     |     ADC0                |         PA23             |
//!     |                 |     ADC1                |         PA24             |
//!     |                 |     ADC2                |         PA25             |
//!     |                 |     ADC3                |         PA26             |
//!     |                 |     ADC4                |         PB30             |
//!     |                 |     ADC5                |         PB31             |
//!     |                 |     ADC6                |         PA3              |
//!     |                 |     ADC7                |         PA2              |
//!     +-----------------+-------------------------+--------------------------+
//!
//!
//
//*****************************************************************************
#define xSPinTypeADC(ePeripheralPin, eShortPin)                               \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO CAN input or output pin.
//!         This function configures a pin for use as a CAN function and turns
//!         the pin into a GPIO CAN input or output pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as CAN0RX.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//!         Table shows what the ePeripheralPin and eShortPin should be, only the
//!         argument which are in the same line can be combined.
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: CANnRX       | should be: PXn           |
//!     |                    | or CANnTX               | XX indicate the GPIO     |
//!     |                    | n indicate the pin      | PORT,Such as             |
//!     |                    | number such as          | A B C D E ...            |
//!     |                    | 0 1 2 3 ....            | n indicate the pin       |
//!     |                    |                         | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |       LPC17xx      |     CAN1RX              |     PA0   PA21           |
//!     |                    |     CAN1TX              |     PA1   PA22           |
//!     |                    |     CAN2RX              |     PA4   PC7            |
//!     |                    |     CAN2TX              |     PA5   PC8            |
//!     +--------------------+-------------------------+--------------------------+
//!
//!
//
//*****************************************************************************
#define xSPinTypeCAN(ePeripheralPin, eShortPin)                               \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO I2C input or output pin.
//!         This function configures a pin for use as an I2C function device and
//!         turns the pin into a GPIO I2C input or output pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as I2C0SDA.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: I2CnSCK      | should be: PXn           |
//!     |                    | or I2CnSDA              | XX indicate the GPIO     |
//!     |                    | n indicate the pin      | PORT,Such as             |
//!     |                    | number such as          | A B C D E ...            |
//!     |                    | 0 1 2 3 ....            | n indicate the pin       |
//!     |                    |                         | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |       LPC17xx      |     I2C0SDA             |     PA27                 |
//!     |                    |     I2C0SCK             |     PA28                 |
//!     |                    |     I2C1SDA             |     PA0  PA19            |
//!     |                    |     I2C1SCK             |     PA1  PA20            |
//!     |                    |     I2C2SDA             |     PA10                 |
//!     |                    |     I2C2SCK             |     PA11                 |
//!     |--------------------|-------------------------|--------------------------|
//!
//!
//
//*****************************************************************************
 #define xSPinTypeI2C(ePeripheralPin, eShortPin)                              \
         GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to pwm function pin.
//!         This function configures a pin for use as a PWM function and turns
//!         the pin into a PWM function pin.
//!
//! \param  [in] ePeripheralPin is the PWM Peripheral channel such as PWM0.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: SPInCLK,     | should be: PXn           |
//!     |                    | SPInMISO, SPInMOSI,     | XX indicate the GPIO     |
//!     |                    | or SPInCS,              | PORT,Such as             |
//!     |                    | n indicate the pin      | A B C D E ...            |
//!     |                    | number such as          | n indicate the pin       |
//!     |                    | 0 1 2 3 ....            | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |                    |          PWM1           |     PB18/PC0             |
//!     |                    |          PWM2           |     PB20/PD25/PC1        |
//!     |     LPC17xx        |          PWM3           |     PB21/PC2/PD26        |
//!     |                    |          PWM4           |     PB23/PC3             |
//!     |                    |          PWM5           |     PB24/PC4             |
//!     |                    |          PWM6           |     PB26/PC5             |
//!     +--------------------+-------------------------+--------------------------+
//!
//
//*****************************************************************************
#define xSPinTypePWM(ePeripheralPin, eShortPin)                               \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO SPI input or output pin.
//!         This function configures a pin for use as a SPI function and turns
//!         the pin into a GPIO SPI input or output pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as I2C0SDA.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//! \note
//!         Table shows what the ePeripheralPin and eShortPin should be, only
//!         the argument which are in the same line can be combined.
//!         For eaxmple(TI):
//!
//!             xSPinTypeSPI(SPI0CLK, PA2)  --> Correct
//!             xSPinTypeSPI(SPI0MOSI, PA5) --> Correct
//!
//!             xSPinTypeSPI(SPI0CLK, PA5)  --> Error
//!             xSPinTypeSPI(SPI0CLK, PA4)  --> Error
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: SPInCLK,     | should be: PXn           |
//!     |                    | SPInMISO, SPInMOSI,     | XX indicate the GPIO     |
//!     |                    | or SPInCS,              | PORT,Such as             |
//!     |                    | n indicate the pin      | A B C D E ...            |
//!     |                    | number such as          | n indicate the pin       |
//!     |                    | 0 1 2 3 ....            | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |       LPC17xx      |     SPI0CLK             |     PA15                 |
//!     |                    |     SPI0CS              |     PA16                 |
//!     |                    |     SPI0MISO            |     PA17                 |
//!     |                    |     SPI0MOSI            |     PA18                 |
//!     +--------------------+-------------------------+--------------------------+
//!
//
//*****************************************************************************
#define xSPinTypeSPI(ePeripheralPin, eShortPin)                               \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO Timer input or output pin.
//!         This function configures a pin for use as a Timer function and turns
//!         the pin into a GPIO Timer input or output pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as I2C0SDA.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//! \note
//!         Table shows what the ePeripheralPin and eShortPin should be, only the
//!         argument which are in the same line can be combined.
//!         For eaxmple(TI):
//!
//!             xSPinTypeTimer(TIMCCP0, PD3)  --> Correct
//!             xSPinTypeTimer(TIMCCP0, PJ7)  --> Correct
//!
//!             xSPinTypeTimer(TIMCCP0, PC5)  --> Error
//!             xSPinTypeTimer(TIMCCP0, PB6)  --> Error
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: TIMCCPn,     | should be: PXn           |
//!     |                    | n indicate the pin      | XX indicate the GPIO     |
//!     |                    | number such as          | PORT,Such as             |
//!     |                    | 0 1 2 3 ....            | A B C D E ...            |
//!     |                    |                         | n indicate the pin       |
//!     |                    |                         | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |       LPC17xx      |                         |                          |
//!     |--------------------|-------------------------|--------------------------|
//!
//! \todo Finish Cox Timer Pin map
//
//*****************************************************************************
#define xSPinTypeTimer(ePeripheralPin, eShortPin)                             \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO UART input or output pin.
//!         This function configures a pin for use as a UART function and turns
//!         the pin into a GPIO UART input or output pin.
//!
//! \param  [in] ePeripheralPin is the GPIO Peripheral name such as I2C0SDA.
//!
//! \param  [in] eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//! \note
//!         Table shows what the ePeripheralPin and eShortPin should be, only the
//!         argument which are in the same line can be combined.
//!         For eaxmple(TI):
//!
//!             xSPinTypeUART(UART0RX, PA0)  --> Correct
//!             xSPinTypeUART(UART0TX, PA1)  --> Correct
//!
//!             xSPinTypeUART(UART0RX, PE6)  --> Error
//!             xSPinTypeUART(UART0RX, PA1)  --> Error
//!
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: UARTnRX,     | should be: PXn           |
//!     |                    | UARTnTX, UARTnCTS,      | XX indicate the GPIO     |
//!     |                    | ......,                 | PORT,Such as             |
//!     |                    | n indicate the pin      | A B C D E ...            |
//!     |                    | number such as          | n indicate the pin       |
//!     |                    | 0 1 2 3 ....            | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |                    |     UART0TX             |     PA2                  |
//!     |                    |     UART0RX             |     PA3                  |
//!     |                    | ------------------------- ------------------------ |
//!     |                    |     UART1TX             |     PA15  PC0            |
//!     |                    |     UART1RX             |     PA16  PC1            |
//!     |                    |     UART1CTS            |     PA17  PC2            |
//!     |                    |     UART1DCD            |     PA18  PC3            |
//!     |                    |     UART1DSR            |     PA19  PC4            |
//!     |      LPC17xx       |     UART1DTR            |     PA20  PC5            |
//!     |                    |     UART1RI             |     PA21  PC6            |
//!     |                    |     UART1RTS            |     PA22  PC7            |
//!     |                    | ------------------------- ------------------------ |
//!     |                    |     UART2TX             |     PA10  PC8            |
//!     |                    |     UART2RX             |     PA11  PC9            |
//!     |                    | ------------------------- ------------------------ |
//!     |                    |     UART3TX             |     PA0   PA25  PE28     |
//!     |                    |     UART3RX             |     PA1   PA26  PE29     |
//!     |-------------------------------------------------------------------------|
//!
//
//*****************************************************************************
#define xSPinTypeUART(ePeripheralPin, eShortPin)                              \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! \brief  Turn a pin to a GPIO DAC output pin.
//!         This function configures a pin for use as an GPIO DAC function and
//!         turns the pin into a GPIO DAC output pin.
//!
//! \param  ePeripheralPin is the GPIO Peripheral name such as I2C0SDA.
//!
//! \param eShortPin is the GPIO short pin name such as PA0.
//!
//! \return None.
//!
//! \note
//!     +--------------------+-------------------------+--------------------------+
//!     |    manufacturer    | ePeripheralPin          | eShortPin                |
//!     |--------------------|-------------------------|--------------------------|
//!     |    CoX             | This parameter is a     | This parameter is a      |
//!     |                    | mandatory.The mandatory | mandatory. the mandatory |
//!     |                    | is the format of        | is the format of         |
//!     |                    | Variable naming.So it   | Variable naming.So it    |
//!     |                    | should be: DACOUTn,     | should be: PXn           |
//!     |                    |                         | X  indicate the GPIO     |
//!     |                    | n x indicate the pin    | PORT,Such as             |
//!     |                    | number such as          | A B C D E ...            |
//!     |                    | 0 1 2 3 ....            | n indicate the pin       |
//!     |                    |                         | number such as           |
//!     |                    |                         | 0 1 2 3 ....             |
//!     |--------------------|-------------------------|--------------------------|
//!     |       LPC17xx      |     DACOUT1             |     PA26                 |
//!     |--------------------|-------------------------|--------------------------|
//!
//! \return None.
//
//*****************************************************************************
#define xSPinTypeDAC(ePeripheralPin, eShortPin)                               \
        GPIOSPinConfigure(ePeripheralPin, eShortPin)

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************


//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif
#endif
