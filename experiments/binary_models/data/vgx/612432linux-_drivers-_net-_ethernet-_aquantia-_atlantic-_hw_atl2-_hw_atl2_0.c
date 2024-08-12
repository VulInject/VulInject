static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR2->VAR4;
int VAR5;

VAR5 = FUN2(VAR2);
if (VAR5)
return VAR5;

memset(VAR4, 0, sizeof(*VAR4));

VAR2->VAR6->FUN3(VAR2, VAR7);

VAR5 = FUN4(VAR2);

return VAR5;
}