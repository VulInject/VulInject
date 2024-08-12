static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
int VAR7;

switch (VAR6->VAR8 & VAR9) {
case VAR10:
VAR7 = FUN2(VAR4, VAR6->VAR11);
break;
case VAR12:
VAR7 = FUN3(VAR2, VAR6->VAR11);
break;
default:
return 0;
}
if (VAR7 < 0)
return FUN4(&VAR2->VAR13, VAR7, "",
VAR6->VAR11);

return VAR7;
}