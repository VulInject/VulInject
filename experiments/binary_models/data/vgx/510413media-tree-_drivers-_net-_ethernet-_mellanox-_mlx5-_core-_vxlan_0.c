void FUN1(struct VAR1 *VAR2, sa_family_t VAR3,
u16 VAR4, int VAR5)
{
struct VAR6 *VAR7;

VAR7 = FUN2(sizeof(*VAR7), VAR8);
if (!VAR7)
return;

if (VAR5)
FUN3(&VAR7->VAR9, VAR10);
else
FUN3(&VAR7->VAR9, VAR11);

VAR7->VAR2 = VAR2;
VAR7->VAR4 = VAR4;
VAR7->VAR3 = VAR3;
FUN4(VAR2->VAR12, &VAR7->VAR9);
}