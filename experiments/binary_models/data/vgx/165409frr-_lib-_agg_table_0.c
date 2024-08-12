struct VAR1 *FUN1(void)
{
struct VAR1 *VAR2;

VAR2 = FUN2(VAR3, sizeof(struct VAR1));

VAR2->VAR4 = FUN3(&VAR5);
FUN4(VAR2->VAR4, VAR2);

return VAR2;
}