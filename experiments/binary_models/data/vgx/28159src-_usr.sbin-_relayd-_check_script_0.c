int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int			 VAR5 = 0, VAR6 = 0;
sig_t			 VAR7, VAR8, VAR9;
struct itimerval	 VAR10;
struct VAR11		*VAR12;
const char		*VAR13, *VAR14;
struct VAR15		*VAR16;

if ((VAR2->VAR17.VAR18 & VAR19) == 0) {
FUN2("", VAR20);
return (-1);
}

FUN3("",
VAR20, VAR4->VAR21, VAR4->VAR22);

VAR14 = VAR4->VAR22;
VAR13 = VAR4->VAR21;
VAR12 = &VAR4->VAR23;

VAR7 = signal(VAR24, VAR25);
VAR8 = signal(VAR26, VAR25);
VAR9 = signal(VAR27, VAR28);

switch (VAR29 = FUN4()) {
case -1:
VAR6 = -1;
goto VAR30;
case 0:
signal(VAR24, VAR28);
signal(VAR26, VAR28);
signal(VAR27, VAR28);

if ((VAR16 = FUN5(VAR31)) == NULL)
FUN6("", VAR20);
if (FUN7("") == -1)
FUN6(""/\"", VAR20);
if (setgroups(1, &VAR16->VAR32) ||
FUN8(VAR16->VAR32, VAR16->VAR32, VAR16->VAR32) ||
FUN9(VAR16->VAR33, VAR16->VAR33, VAR16->VAR33))
FUN6("", VAR20);


FUN10(VAR34 + 1);

execlp(VAR13, VAR13, VAR14, (char *)NULL);
FUN11(0);
break;
default:

signal(VAR35, VAR36);
FUN12(&VAR10, sizeof(VAR10));
bcopy(VAR12, &VAR10.VAR37, sizeof(VAR10.VAR37));
FUN13(VAR38, &VAR10, NULL);

FUN14(VAR29, &VAR5, 0);
break;
}

switch (VAR6) {
case -1:
VAR6 = -1;
break;
default:
if (FUN15(VAR5))
VAR6 = FUN16(VAR5);
else
VAR6 = 0;
}

VAR30:

FUN12(&VAR10, sizeof(VAR10));
FUN13(VAR38, &VAR10, NULL);
VAR29 = -1;

signal(VAR24, VAR7);
signal(VAR26, VAR8);
signal(VAR27, VAR9);
signal(VAR35, VAR28);

return (VAR6);
}