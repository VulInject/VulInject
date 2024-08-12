static void
FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4 = FUN2(VAR2);
uint32_t VAR5;

if (VAR4->VAR6) {
FUN3(VAR2) = VAR7;
return;
}
switch (VAR4->VAR8->VAR9) {
case VAR10:
VAR5 = VAR11;
break;
case VAR12:
VAR5 = VAR13;
break;
case VAR14:
VAR5 = VAR15;
break;
case VAR16:
VAR5 = VAR17;
break;
default:
VAR5 = VAR18;
break;
}

FUN3(VAR2) = VAR5;
}