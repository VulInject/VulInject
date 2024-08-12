int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
int VAR5;

VAR5 = FUN2(VAR2->VAR4,
VAR6, true);


FUN3(VAR4);
VAR2->VAR4 = NULL;
FUN4(VAR4);

return VAR5;
}