int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;

if (!VAR4 || !VAR4->VAR5->VAR6)
return 0;

return VAR2->VAR4->VAR5->FUN2(VAR4);
}