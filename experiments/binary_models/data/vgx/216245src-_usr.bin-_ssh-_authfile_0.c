int
FUN1(int VAR1, const char *VAR2, const char *VAR3,
struct VAR4 **VAR5)
{
struct VAR4 *VAR6 = NULL, *VAR7 = NULL;
int VAR8;

if (VAR5 != NULL)
*VAR5 = NULL;

switch (VAR1) {
case VAR9:
case VAR10:
case VAR11:
case VAR12:
case VAR13:
case VAR14:
break;
default:
return VAR15;
}

if ((VAR8 = FUN2(VAR1, VAR2,
VAR3, &VAR6, NULL)) != 0 ||
(VAR8 = FUN3(VAR2, &VAR7)) != 0)
goto VAR16;


if (FUN4(VAR6, VAR7) == 0) {
VAR8 = VAR17;
goto VAR16;
}

if ((VAR8 = FUN5(VAR6)) != 0 ||
(VAR8 = FUN6(VAR7, VAR6)) != 0)
goto VAR16;
VAR8 = 0;
if (VAR5 != NULL) {
*VAR5 = VAR6;
VAR6 = NULL;
}
VAR16:
FUN7(VAR6);
FUN7(VAR7);
return VAR8;
}