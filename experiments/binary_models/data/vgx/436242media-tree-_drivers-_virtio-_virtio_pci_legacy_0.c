static void FUN1(struct VAR1 *VAR2, unsigned VAR3,
void *VAR4, unsigned VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
void VAR8 *VAR9 = VAR7->VAR9 +
FUN3(VAR7) + VAR3;
VAR10 *VAR11 = VAR4;
int VAR12;

for (VAR12 = 0; VAR12 < VAR5; VAR12++)
VAR11[VAR12] = FUN4(VAR9 + VAR12);
}