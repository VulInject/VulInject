static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
switch (VAR4->VAR5) {
case VAR6:
case VAR7:
return FUN2(VAR2, VAR4, true);
default:
return FUN3(VAR2, VAR4);
}
}