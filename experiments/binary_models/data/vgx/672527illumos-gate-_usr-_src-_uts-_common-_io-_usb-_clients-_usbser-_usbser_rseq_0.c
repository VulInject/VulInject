static int
FUN1(VAR1 *VAR2, int VAR3, uintptr_t VAR4, int VAR5, int VAR6,
uintptr_t VAR7)
{
int		VAR8;
VAR9	*VAR10;
int		VAR11 = VAR12;

for (VAR8 = VAR3 - 1; VAR8 >= 0; VAR8--) {
VAR10 = &VAR2[VAR8].VAR13;

if (VAR10->VAR14 == NULL) {
continue;
}
VAR10->VAR15 = (VAR8 != VAR7) ? VAR10->FUN2(VAR4) : VAR6;
VAR11 = (VAR10->VAR16) ? (VAR10->FUN3(VAR2, VAR8, VAR4)) : VAR12;

if (VAR11 == VAR17) {
break;
}
FUN4(VAR11 == VAR12);
}
return (VAR11);
}