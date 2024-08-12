static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = NULL;
struct VAR6 *VAR6;

FUN2(VAR3);
VAR6 = VAR3->VAR6;
if (VAR6) {
VAR5 = VAR6->VAR7;
FUN3(VAR5);
}
FUN4(VAR3);

return VAR5 ? &VAR5->VAR5 : NULL;
}