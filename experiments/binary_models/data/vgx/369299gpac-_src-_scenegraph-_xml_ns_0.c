static VAR1 FUN1(VAR2 *VAR3, const char *VAR4)
{
VAR5 *VAR6 = VAR3->VAR7;
while (VAR6) {
if (VAR6->VAR8==VAR9) {
VAR10 *VAR11 = (VAR10*)VAR6;
if (VAR11->VAR12 && !FUN2(VAR11->VAR12, "", 6) && !strcmp(VAR11->VAR12+6, VAR4)) {
return FUN3(*(VAR13 *)  VAR11->VAR14);
}
}
VAR6 = VAR6->VAR15;
}
if (!VAR3->VAR16->VAR17) return 0;
return FUN1((VAR2*)VAR3->VAR16->VAR17->VAR18, VAR4);
}