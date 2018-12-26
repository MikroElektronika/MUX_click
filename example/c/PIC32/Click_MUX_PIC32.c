/*
Example for MUX Click

    Date          : okt 2018.
    Author        : Katarina Perendic

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets RST pin, CS pin and PWM pin as OUTPUT
- Application Initialization - Initialization driver init end enable device
- Application Task - (code snippet) - Sets the current active channel. Changes the channel every 5 sec.

*/

#include "Click_MUX_types.h"
#include "Click_MUX_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
    mux_gpioDriverInit( (T_MUX_P)&_MIKROBUS1_GPIO );
    mux_deviceEnable();
    Delay_100ms();
}

void applicationTask()
{
    mux_activeMuxChannel(_MUX_CHANNEL_1A_AND_1B);
    Delay_ms( 5000 );
    mux_activeMuxChannel(_MUX_CHANNEL_2A_AND_2B);
    Delay_ms( 5000 );
    mux_activeMuxChannel(_MUX_CHANNEL_3A_AND_3B);
    Delay_ms( 5000 );
    mux_activeMuxChannel(_MUX_CHANNEL_4A_AND_4B);
    Delay_ms( 5000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}