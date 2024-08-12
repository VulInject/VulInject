static void FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
FUN2(VAR2->VAR6[VAR4],
(VAR3 >> VAR4) & 1);
}