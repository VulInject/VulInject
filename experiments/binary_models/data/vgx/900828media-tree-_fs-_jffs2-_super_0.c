static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(VAR6, VAR7);
if (!VAR5)
return NULL;
return &VAR5->VAR8;
}