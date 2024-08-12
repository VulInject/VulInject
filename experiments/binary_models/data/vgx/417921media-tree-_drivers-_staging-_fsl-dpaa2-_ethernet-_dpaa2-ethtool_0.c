static void FUN1(struct VAR1 *VAR2, u32 VAR3,
VAR4 *VAR5)
{
VAR4 *VAR6 = VAR5;
int VAR7;

switch (VAR3) {
case VAR8:
for (VAR7 = 0; VAR7 < VAR9; VAR7++) {
FUN2(VAR6, VAR10[VAR7], VAR11);
VAR6 += VAR11;
}
for (VAR7 = 0; VAR7 < VAR12; VAR7++) {
FUN2(VAR6, VAR13[VAR7], VAR11);
VAR6 += VAR11;
}
break;
}
}