void FUN1(struct VAR1 *VAR2,
struct VAR3 **VAR4)
{
struct VAR3 *VAR5 = *VAR4;

if (!VAR5)
return;
FUN2(&VAR5->VAR2);
FUN3(&VAR5->VAR2);
FUN4(VAR2, VAR4);
FUN5(&VAR5->VAR2);
FUN6(&VAR5->VAR2);
}