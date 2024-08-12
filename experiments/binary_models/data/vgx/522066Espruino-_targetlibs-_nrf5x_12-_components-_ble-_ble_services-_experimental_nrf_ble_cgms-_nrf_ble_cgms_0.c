static VAR1 FUN1(VAR2 * VAR3)
{
uint8_t               VAR4;
uint8_t               VAR5[VAR6];
ble_add_char_params_t VAR7;

memset(&VAR7, 0, sizeof(VAR7));

VAR4 = FUN2(VAR5, &(VAR3->VAR8));

VAR7.VAR9         = VAR10;
VAR7.VAR11      = VAR4;
VAR7.VAR12     = VAR4;
VAR7.VAR13 = VAR5;
VAR7.VAR14  = VAR15;
VAR7.VAR16 = VAR17;


return FUN3(VAR3->VAR18,
&VAR7,
&VAR3->VAR19.VAR8);
}