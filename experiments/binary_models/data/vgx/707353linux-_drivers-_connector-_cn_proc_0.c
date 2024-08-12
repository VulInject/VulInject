static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
enum VAR5 *VAR6 = NULL;
int VAR7 = 0;

if (VAR2->VAR8 != sizeof(*VAR6))
return;


if ((FUN2() != &VAR9) ||
!FUN3(VAR10))
return;


if (!FUN4(VAR4, &VAR9, VAR11)) {
VAR7 = VAR12;
goto VAR13;
}

VAR6 = (enum VAR5 *)VAR2->VAR14;
switch (*VAR6) {
case VAR15:
FUN5(&VAR16);
break;
case VAR17:
FUN6(&VAR16);
break;
default:
VAR7 = VAR18;
break;
}

VAR13:
FUN7(VAR7, VAR2->VAR19, VAR2->VAR20);
}