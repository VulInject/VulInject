static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    TCGv_i64 VAR11;
    VAR12 *VAR13 = NULL;
    VAR4 = FUN2(VAR3, 29, 3);
    VAR5 = FUN2(VAR3, 22, 2);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 12, 4);
    VAR8 = FUN2(VAR3, 5, 5);
    VAR9 = FUN2(VAR3, 4, 1);
    VAR10 = FUN2(VAR3, 0, 4);
    if (VAR4 || VAR5 > 1)
    {
        FUN3(VAR2);
        return;
    }
    if (!FUN4(VAR2))
    {
        return;
    }
    if (VAR7 < 0x0e)
    {
        VAR12 *VAR14 = FUN5();
        VAR13 = FUN5();
        FUN6(VAR7, VAR14);
        VAR11 = FUN7(VAR10 << 28);
        FUN8(VAR11);
        FUN9(VAR11);
        FUN10(VAR13);
        FUN11(VAR14);
    }
    FUN12(VAR2, VAR5, VAR8, VAR6, false, VAR9);
    if (VAR7 < 0x0e)
    {
        FUN11(VAR13);
    }
}