int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
int VAR8;

VAR7 = FUN2(VAR3, VAR5->VAR9);
VAR8 = FUN3(VAR7, VAR5);

if (VAR8 == 0)
VAR7->VAR10 = VAR5->VAR11 ? VAR1->VAR12 : NULL;

return VAR8;
}