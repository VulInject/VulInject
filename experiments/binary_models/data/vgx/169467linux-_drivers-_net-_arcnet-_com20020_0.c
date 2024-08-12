static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
int VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = VAR3;

FUN3(VAR2, VAR9->VAR10);
FUN4(VAR7, VAR4, VAR11);
FUN5(VAR2->VAR12[0], VAR4, VAR13);

return 0;
}