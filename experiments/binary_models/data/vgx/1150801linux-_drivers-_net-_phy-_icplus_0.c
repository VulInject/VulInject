static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
int VAR5, VAR6 = 0;

VAR5 = FUN2(VAR2, VAR7);
if (VAR5 < 0)
goto VAR8;


switch (VAR4->VAR9) {
case VAR10:
VAR6 = FUN3(VAR2, VAR11,
VAR12, 0);
if (VAR6 < 0)
goto VAR8;
break;

case VAR13:
VAR6 = FUN3(VAR2, VAR11,
VAR12,
VAR12);
if (VAR6 < 0)
goto VAR8;
break;

default:

break;
}

VAR8:
return FUN4(VAR2, VAR5, VAR6);
}