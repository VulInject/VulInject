static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
const struct VAR4 *VAR5;

VAR5 = FUN2(VAR6, VAR3->VAR7.VAR8);
if (VAR5 && VAR5->VAR9)
return (struct VAR1 *)VAR5->VAR9;
return NULL;
}