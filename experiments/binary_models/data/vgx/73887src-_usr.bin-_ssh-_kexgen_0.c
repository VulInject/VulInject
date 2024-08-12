int
FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2 = VAR1->VAR2;
int VAR3;

switch (VAR2->VAR4) {
case VAR5:
case VAR6:
case VAR7:
case VAR8:
case VAR9:
VAR3 = FUN2(VAR2);
break;
case VAR10:
VAR3 = FUN3(VAR2);
break;
case VAR11:
VAR3 = FUN4(VAR2);
break;
case VAR12:
VAR3 = FUN5(VAR2);
break;
default:
VAR3 = VAR13;
break;
}
if (VAR3 != 0)
return VAR3;
if ((VAR3 = FUN6(VAR1, VAR14)) != 0 ||
(VAR3 = FUN7(VAR1, VAR2->VAR15)) != 0 ||
(VAR3 = FUN8(VAR1)) != 0)
return VAR3;
FUN9("");
FUN10(VAR1, VAR16, &VAR17);
return 0;
}