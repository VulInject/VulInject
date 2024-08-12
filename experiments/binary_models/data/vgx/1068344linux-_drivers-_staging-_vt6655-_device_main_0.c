static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;

VAR6->VAR4 = VAR4;

switch (VAR4->VAR7) {
case VAR8:
break;
case VAR9:
FUN2(VAR6->VAR10, VAR11, VAR12);

FUN3(VAR6->VAR10, VAR13, VAR14);

break;
case VAR15:
FUN2(VAR6->VAR10, VAR11, VAR12);

FUN3(VAR6->VAR10, VAR13, VAR16);

break;
default:
return -VAR17;
}

VAR6->VAR18 = VAR4->VAR7;

return 0;
}