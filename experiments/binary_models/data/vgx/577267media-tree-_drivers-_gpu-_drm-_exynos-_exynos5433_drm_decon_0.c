static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
int VAR5;

if (FUN2(VAR6, &VAR4->VAR7))
return;

for (VAR5 = VAR4->VAR8; VAR5 < VAR9; VAR5++)
FUN3(VAR4, VAR5, true);
}