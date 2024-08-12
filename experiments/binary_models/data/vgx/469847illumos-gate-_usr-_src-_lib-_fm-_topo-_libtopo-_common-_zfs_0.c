static VAR1
FUN1(VAR2 *VAR3, char *VAR4, size_t VAR5)
{
uint64_t VAR6, VAR7;
cbdata_t VAR8;
ssize_t VAR9;
const char *VAR10;
char VAR11[64];

(void) FUN2(VAR3, VAR12, &VAR6);


VAR8.VAR13 = VAR6;
VAR8.VAR14 = NULL;

if (FUN3(VAR15, VAR16, &VAR8) == 1) {
VAR10 = FUN4(VAR8.VAR14);
} else {
(void) snprintf(VAR11, sizeof (VAR11), "", VAR6);
VAR10 = VAR11;
}

if (FUN2(VAR3, VAR17, &VAR7) == 0)
VAR9 = snprintf(VAR4, VAR5, "%VAR18:
VAR19, VAR10, VAR7);
else
VAR9 = snprintf(VAR4, VAR5, "%VAR18:
VAR19, VAR10);

if (VAR8.VAR14)
FUN5(VAR8.VAR14);

return (VAR9);
}