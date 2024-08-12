static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR2->VAR5, struct VAR3, VAR6);

switch (VAR2->VAR7) {
case VAR8:
FUN3(VAR4, VAR2->VAR9);
break;
case VAR10:
FUN4(VAR4, VAR2->VAR9);
break;
}

return 0;
}