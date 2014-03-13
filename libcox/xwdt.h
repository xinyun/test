//*****************************************************************************
//
//! \file      xwdt.h
//! \brief     Prototypes for the WDT Driver.
//! \version   V2.2.1.0
//! \date      $CURRENTTIME$
//! \author    CooCox
//! \copyright
//!
//! Copyright (c)  2011, CooCox
//! All rights reserved.
//!
//! Redistribution and use in source and binary forms, with or without
//! modification, are permitted provided that the following conditions
//! are met:
//!     * Redistributions of source code must retain the above copyright
//! notice, this list of conditions and the following disclaimer.
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution.
//!     * Neither the name of the <ORGANIZATION> nor the names of its
//! contributors may be used to endorse or promote products derived
//! from this software without specific prior written permission.
//!
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __XWDT_H__
#define __XWDT_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup WDT
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xWDT
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xWDT_Function_Type xWDT Function Type
//! \section    xWDT_Function_Type_Section 1. Where to use this group
//!             Values that can be passed to
//!             - \ref xWDTFunctionEnable()
//!             - \ref xWDTFunctionDisable()
//!             as the ulFunction parameter.
//!
//! \section    xWDT_Function_Type_CoX     2. CoX Port Details
//!
//! | xWDT Function Type    |      CoX      |         LPC17xx        |
//! |-----------------------|---------------|------------------------|
//! | xWDT_INT_FUNCTION     |   Mandatory   |            Y           |
//! | xWDT_RESET_FUNCTION   |   Mandatory   |            Y           |
//!
//! @{
//
//*****************************************************************************

//
//! Generate Interrupt when watch dog time out
//
#define xWDT_INT_FUNCTION       WDT_CFG_INT_MODE

//
//! Reset CPU when watch dog time out
//
#define xWDT_RESET_FUNCTION     WDT_CFG_RESET_MODE

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xWDT_Clock_Config xWDT Clock Configuration
//! \brief      Values that show xWDT Clock Configuration
//!
//! \section    xWDT_Clock_Config_Section 1. Where to use this group
//!             Watch dog clock Configs. Such as clock source, Prescaler divider.
//!             Values that can be passed to \ref xWDTInit as the ulConfig parameter
//!
//! \section    xWDT_Clock_Config_CoX     2. CoX Port Details
//!
//! | Clock Configuration     |       CoX      |         LPC17xx        |
//! |-------------------------|----------------|------------------------|
//! | xWDT_S_INTSL            |    Mandatory   |            Y           |
//! | xWDT_S_EXTSL            |    Mandatory   |            Y           |
//!
//! @{
//
//*****************************************************************************

//! Use Internal RC Clock as WDT clock source.
#define xWDT_S_INTSL         WDT_CFG_CLKSRC_IRC

//! Use External RTC Clock as WDT clock source.
#define xWDT_S_EXTSL         WDT_CFG_CLKSRC_RTC

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xWDT_Exported_APIs xWDT API
//! \brief      xWDT API Reference.
//!
//! \section    xWDT_Exported_APIs_Port CoX Port Details
//!
//! |       xWDT API            |       CoX      |        LPC17xx         |
//! |---------------------------|----------------|------------------------|
//! | \ref  xWDTInit            |    Mandatory   |            Y           |
//! | \ref  xWDTEnable          |    Mandatory   |            Y           |
//! | \ref  xWDTDisable         |    Mandatory   |            Y           |
//! | \ref  xWDTRestart         |    Mandatory   |            Y           |
//! | \ref  xWDTFunctionEnable  |    Mandatory   |            Y           |
//! | \ref  xWDTFunctionDisable |    Mandatory   |            Y           |
//! | \ref  xWDTIntCallbackInit |    Mandatory   |            Y           |
//!
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \brief  Configurate The WatchDog Timer(WDT)'s Timer Interval.
//!         This function is to configure The WatchDog Timer(WDT)'s Timer Interval.
//!         There are three factors to determine the Timer Interval, they are:
//!             - clock source
//!             - Prescaler divider
//!             - reload value
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \param  [in] ulConfig is the WDT clock source Selection.
//!              - \ref xWDT_S_INTSL
//!              - \ref xWDT_S_EXTSL
//!
//! \param  [in] ulReload is the WDT's reload value.
//!              0xFF <= ulReload <= 0xFFFFFFFF
//!
//! \return None.
//!
//! \note   xWDTInit(ulBase, ulConfig, ulReload) must be called before function:
//!         - \ref xWDTEnable and - \ref xWDTFunctionEnable.
//!
//
//*****************************************************************************
extern void xWDTInit(unsigned long ulBase, unsigned long ulConfig,
        unsigned long ulReload);

