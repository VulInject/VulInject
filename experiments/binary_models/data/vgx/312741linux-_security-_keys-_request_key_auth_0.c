struct VAR1 *FUN1(key_serial_t VAR2)
{
char VAR3[16];
struct keyring_search_context VAR4 = {
.VAR5.VAR6		= &VAR7,
.VAR5.VAR3	= VAR3,
.VAR8			= FUN2(),
.VAR9.VAR10		= VAR11,
.VAR9.VAR12	= VAR3,
.VAR9.VAR13	= VAR14,
.VAR15			= (VAR16 |
VAR17),
};
struct VAR1 *VAR18;
key_ref_t VAR19;

VAR4.VAR5.VAR20 = sprintf(VAR3, "", VAR2);

FUN3();
VAR19 = FUN4(&VAR4);
FUN5();

if (FUN6(VAR19)) {
VAR18 = FUN7(VAR19);
if (VAR18 == FUN8(-VAR21))
VAR18 = FUN8(-VAR22);
goto VAR23;
}

VAR18 = FUN9(VAR19);
if (FUN10(VAR24, &VAR18->VAR15)) {
FUN11(VAR18);
VAR18 = FUN8(-VAR25);
}

VAR23:
return VAR18;
}