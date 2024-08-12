static struct VAR1 *FUN1(struct VAR2 *VAR2, int VAR3,
unsigned long VAR4)
{
struct VAR1 *VAR5;

VAR5 = FUN2(sizeof(*VAR5), VAR6);
if (!VAR5)
return FUN3(-VAR7);

VAR5->VAR4 = VAR4;
VAR5->VAR3 = VAR3;
FUN4(&VAR5->VAR8, 1);
FUN5(&VAR5->VAR9, &VAR2->VAR10);

return VAR5;
}