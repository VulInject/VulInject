void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(&VAR2->VAR5);
struct VAR6 *VAR6 = VAR4->VAR6;

FUN3(VAR6);
if (VAR6->VAR7) {
VAR6->VAR7->FUN4(VAR6, VAR8,
VAR9);
VAR6->VAR7->FUN4(VAR6, VAR4->VAR10,
VAR9);
}
FUN5(VAR6);
}