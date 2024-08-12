static VAR1
FUN1(char *VAR2, char *VAR3, VAR4 *VAR5)
{
VAR6 *VAR7;
char *VAR8;

FUN2(VAR5, sizeof (VAR4));

if ((VAR7 = FUN3(VAR3)) == NULL)
return (VAR9);

if ((VAR8 = FUN4(VAR7->VAR10)) == NULL)
return (VAR11);

if ((VAR2 != NULL) && (FUN5(VAR2, VAR8, 0) != 0))
return (VAR12);

VAR5->VAR13 = strdup(VAR3);
VAR5->VAR14 = FUN6(VAR7->VAR15);
VAR5->VAR16 = strdup(VAR8);
VAR5->VAR17 = FUN7(VAR7->VAR15, &VAR5->VAR18);
VAR5->VAR19 = VAR7->VAR20;

if (!FUN8(VAR5)) {
FUN9(VAR5);
return (VAR21);
}

return (VAR22);
}