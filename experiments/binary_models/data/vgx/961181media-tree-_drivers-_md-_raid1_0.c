static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->private;
sector_t VAR6 = VAR2->VAR7;
int VAR8;

for (VAR8 = 0; VAR8 < VAR4->VAR9 * 2; VAR8++) {
struct VAR10 *VAR10 = VAR2->VAR11[VAR8];
if (VAR10->VAR12)
FUN2(VAR4->VAR13[VAR8].VAR14, VAR2->VAR5);
}

FUN3(VAR2, VAR4->VAR15);

FUN4(VAR4, VAR6);
}