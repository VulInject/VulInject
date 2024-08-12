static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
VAR3 &= (VAR4 | VAR5 |
VAR6);

if (VAR3 != (VAR7 | VAR8 |
VAR9)) {
FUN2(VAR2->VAR10, "");
return -VAR11;
}

return 0;
}