static void FUN1(void)
{
const struct VAR1 *VAR2;
int VAR3, VAR4 = 0;

if (VAR5.VAR6 == VAR7) {

FUN2(VAR8);
for (VAR3 = 0; VAR3 < VAR5.VAR9; VAR3++) {
VAR2 = &VAR5.VAR10[VAR3];
if (!FUN3(VAR2))
continue;
FUN4(VAR2, VAR8, false);
VAR4 = VAR3;
}
}


FUN2(VAR5.VAR6);
for (VAR3 = 0; VAR3 < VAR5.VAR9; VAR3++) {
VAR2 = &VAR5.VAR10[VAR3];
if (!FUN3(VAR2))
continue;
FUN4(VAR2, VAR5.VAR6, VAR3 == VAR4);
}
}