static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR5);
int VAR8;
int VAR9 = 0;

switch (VAR3 & VAR10) {
case VAR11:
VAR8 = FUN3(VAR7, VAR3);
break;
case VAR12:
VAR8 = FUN4(VAR7, VAR3);
break;
default:
VAR9 = -VAR13;
goto VAR14;
}


if (VAR8 < 0) {
VAR9 = VAR8;
goto VAR14;
}

VAR9 = FUN5(VAR7->VAR15, VAR16,
VAR17 |
VAR18 |
VAR19, VAR8);
if (VAR9 < 0)
goto VAR14;

VAR14:
return VAR9;
}