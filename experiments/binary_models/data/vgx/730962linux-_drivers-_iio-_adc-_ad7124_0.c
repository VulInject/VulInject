static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
unsigned int VAR4;

VAR4 = VAR2->VAR5[VAR3].VAR6.VAR7;

switch (VAR2->VAR5[VAR3].VAR6.VAR8) {
case VAR9:
return FUN2(VAR4 * 230, 1000);
case VAR10:
return FUN2(VAR4 * 262, 1000);
default:
return -VAR11;
}
}