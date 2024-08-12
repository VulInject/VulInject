static void FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4;
    VAR4 = VAR5 | VAR6 | VAR7 | VAR8;
    if (VAR9)
        VAR4 |= VAR10;
    if (VAR11)
        VAR4 |= VAR12;
    VAR13 = VAR1;
    VAR14 = VAR2;
    VAR15 = FUN2(VAR13, VAR14, VAR3, VAR4);
    if (!VAR15)
    {
        fprintf(VAR16, "", VAR13, VAR14, VAR3, FUN3());
        FUN4(1);
    }
}