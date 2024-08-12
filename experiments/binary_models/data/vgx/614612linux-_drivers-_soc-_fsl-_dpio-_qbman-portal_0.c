int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
if (VAR4->VAR4.VAR5 != VAR6)
return 0;


((struct VAR3 *)VAR4)->VAR4.VAR5 = 0;


if (VAR2->VAR7.VAR8 == VAR4) {
VAR2->VAR7.VAR8 = NULL;
FUN2(&VAR2->VAR7.VAR9);
}

return 1;
}