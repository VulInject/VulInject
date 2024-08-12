static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    TCGv_i64 VAR11, VAR12;
    if (FUN2(VAR3, 29, 1) || FUN2(VAR3, 11, 1))
    {
        FUN3(VAR2);
        return;
    }
    VAR4 = FUN2(VAR3, 31, 1);
    VAR5 = FUN2(VAR3, 30, 1);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 12, 4);
    VAR8 = FUN2(VAR3, 10, 1);
    VAR9 = FUN2(VAR3, 5, 5);
    VAR10 = FUN2(VAR3, 0, 5);
    if (VAR10 == 31)
    {
        return;
    }
    VAR11 = FUN4(VAR2, VAR10);
    if (VAR7 >= 0x0e)
    {
        VAR12 = FUN5(VAR2, VAR9, VAR4);
        FUN6(VAR11, VAR12);
    }
    else
    {
        VAR13 *VAR14 = FUN7();
        VAR13 *VAR15 = FUN7();
        FUN8(VAR7, VAR14);
        VAR12 = FUN4(VAR2, VAR6);
        if (VAR5 && VAR8)
        {
            FUN9(VAR11, VAR12);
        }
        else if (VAR5)
        {
            FUN10(VAR11, VAR12);
        }
        else if (VAR8)
        {
            FUN11(VAR11, VAR12, 1);
        }
        else
        {
            FUN6(VAR11, VAR12);
        }
        if (!VAR4)
        {
            FUN12(VAR11, VAR11);
        }
        FUN13(VAR15);
        FUN14(VAR14);
        VAR12 = FUN5(VAR2, VAR9, VAR4);
        FUN6(VAR11, VAR12);
        FUN14(VAR15);
    }
}