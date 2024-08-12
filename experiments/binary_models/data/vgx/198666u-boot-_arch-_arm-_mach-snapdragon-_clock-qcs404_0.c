VAR1 FUN1(struct VAR2 *VAR2, ulong VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2->VAR6);

switch (VAR2->VAR7) {
case VAR8:

FUN3(VAR5->VAR9, &VAR10, 0, 12, 125,
VAR11);
FUN4(VAR5->VAR9 + VAR12);
break;
case VAR13:
FUN5(VAR5->VAR9, &VAR14);
break;
case VAR15:

FUN3(VAR5->VAR9, &VAR16, 4, 0, 0,
VAR17);
FUN6(VAR5->VAR9, &VAR18);
FUN4(VAR5->VAR9 + FUN7(1));
break;
case VAR19:
FUN4(VAR5->VAR9 + FUN8(1));
break;
case VAR20:
if (VAR3 == 250000000)
FUN3(VAR5->VAR9, &VAR21, 2, 0, 0,
VAR22);
else if (VAR3 == 125000000)
FUN3(VAR5->VAR9, &VAR21, 4, 0, 0,
VAR22);
else if (VAR3 == 50000000)
FUN3(VAR5->VAR9, &VAR21, 10, 0, 0,
VAR22);
else if (VAR3 == 5000000)
FUN3(VAR5->VAR9, &VAR21, 2, 1, 50,
VAR22);
break;
default:
return 0;
}

return 0;
}