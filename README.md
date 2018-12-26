![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# MUX Click

- **CIC Prefix**  : MUX
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : okt 2018.

---


### Software Support

We provide a library for the MUX Click on our [LibStock](https://libstock.mikroe.com/projects/view/2595/mux-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library includes function for set current active mux channel and function for enable or disble mux device.

Key functions :

- ``` void mux_activeMuxChannel(uint8_t ch) ``` - Functions for set active MUX channel 
- ``` void mux_deviceEnable() ``` - Functions for enable MUX device

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets RST pin, CS pin and PWM pin as OUTPUT
- Application Initialization - Initialization driver init end enable device
- Application Task - (code snippet) - Sets the current active channel. Changes the channel every 5 sec.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2595/mux-click) page.

Other mikroE Libraries used in the example:

- GPIO

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
