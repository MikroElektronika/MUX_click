_systemInit:
;Click_MUX_STM.c,35 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX_STM.c,37 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX_STM.c,38 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #1
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX_STM.c,39 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX_STM.c,40 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_MUX_STM.c,41 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_MUX_STM.c,42 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_MUX_STM.c,44 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX_STM.c,46 :: 		mux_gpioDriverInit( (T_MUX_P)&_MIKROBUS1_GPIO );
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_mux_gpioDriverInit+0
;Click_MUX_STM.c,47 :: 		mux_deviceEnable();
BL	_mux_deviceEnable+0
;Click_MUX_STM.c,48 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_MUX_STM.c,49 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_MUX_STM.c,51 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX_STM.c,53 :: 		mux_setMuxChannel(_MUX_CHANNEL_1A_AND_1B);
MOVS	R0, __MUX_CHANNEL_1A_AND_1B
BL	_mux_setMuxChannel+0
;Click_MUX_STM.c,54 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_MUX_STM.c,55 :: 		mux_setMuxChannel(_MUX_CHANNEL_2A_AND_2B);
MOVS	R0, __MUX_CHANNEL_2A_AND_2B
BL	_mux_setMuxChannel+0
;Click_MUX_STM.c,56 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_MUX_STM.c,57 :: 		mux_setMuxChannel(_MUX_CHANNEL_3A_AND_3B);
MOVS	R0, __MUX_CHANNEL_3A_AND_3B
BL	_mux_setMuxChannel+0
;Click_MUX_STM.c,58 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask6:
SUBS	R7, R7, #1
BNE	L_applicationTask6
NOP
NOP
NOP
;Click_MUX_STM.c,59 :: 		mux_setMuxChannel(_MUX_CHANNEL_4A_AND_4B);
MOVS	R0, __MUX_CHANNEL_4A_AND_4B
BL	_mux_setMuxChannel+0
;Click_MUX_STM.c,60 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask8:
SUBS	R7, R7, #1
BNE	L_applicationTask8
NOP
NOP
NOP
;Click_MUX_STM.c,61 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_MUX_STM.c,63 :: 		void main()
;Click_MUX_STM.c,65 :: 		systemInit();
BL	_systemInit+0
;Click_MUX_STM.c,66 :: 		applicationInit();
BL	_applicationInit+0
;Click_MUX_STM.c,68 :: 		while (1)
L_main10:
;Click_MUX_STM.c,70 :: 		applicationTask();
BL	_applicationTask+0
;Click_MUX_STM.c,71 :: 		}
IT	AL
BAL	L_main10
;Click_MUX_STM.c,72 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
