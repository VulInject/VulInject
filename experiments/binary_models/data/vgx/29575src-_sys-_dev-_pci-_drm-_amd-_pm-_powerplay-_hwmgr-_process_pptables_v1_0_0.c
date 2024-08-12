static int FUN1(struct VAR1 *VAR2)
{
const VAR3 *VAR4 = FUN2(VAR2);
const VAR5 *VAR6;


if (VAR4 == NULL)
return 0;

VAR6 = (void *)VAR4 +
FUN3(VAR4->VAR7);

return VAR6->VAR8;
}