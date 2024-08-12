static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

switch (VAR4->VAR7) {
case VAR8:
return FUN3(VAR6, VAR4->VAR9, VAR4->VAR10);
default:
return -VAR11;
}
}