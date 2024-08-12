static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = NULL;
int VAR5;

for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
struct VAR7 *VAR8 = VAR9[VAR5];
struct VAR2 *VAR10 = NULL, *VAR11;

do {
VAR11 = FUN2(VAR10, &VAR8->VAR12);
FUN3(VAR10);
VAR10 = VAR11;

if (!VAR11)
break;

FUN4(VAR3, VAR11, VAR13);
FUN5(VAR3, &VAR4, VAR14, VAR11);
} while (true);
}

if (FUN6(VAR4))
FUN7(VAR3);

return VAR4 ?: FUN8(-VAR15);
}