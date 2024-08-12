static int FUN1(struct VAR1 *VAR2)
{
u32 VAR3, VAR4, VAR5, VAR6;
int VAR7;

VAR4 = 0;
VAR5 = 0;
VAR3 = FUN2(VAR8,
VAR2->VAR9 >> 1);

if (VAR2->VAR10->VAR11)
VAR5 = FUN2(VAR12,
VAR2->VAR13 / 200);
else if (VAR2->VAR13 == 2000)
VAR4 = VAR14 | VAR15;

switch (VAR2->VAR16) {
case VAR17:
VAR6 = VAR3 | VAR4;
break;
case VAR18:
VAR6 = VAR3;
VAR5 = 0;
break;
case VAR19:
VAR6 = VAR4;
break;
case VAR20:
case VAR21:
VAR6 = 0;
VAR5 = 0;
break;
default:
FUN3(VAR2->VAR22, "",
FUN4(VAR2->VAR16));
return -VAR23;
}

if (VAR6 & VAR14) {
if (!VAR2->VAR24) {
FUN3(VAR2->VAR22,
"");
return -VAR23;
}


VAR7 = FUN5(VAR2,
VAR2->VAR24);
if (VAR7) {
FUN3(VAR2->VAR22,
"");
return VAR7;
}
}

FUN6(VAR2, VAR25, VAR8 |
VAR14 | VAR15 |
VAR26 | VAR27,
VAR6);

FUN6(VAR2, VAR28, VAR12,
VAR5);

return 0;
}