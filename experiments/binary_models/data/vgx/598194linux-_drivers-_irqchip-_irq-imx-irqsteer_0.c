static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
int VAR4;

for (VAR4 = 0; VAR4 < VAR3->VAR5; VAR4++)
FUN3(VAR3->VAR6[VAR4],
NULL, NULL);

FUN4(VAR3->VAR7);

FUN5(VAR3->VAR8);

return 0;
}