struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = NULL;

FUN2(&VAR3->VAR5);
if (!FUN3(&VAR3->VAR6)) {
VAR4 = FUN4(VAR3->VAR6.VAR7,
struct VAR1, VAR8);
FUN5(&VAR4->VAR8);  
}
FUN6(&VAR3->VAR5);

return VAR4;
}