static void FUN1(VAR1                * VAR2,
VAR3        * VAR4,
VAR5 * VAR6)
{
ret_code_t           VAR7;
nrf_ble_bms_ctrlpt_t VAR8;

VAR7 = FUN2(VAR2, VAR4->VAR9, VAR4->VAR10, &VAR8);
if (VAR7 != VAR11)
{
VAR6->VAR12 = VAR7;
VAR6->update      = 0;

return;
}

VAR6->VAR12 = VAR13;
VAR6->update      = 1;

FUN3("");


FUN4(VAR2, VAR8.VAR14);
}