//*****************************************************************************
//
//! \brief  Enable the Watchdog timer module.
//!         This function is to Enable the Watchdog timer and start counter.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \return None.
//!
//! \note   xWDTInit(ulBase, ulConfig, ulReload) must be called before function:
//!         - \ref xWDTEnable and - \ref xWDTFunctionEnable.
//
//*****************************************************************************
#define xWDTEnable(ulBase)      WDTEnable()

//*****************************************************************************
//
//! \brief  Disable the Watchdog timer.
//!         This function is to Disable the Watchdog timer module and stop
//!         the counter.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \return None.
//!
//
//*****************************************************************************
#define xWDTDisable(ulBase)     WDTDisable()

//*****************************************************************************
//
//! \brief  Register user interrupt callback function for the Watchdog timer.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \param  [in] xtPortCallback is user's callback function for the Watchdog
//!              timer.
//!
//! \return None.
//
//*****************************************************************************
#define xWDTIntCallbackInit(ulBase, xtWDTCallback)                            \
         WDTIntCallbackInit(xtWDTCallback)

//*****************************************************************************
//
//! \brief  Restart the Watchdog timer counter.
//!         This function is to restart the Watchdog timer by feed watchdog.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \return None.
//!
//! \note   User can use this function to feed the watch dog interval.
//
//*****************************************************************************
#define xWDTRestart(ulBase)     WDTFeed()

//*****************************************************************************
//
//! \brief  Enable the watch dog timer's function.
//!         This function is to Enable the watch dog timer's function such as
//!         Interrupt reset.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \param  [in] ulFunction is the watch dog timer's function.
//!              This parameter is the OR value of any of the following:
//!              - \ref xWDT_INT_FUNCTION
//!              - \ref xWDT_RESET_FUNCTION
//!
//! \note   xWDTInit(ulBase, ulConfig, ulReload) must be called before function:
//!         \ref xWDTEnable and \ref xWDTFunctionEnable.
//
//*****************************************************************************
extern void xWDTFunctionEnable(unsigned long ulBase, unsigned long ulFunction);

//*****************************************************************************
//
//! \brief  Disable the watch dog timer's function.
//!         This function is to disable the watch dog timer's function such as
//!         Interrupt reset.
//!
//! \param  [in] ulBase is the base address of the WatchDog Timer(WDT) module.
//!              This value must be \ref xWDT_BASE.
//!
//! \param  [in] ulFunction is the watch dog timer's function.
//!              This parameter is the OR value of any of the following:
//!              - \ref xWDT_INT_FUNCTION
//!              - \ref xWDT_RESET_FUNCTION
//!
//! \return None.
//!
//! \note   For LPC17xx, You can't Disable Those functions.
//
//*****************************************************************************
extern void xWDTFunctionDisable(unsigned long ulBase, unsigned long ulFunction);

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
//! \addtogroup LPC17xx_WDT
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LPC17xx_WDT_CFG LPC WDT configure parameter.
//!
//! @{
//
//*****************************************************************************

//! Interrupt mode
#define WDT_CFG_INT_MODE        BIT_32_0

//! Reset mode
#define WDT_CFG_RESET_MODE      BIT_32_1 | BIT_32_0

//! Select Internal RC as WDT clock source.
#define WDT_CFG_CLKSRC_IRC      BIT_32_2

//! Select APB as WDT clock source.
#define WDT_CFG_CLKSRC_APB      BIT_32_3

//! Select RTC clock as WDT clock source.
#define WDT_CFG_CLKSRC_RTC      BIT_32_3 | BIT_32_2

//! Watchdog time-out flag.
#define WDT_FLAG_TIMEOUT        BIT_32_2

//! Watchdog interrupt flag.
#define WDT_FLAG_INT            BIT_32_3

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LPC17xx_WDT_Exported_APIs LPC17xx WDT API
//! \brief      LPC17xx WDT API Reference.
//! @{
//
//*****************************************************************************

extern void WDTCfg(unsigned long ulCfg, unsigned long ulValue);
extern void WDTFeed(void);
extern void WDTEnable(void);
extern void WDTDisable(void);
extern unsigned long WDTIntCallbackInit(xtEventCallback pfnCallback);
extern unsigned long WDTStatusFlagGet(void);
extern xtBoolean WDTStatusFlagCheck(unsigned long ulFlags);
extern void WDTStatusFlagClear(unsigned long ulFlags);

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

#endif // __XWDT_H__

