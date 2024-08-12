int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6, *VAR7;
int VAR8 = 0;
int VAR9;

FUN2(VAR2->VAR10 >= 1);

FUN3();
VAR4 = FUN4(VAR2->VAR11 & 0xffffffff);
if (!VAR4) {
VAR8 = VAR12;
goto VAR13;
}

VAR7 = NULL;
for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++) {
VAR6 = &VAR2->VAR14[VAR9];
switch (VAR6->VAR15) {
case VAR16:
VAR8 = FUN5(VAR2, VAR6, VAR4);
if (VAR8 != 0)
goto VAR13;
break;
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
VAR8 = FUN6(VAR2, VAR6, VAR4->VAR23,
VAR2->VAR24);
if (VAR8 != 0)
goto VAR13;
break;

default:
VAR8 = VAR12;
goto VAR13;
}
}

VAR13:
FUN7();
return (VAR8);
}