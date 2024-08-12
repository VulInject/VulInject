static void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, const VAR2 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12;
    const int VAR13 = FUN2(VAR7, 1);
    for (VAR12 = 0; VAR12 < VAR8; VAR12++)
    {
        FUN1(VAR14)
        (VAR6 + 1, VAR3, VAR7);
        FUN1(VAR15)
        (VAR6, VAR4, VAR5, VAR13);
        VAR6 += VAR11;
        VAR3 += VAR9;
        VAR4 += VAR10;
        VAR5 += VAR10;
    }
    FUN3(VAR16 "" VAR17 ""
            :
            :
            : "");
}