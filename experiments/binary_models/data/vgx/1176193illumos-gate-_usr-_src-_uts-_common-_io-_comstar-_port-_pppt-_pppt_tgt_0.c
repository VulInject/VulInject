static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
stmf_change_status_t	VAR5;

switch (VAR4->VAR6) {
case VAR7:
FUN2(VAR2, VAR4, VAR8);
break;
case VAR9:
FUN2(VAR2, VAR4, VAR10);
break;
case VAR11:

VAR5.VAR12 = VAR13;
VAR5.VAR14 = NULL;
(void) FUN3(VAR15,
VAR2->VAR16, &VAR5);
break;
case VAR17:
case VAR18:

break;
default:
FUN4(0);
}
}