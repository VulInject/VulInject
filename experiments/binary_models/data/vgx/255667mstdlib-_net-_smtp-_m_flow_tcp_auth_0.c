static VAR1 FUN1(void *VAR2, M_state_machine_status_t VAR3,
VAR4 *VAR5)
{
VAR6     *VAR7        = VAR2;
const char               *VAR8           = NULL;
(void)VAR5;

if (VAR3 != VAR9)
return VAR10;

VAR8 = FUN2(VAR7->VAR11.VAR12);
VAR7->VAR11.VAR13++;

if (VAR7->VAR11.VAR13 < 3 && !FUN3(VAR7, 334))
return VAR10;

if (VAR7->VAR11.VAR13 == 3 && !FUN3(VAR7, 235))
return VAR10;

if (VAR7->VAR11.VAR13 == 3)
return VAR9;

if (FUN4(VAR8, "", 12)) {

*VAR5 = VAR14;
return VAR15;
}

if (FUN4(VAR8, "", 12)) {

*VAR5 = VAR16;
return VAR15;
}

VAR7->VAR11.VAR17 = VAR18;
VAR7->VAR11.VAR19 = VAR20;
FUN5(VAR7->VAR21, sizeof(VAR7->VAR21), "", VAR8);
return VAR10;
}