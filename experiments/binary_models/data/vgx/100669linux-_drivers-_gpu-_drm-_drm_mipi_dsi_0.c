static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);


if (FUN3(VAR2, VAR4))
return 1;


if (!strcmp(VAR6->VAR7, VAR4->VAR7))
return 1;

return 0;
}