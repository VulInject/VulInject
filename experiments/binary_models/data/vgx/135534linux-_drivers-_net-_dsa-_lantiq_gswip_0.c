static void FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
switch (VAR3) {
case 0:
case 1:
FUN2(VAR5->VAR6);
FUN3(VAR7,
VAR5->VAR6);
FUN3(VAR8,
VAR5->VAR6);
FUN3(VAR9,
VAR5->VAR6);
break;

case 2:
case 3:
case 4:
FUN3(VAR10,
VAR5->VAR6);
break;

case 5:
FUN2(VAR5->VAR6);
FUN3(VAR10,
VAR5->VAR6);
break;
}

VAR5->VAR11 = VAR12 | VAR13 |
VAR14 | VAR15 | VAR16;
}