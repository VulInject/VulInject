void *FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR5 = FUN3(&VAR4->VAR6, 0, VAR4->VAR6.VAR7,
&VAR4->VAR8);
if (VAR5)
return FUN4(VAR5);

return VAR4->VAR8.virtual;
}