static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4)
{
VAR5 *VAR6 = NULL;
VAR5 *VAR7 = ((VAR8 *)VAR2)->VAR9;
while (VAR7) {
if (VAR7->VAR10 != VAR3) {
VAR6 = VAR7;
VAR7 = VAR7->VAR11;
continue;
}
if (VAR4) {
VAR7->VAR10 = VAR4;
} else {
if (VAR6) VAR6->VAR11 = VAR7->VAR11;
else ((VAR8 *)VAR2)->VAR9 = VAR7->VAR11;
FUN2(VAR7);
}
break;
}
}