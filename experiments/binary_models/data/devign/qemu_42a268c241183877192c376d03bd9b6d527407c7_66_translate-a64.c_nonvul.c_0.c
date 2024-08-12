static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12 = NULL;
    TCGv_i64 VAR13, VAR14, VAR15;
    if (!FUN2(VAR3, 29, 1))
    {
        FUN3(VAR2);
        return;
    }
    if (VAR3 & (1 << 10 | 1 << 4))
    {
        FUN3(VAR2);
        return;
    }
    VAR4 = FUN2(VAR3, 31, 1);
    VAR5 = FUN2(VAR3, 30, 1);
    VAR10 = FUN2(VAR3, 11, 1);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 12, 4);
    VAR8 = FUN2(VAR3, 5, 5);
    VAR9 = FUN2(VAR3, 0, 4);
    if (VAR7 < 0x0e)
    {
        VAR11 *VAR16 = FUN4();
        VAR12 = FUN4();
        FUN5(VAR7, VAR16);
        VAR13 = FUN6();
        FUN7(VAR13, VAR9 << 28);
        FUN8(VAR13);
        FUN9(VAR13);
        FUN10(VAR12);
        FUN11(VAR16);
    }
    if (VAR10)
    {
        VAR14 = FUN12(VAR2);
        FUN7(VAR14, VAR6);
    }
    else
    {
        VAR14 = FUN13(VAR2, VAR6);
    }
    VAR15 = FUN13(VAR2, VAR8);
    VAR13 = FUN6();
    if (VAR5)
    {
        FUN14(VAR4, VAR13, VAR15, VAR14);
    }
    else
    {
        FUN15(VAR4, VAR13, VAR15, VAR14);
    }
    FUN9(VAR13);
    if (VAR7 < 0x0e)
    {
        FUN11(VAR12);
    }
}