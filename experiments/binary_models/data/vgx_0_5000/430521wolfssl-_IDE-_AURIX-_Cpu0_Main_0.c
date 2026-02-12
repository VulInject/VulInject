static void init_UART(void)
{
IfxAsclin_Asc_Config ascConfig;

IfxCpu_Irq_installInterruptHandler(asclin0_Tx_ISR, INTPRIO_ASCLIN0_TX);


const IfxAsclin_Asc_Pins pins = {
NULL_PTR,         IfxPort_InputMode_pullUp,     
&SERIAL_PIN_RX,   IfxPort_InputMode_pullUp,     
NULL_PTR,         IfxPort_OutputMode_pushPull,  
&SERIAL_PIN_TX,   IfxPort_OutputMode_pushPull,  
IfxPort_PadDriver_cmosAutomotiveSpeed1
};


IfxAsclin_Asc_initModuleConfig(&ascConfig, SERIAL_PIN_TX.module);


ascConfig.baudrate.baudrate = SERIAL_BAUDRATE;


ascConfig.interrupt.txPriority = INTPRIO_ASCLIN0_TX;
ascConfig.interrupt.typeOfService = IfxCpu_Irq_getTos(IfxCpu_getCoreIndex());


ascConfig.txBuffer = &g_ascTxBuffer;
ascConfig.txBufferSize = ASC_TX_BUFFER_SIZE;

ascConfig.pins = &pins;


IfxAsclin_Asc_initModule(&g_asc, &ascConfig);


setvbuf(stdin, NULL, _IONBF, 0);
setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
}