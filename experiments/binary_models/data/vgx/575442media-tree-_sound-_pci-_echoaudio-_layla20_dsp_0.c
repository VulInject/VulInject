static int FUN1(struct VAR1 *VAR2, u16 VAR3)
{
switch (VAR3) {
case VAR4:
VAR3 = VAR5;
break;
case VAR6:
VAR3 = VAR7;
break;
default:
FUN2(VAR2->VAR8->VAR9, "");
return -VAR10;
}

if (FUN3(VAR2))
return -VAR11;

VAR2->VAR12->VAR13 = FUN4(VAR3);
VAR2->VAR13 = VAR3;
FUN5(VAR2);
return FUN6(VAR2, VAR14);
}