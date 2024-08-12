int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

if (!VAR4 || !VAR4->VAR5->VAR6)
return 0;
return VAR4->VAR5->FUN3(VAR4, VAR2);
}