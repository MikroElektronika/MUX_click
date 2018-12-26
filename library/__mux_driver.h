/*
    __mux_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __mux_driver.h
@brief    MUX Driver
@mainpage MUX Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   MUX
@brief      MUX Click Driver
@{

| Global Library Prefix | **MUX** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **okt 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _MUX_H_
#define _MUX_H_

/** 
 * @macro T_MUX_P
 * @brief Driver Abstract type 
 */
#define T_MUX_P    const uint8_t*

/** @defgroup MUX_COMPILE Compilation Config */              /** @{ */

//  #define   __MUX_DRV_SPI__                            /**<     @macro __MUX_DRV_SPI__  @brief SPI driver selector */
//  #define   __MUX_DRV_I2C__                            /**<     @macro __MUX_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __MUX_DRV_UART__                           /**<     @macro __MUX_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup MUX_VAR Variables */                           /** @{ */

/* Channel */
extern const uint8_t _MUX_CHANNEL_1A_AND_1B;
extern const uint8_t _MUX_CHANNEL_2A_AND_2B;
extern const uint8_t _MUX_CHANNEL_3A_AND_3B;
extern const uint8_t _MUX_CHANNEL_4A_AND_4B;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup MUX_INIT Driver Initialization */              /** @{ */

#ifdef   __MUX_DRV_SPI__
void mux_spiDriverInit(T_MUX_P gpioObj, T_MUX_P spiObj);
#endif
#ifdef   __MUX_DRV_I2C__
void mux_i2cDriverInit(T_MUX_P gpioObj, T_MUX_P i2cObj, uint8_t slave);
#endif
#ifdef   __MUX_DRV_UART__
void mux_uartDriverInit(T_MUX_P gpioObj, T_MUX_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void mux_gpioDriverInit(T_MUX_P gpioObj);
                                                                       /** @} */
/** @defgroup MUX_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for enable MUX device
 */
void mux_deviceEnable();

/**
 * @brief Functions for disable MUX device
 */
void mux_deviceDisable();

/**
 * @brief Functions for set active MUX channel
 *
 * @param[in] ch    Currently active channel
 *
 * @note
      MUX channal (1A-1B, 2A-2B, 3A-3B, 4A-4B)
 */
void mux_activeMuxChannel(uint8_t ch);





                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_MUX_STM.c
    @example Click_MUX_TIVA.c
    @example Click_MUX_CEC.c
    @example Click_MUX_KINETIS.c
    @example Click_MUX_MSP.c
    @example Click_MUX_PIC.c
    @example Click_MUX_PIC32.c
    @example Click_MUX_DSPIC.c
    @example Click_MUX_AVR.c
    @example Click_MUX_FT90x.c
    @example Click_MUX_STM.mbas
    @example Click_MUX_TIVA.mbas
    @example Click_MUX_CEC.mbas
    @example Click_MUX_KINETIS.mbas
    @example Click_MUX_MSP.mbas
    @example Click_MUX_PIC.mbas
    @example Click_MUX_PIC32.mbas
    @example Click_MUX_DSPIC.mbas
    @example Click_MUX_AVR.mbas
    @example Click_MUX_FT90x.mbas
    @example Click_MUX_STM.mpas
    @example Click_MUX_TIVA.mpas
    @example Click_MUX_CEC.mpas
    @example Click_MUX_KINETIS.mpas
    @example Click_MUX_MSP.mpas
    @example Click_MUX_PIC.mpas
    @example Click_MUX_PIC32.mpas
    @example Click_MUX_DSPIC.mpas
    @example Click_MUX_AVR.mpas
    @example Click_MUX_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __mux_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */