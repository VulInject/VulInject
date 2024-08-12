static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7 = VAR2->VAR8;
int *VAR9;

switch (VAR7) {
case VAR10:
VAR9 = &VAR6->VAR11;
break;
case VAR12:
VAR9 = &VAR6->VAR13;
break;
case VAR14:
default:
VAR9 = &VAR6->VAR15;
break;
}

VAR4->VAR16.VAR17.VAR16[0] = *VAR9;

return 0;
}