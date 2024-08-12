void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5,
int VAR6, int VAR7, int VAR8,
int VAR9)
{
int VAR10;
for (VAR10 = VAR9 - 1; VAR10 >= 0; VAR10--) {
switch (VAR8) {
case VAR11:
FUN2(VAR2 + VAR10, VAR4, VAR6 >> VAR10,
VAR7 << VAR10);
break;
case VAR12:
FUN3(VAR2 + VAR10, VAR4, VAR6 >> VAR10,
VAR7 << VAR10);
break;
}
}
}