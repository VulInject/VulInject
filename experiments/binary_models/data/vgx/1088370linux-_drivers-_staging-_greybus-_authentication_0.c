static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR1->VAR5);


if (VAR4) {
VAR2->VAR6 = VAR4;
return 0;
}

return -VAR7;
}