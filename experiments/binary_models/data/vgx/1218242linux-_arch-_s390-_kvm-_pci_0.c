int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
int VAR8;

VAR7 = FUN2(VAR1, VAR3->VAR9);
if (!VAR7)
return -VAR10;

FUN3(&VAR7->VAR11);
FUN3(&VAR1->VAR12);

VAR5 = VAR7->VAR5;
if (!VAR5) {
VAR8 = -VAR10;
goto VAR13;
}
if (VAR5->VAR1 != VAR1) {
VAR8 = -VAR14;
goto VAR13;
}

switch (VAR3->VAR15) {
case VAR16:

if (VAR3->VAR17.VAR18.VAR19 & ~VAR20) {
VAR8 = -VAR21;
break;
}
VAR8 = FUN4(VAR7, VAR3);
break;
case VAR22:
VAR8 = FUN5(VAR7, false);
break;
default:
VAR8 = -VAR21;
}

VAR13:
FUN6(&VAR1->VAR12);
FUN6(&VAR7->VAR11);
return VAR8;
}