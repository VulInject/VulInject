static void FUN1(struct VAR1 *VAR1, const VAR2 *VAR3, struct VAR4 *VAR4)
{
*VAR1 = VAR5;

switch (VAR3->VAR6) {
case VAR7:	
VAR1->VAR6 = VAR8;
VAR1->VAR9 = FUN2(VAR3->VAR9);
break;
case VAR10:	
{

const struct VAR11 *VAR12 = &VAR13;
VAR1->VAR6 = VAR12->VAR14;
err_t VAR15 = FUN3(VAR3->VAR9, VAR12, &VAR1->VAR16);
if (VAR15 != NULL) {
FUN4(VAR17, VAR4,
"",
VAR15);
}
break;
}
case VAR18:	
VAR1->VAR6 = VAR19;
VAR1->VAR9 = FUN2(VAR3->VAR9);
break;
case VAR20:
VAR1->VAR6 = VAR21;
VAR1->VAR9 = FUN2(VAR3->VAR9);
break;
default:
VAR1->VAR6 = VAR22;
VAR1->VAR9 = VAR23;
break;
}
}