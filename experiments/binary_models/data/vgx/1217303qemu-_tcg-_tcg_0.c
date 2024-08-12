static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
int VAR5;

for (VAR5 = 0; VAR5 < VAR4; ++VAR5) {
VAR6 *VAR7 = &VAR2->VAR8[VAR5];
int VAR9;

switch (VAR7->VAR10) {
case VAR11:
case VAR12:
case VAR13:
VAR9 = VAR14 | VAR15;
break;
case VAR16:
case VAR17:
VAR9 = VAR14;
break;
default:
FUN2();
}
VAR7->VAR9 = VAR9;
FUN3(VAR7);
}
}