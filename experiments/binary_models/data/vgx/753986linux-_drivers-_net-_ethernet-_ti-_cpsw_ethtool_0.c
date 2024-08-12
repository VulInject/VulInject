int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);

switch (VAR3) {
case VAR6:
return (VAR7 +
(VAR5->VAR8 + VAR5->VAR9) *
VAR10);
default:
return -VAR11;
}
}