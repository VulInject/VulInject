static void FUN1(VAR1 * VAR2, ble_gatts_evt_write_t const * VAR3)
{
VAR2->VAR4.VAR5 = VAR6;

if ( !(VAR2->VAR7) )
{
VAR2->VAR4.VAR5 = VAR8;
return;
}

if (VAR3->VAR9 != VAR10)
{
VAR2->VAR4.VAR5 = VAR11;
return;
}

const uint8_t VAR12 = FUN2();
VAR2->VAR4.VAR13 = FUN3(VAR12, &VAR2->VAR4.VAR14[0]);
}