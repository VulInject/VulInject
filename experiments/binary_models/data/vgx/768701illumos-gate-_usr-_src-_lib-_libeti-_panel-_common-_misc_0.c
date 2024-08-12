static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR1		*VAR5;
VAR3	*VAR6;
VAR3	*VAR7;

if ((VAR7 = VAR2 -> VAR8) == 0) {
VAR2 -> VAR8 = VAR4 -> VAR9 = VAR4;
return;
}

VAR6 = VAR7 -> VAR9;

for (VAR5 = VAR10; VAR5 != VAR2; VAR5 = VAR5->VAR11) {
if (VAR6 -> VAR12 == VAR5) {
VAR7 = VAR6;
VAR6 = VAR6 -> VAR9;
if (VAR7 == VAR2 -> VAR8) {
VAR2 -> VAR8 = VAR4;
break;
}
}
}

VAR4 -> VAR9 = VAR6;
VAR7 -> VAR9 = VAR4;
}