static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR6;
int VAR7;

for (VAR7 = 0; VAR7 < VAR6->VAR8; VAR7++)
FUN3(VAR6->VAR9[VAR7], false);
}