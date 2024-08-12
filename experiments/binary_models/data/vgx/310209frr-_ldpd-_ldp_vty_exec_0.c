static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
VAR4 *VAR5)
{
struct VAR6		*VAR7 = NULL;
char			 VAR8[VAR9];
static VAR4	*VAR10;
static VAR4	*VAR11;
VAR4		*VAR12;
static VAR4	*VAR13;
VAR4		*VAR14;

switch (VAR1->VAR15.VAR16) {
case VAR17:
VAR7 = VAR1->VAR18;

snprintf(VAR8, sizeof(VAR8), "",
FUN2(VAR7->VAR19, &VAR7->VAR20), VAR7->VAR21);

VAR10 = FUN3();
FUN4(VAR10, "",
FUN5(VAR7->VAR22));

VAR11 = FUN6();
FUN7(VAR10, "",
VAR11);

VAR13 = FUN6();
FUN7(VAR10, "",
VAR13);

FUN7(VAR5, VAR8, VAR10);
break;
case VAR23:
VAR7 = VAR1->VAR18;

VAR12 = FUN3();
FUN8(VAR12, "", "",
&VAR7->VAR24);
FUN9(VAR11, VAR12);
break;
case VAR25:
VAR7 = VAR1->VAR18;

VAR14 = FUN3();
FUN8(VAR14, "", "",
&VAR7->VAR24);
FUN4(VAR14, "",
FUN5(VAR7->VAR26));
FUN10(VAR14, "", VAR7->VAR27);
FUN9(VAR13, VAR14);
break;
case VAR28:
return (1);
default:
break;
}

return (0);
}