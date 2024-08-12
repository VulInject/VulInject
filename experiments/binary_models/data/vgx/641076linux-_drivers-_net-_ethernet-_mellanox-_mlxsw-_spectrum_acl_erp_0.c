void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = (struct VAR5 *) VAR4;
struct VAR6 *VAR7 = VAR2->VAR7;

FUN2(&VAR7->VAR8);
FUN3(VAR7->VAR9, VAR5);
FUN4(&VAR7->VAR8);
}