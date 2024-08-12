struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(sizeof(struct VAR4),
VAR6);

if (!VAR5)
return NULL;

FUN3(VAR5, VAR3,
&VAR7,
&VAR8,
&VAR9,
6);

return &VAR5->VAR10;
}