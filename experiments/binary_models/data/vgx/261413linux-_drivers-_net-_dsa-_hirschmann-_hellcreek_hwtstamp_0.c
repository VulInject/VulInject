static struct VAR1 *FUN1(struct VAR2 *VAR2,
int VAR3, struct VAR4 *VAR5,
unsigned int VAR6)
{
struct VAR7 *VAR8 =
&VAR2->VAR9[VAR3].VAR10;
struct VAR1 *VAR11;

VAR11 = FUN2(VAR5, VAR6);
if (!VAR11)
return NULL;

if (!FUN3(VAR12, &VAR8->VAR13))
return NULL;

return VAR11;
}