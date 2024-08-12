static int
FUN1(void *VAR1, const char *VAR2, uint64_t VAR3,
VAR4 *VAR5)
{
VAR6 *VAR7;
VAR8 *VAR9;
char *VAR10 = NULL;
size_t VAR11 = 0;
int VAR12, VAR13;



VAR12 = open("", VAR14);
if (VAR12 < 0)
return (-1);

VAR7 = FUN2(sizeof (VAR6), VAR15);

VAR9 = FUN3();
FUN4(VAR9, "", VAR16);

(void) FUN5(VAR7->VAR17, VAR2, sizeof (VAR7->VAR17));
VAR10 = FUN6(VAR9, &VAR11);
VAR7->VAR18 = (VAR19)(VAR20)VAR10;
VAR7->VAR21 = VAR11;

VAR13 = FUN7(VAR12, VAR22, VAR7);

FUN8(VAR10, VAR11);
free((void *)(VAR20)VAR7->VAR23);
FUN9(VAR9);
FUN10(VAR7, sizeof (VAR6));

(void) close(VAR12);

*VAR5 = (VAR13 == 0);

return (0);
}