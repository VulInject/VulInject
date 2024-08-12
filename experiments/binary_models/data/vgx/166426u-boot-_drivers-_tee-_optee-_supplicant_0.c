void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
void **VAR5)
{
struct VAR6 *VAR7 = VAR4->VAR8;

switch (VAR7->VAR9) {
case VAR10:
FUN2(VAR2, VAR7, VAR5);
break;
case VAR11:
FUN3(VAR7);
break;
case VAR12:
FUN4("");
VAR7->VAR13 = VAR14;
break;
case VAR15:
FUN5(VAR2, VAR7);
break;
case VAR16:
FUN6(VAR7);
break;
default:
VAR7->VAR13 = VAR17;
}

VAR7->VAR18 = VAR19;
}