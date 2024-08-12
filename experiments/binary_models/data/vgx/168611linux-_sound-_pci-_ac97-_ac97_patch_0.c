static int FUN1(struct VAR1 * VAR2, const struct VAR3 *VAR4, int VAR5)
{
int VAR6, VAR7;

for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
VAR7 = FUN2(VAR2->VAR8->VAR9, FUN3(&VAR4[VAR6], VAR2));
if (VAR7 < 0)
return VAR7;
}
return 0;
}