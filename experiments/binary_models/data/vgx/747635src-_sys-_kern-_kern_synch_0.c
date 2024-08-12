int
FUN1(const volatile void *VAR1, int VAR2, const char *VAR3, int VAR4)
{
struct sleep_state VAR5;
int VAR6;

FUN2((VAR2 & ~(VAR7 | VAR8)) == 0);
FUN2(VAR1 != &VAR9 || FUN3(VAR2, VAR8) || VAR4 != 0);

FUN2(VAR1 == &VAR9 || VAR4 || FUN4());

if (VAR10 == 2)
FUN5();
if (VAR10 || VAR11) {
int VAR12;

VAR12 = FUN6();
FUN7(VAR13);
if (FUN4()) {
VAR6 = FUN8(&VAR14);
FUN9(&VAR14, VAR6);
}
FUN7(VAR12);
return (0);
}

FUN10(&VAR5, VAR1, VAR2, VAR3, VAR4);
return FUN11(&VAR5, 1);
}