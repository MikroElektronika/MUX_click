#line 1 "D:/Clicks_git/M/MUX_Click/SW/example/c/ARM/STM/Click_MUX_STM.c"
#line 1 "d:/clicks_git/m/mux_click/sw/example/c/arm/stm/click_mux_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/m/mux_click/sw/example/c/arm/stm/click_mux_config.h"
#line 1 "d:/clicks_git/m/mux_click/sw/example/c/arm/stm/click_mux_types.h"
#line 1 "d:/clicks_git/m/mux_click/sw/library/__mux_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/m/mux_click/sw/library/__mux_driver.h"
extern const uint8_t _MUX_CHANNEL_1A_AND_1B;
extern const uint8_t _MUX_CHANNEL_2A_AND_2B;
extern const uint8_t _MUX_CHANNEL_3A_AND_3B;
extern const uint8_t _MUX_CHANNEL_4A_AND_4B;
#line 81 "d:/clicks_git/m/mux_click/sw/library/__mux_driver.h"
void mux_gpioDriverInit( const uint8_t*  gpioObj);



void mux_deviceEnable();

void mux_deviceDisable();

void mux_setMuxChannel(uint8_t ch);
#line 35 "D:/Clicks_git/M/MUX_Click/SW/example/c/ARM/STM/Click_MUX_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 Delay_ms( 100 );
}

void applicationInit()
{
 mux_gpioDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO );
 mux_deviceEnable();
 Delay_100ms();
}

void applicationTask()
{
 mux_setMuxChannel(_MUX_CHANNEL_1A_AND_1B);
 Delay_ms( 5000 );
 mux_setMuxChannel(_MUX_CHANNEL_2A_AND_2B);
 Delay_ms( 5000 );
 mux_setMuxChannel(_MUX_CHANNEL_3A_AND_3B);
 Delay_ms( 5000 );
 mux_setMuxChannel(_MUX_CHANNEL_4A_AND_4B);
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
