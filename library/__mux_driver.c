/*
    __mux_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__mux_driver.h"
#include "__mux_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Channel */
const uint8_t _MUX_CHANNEL_1A_AND_1B = 0x00;
const uint8_t _MUX_CHANNEL_2A_AND_2B = 0x01;
const uint8_t _MUX_CHANNEL_3A_AND_3B = 0x02;
const uint8_t _MUX_CHANNEL_4A_AND_4B = 0x03;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __MUX_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __MUX_DRV_SPI__

void mux_spiDriverInit(T_MUX_P gpioObj, T_MUX_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __MUX_DRV_I2C__

void mux_i2cDriverInit(T_MUX_P gpioObj, T_MUX_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __MUX_DRV_UART__

void mux_uartDriverInit(T_MUX_P gpioObj, T_MUX_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

void mux_gpioDriverInit(T_MUX_P gpioObj)
{
    hal_gpioMap( (T_HAL_P)gpioObj );
}

/* ----------------------------------------------------------- IMPLEMENTATION */

void mux_deviceEnable()
{
    hal_gpio_csSet( 1 );
}

void mux_deviceDisable()
{
    hal_gpio_csSet( 0 );
}

void mux_activeMuxChannel(uint8_t ch)
{
    if(ch == _MUX_CHANNEL_1A_AND_1B)
    {
        hal_gpio_rstSet(0);
        hal_gpio_pwmSet(0);
    }
    else if(ch == _MUX_CHANNEL_2A_AND_2B)
    {
        hal_gpio_rstSet(1);
        hal_gpio_pwmSet(0);
    }
    else if(ch == _MUX_CHANNEL_3A_AND_3B)
    {
        hal_gpio_rstSet(0);
        hal_gpio_pwmSet(1);
    }
    else if(ch == _MUX_CHANNEL_4A_AND_4B)
    {
        hal_gpio_rstSet(1);
        hal_gpio_pwmSet(1);
    }
}

/* -------------------------------------------------------------------------- */
/*
  __mux_driver.c

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