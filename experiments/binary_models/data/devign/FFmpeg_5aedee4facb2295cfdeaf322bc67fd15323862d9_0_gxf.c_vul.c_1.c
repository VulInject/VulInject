static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    uint32_t VAR9 = FUN2(VAR5);
    uint32_t VAR10 = FUN2(VAR5);
    int VAR11;
    VAR3 -= 8;
    if (VAR2->VAR12 & VAR13)
    {
        FUN3(VAR5, VAR3);
        return;
    }
    if (VAR10 > 1000)
    {
        FUN4(VAR2, VAR14, "", VAR10, VAR10);
        VAR10 = 1000;
    }
    if (VAR3 < 4 * VAR10)
    {
        FUN4(VAR2, VAR14, "");
        FUN3(VAR5, VAR3);
        return;
    }
    VAR3 -= 4 * VAR10;
    FUN5(VAR7, 0, 0, 0, 0, 0);
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
        FUN5(VAR7, (VAR15)FUN2(VAR5) * 1024, VAR11 * (VAR15)VAR9 + 1, 0, 0, 0);
    FUN3(VAR5, VAR3);
}