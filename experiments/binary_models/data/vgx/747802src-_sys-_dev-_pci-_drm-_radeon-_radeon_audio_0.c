struct VAR1* FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR6->VAR7;
struct VAR8 *VAR8 = FUN2(VAR3);

if (VAR8->VAR9 && VAR8->VAR9->VAR10)
return VAR8->VAR9->FUN3(VAR5);

return NULL;
}