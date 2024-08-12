static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5;
struct VAR6 *VAR7 = VAR4->VAR8;
int VAR9 = 0;

for (VAR9 = 0; VAR9 < VAR4->VAR10; VAR9++)
FUN2(VAR2, VAR9, VAR7 + VAR9);
}