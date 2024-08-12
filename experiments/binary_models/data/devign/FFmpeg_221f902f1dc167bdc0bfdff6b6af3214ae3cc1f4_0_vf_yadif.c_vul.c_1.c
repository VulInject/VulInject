static void FUN1(void *VAR1, void *VAR2, void *VAR3, void *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR1;
    VAR10 *VAR12 = VAR2;
    VAR10 *VAR13 = VAR3;
    VAR10 *VAR14 = VAR4;
    int VAR15;
    VAR10 *VAR16 = VAR8 ? VAR12 : VAR13;
    VAR10 *VAR17 = VAR8 ? VAR13 : VAR14;
    VAR7 /= 2;
    VAR6 /= 2;
    FUN2(0, 3, 0)
    VAR11 = (VAR10 *)VAR1 + VAR5 - 3;
    VAR12 = (VAR10 *)VAR2 + VAR5 - 3;
    VAR13 = (VAR10 *)VAR3 + VAR5 - 3;
    VAR14 = (VAR10 *)VAR4 + VAR5 - 3;
    VAR16 = (VAR10 *)(VAR8 ? VAR12 : VAR13);
    VAR17 = (VAR10 *)(VAR8 ? VAR13 : VAR14);
    FUN2(VAR5 - 3, VAR5, 0)
}