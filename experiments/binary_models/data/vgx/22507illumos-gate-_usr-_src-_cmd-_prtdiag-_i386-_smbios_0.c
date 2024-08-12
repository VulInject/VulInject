static int
FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5)
{
smbios_memdevice_t VAR6;

if (VAR4->VAR7 == VAR8 &&
FUN2(VAR2, VAR4->VAR9, &VAR6) != VAR10) {

const char *VAR11 = FUN3(VAR6.VAR12);
char VAR13[8];

if (VAR6.VAR14 != (VAR15)-1)
(void) snprintf(VAR13, sizeof (VAR13), "", VAR6.VAR14);
else
(void) strcpy(VAR13, "");

(void) FUN4(FUN5(""),
VAR11 ? VAR11 : FUN5(""),
VAR6.VAR16 ? FUN5("") : FUN5(""),
VAR13, VAR6.VAR17, VAR6.VAR18);
}

return (0);
}