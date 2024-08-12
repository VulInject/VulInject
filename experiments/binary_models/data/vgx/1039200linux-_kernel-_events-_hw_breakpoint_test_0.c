static void FUN1(struct VAR1 *VAR2, int *VAR3, int VAR4, struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR4, VAR6, *VAR3);

FUN3(VAR2, VAR8);
FUN4(VAR2, FUN5(VAR8));
FUN6(VAR2, VAR9[*VAR3]);
VAR9[(*VAR3)++] = VAR8;
}