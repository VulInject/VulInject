static void FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR3;

FUN3(VAR2, "",
VAR7->VAR8, VAR7->VAR9);

FUN4(VAR5->VAR10, VAR7->VAR9, 0);
FUN5(VAR7);
}