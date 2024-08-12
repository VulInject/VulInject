static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN2(VAR3, 10, 5);
    int VAR7 = FUN2(VAR3, 15, 1);
    int VAR8 = FUN2(VAR3, 16, 5);
    int VAR9 = FUN2(VAR3, 21, 1);
    int VAR10 = !FUN2(VAR3, 22, 1);
    int VAR11 = !FUN2(VAR3, 23, 1);
    int VAR12 = FUN2(VAR3, 30, 2);
    TCGv_i64 VAR13;
    if ((!VAR11 && !VAR9 && !VAR7) || (!VAR11 && VAR9) || (VAR9 && VAR12 < 2))
    {
        FUN3(VAR2);
        return;
    }
    if (VAR5 == 31)
    {
        FUN4(VAR2);
    }
    VAR13 = FUN5(VAR2, VAR5, 1);
    if (VAR11)
    {
        if (!VAR10)
        {
            VAR2->VAR14 = true;
            FUN6(VAR2, VAR4, VAR6, VAR13, VAR12, VAR9);
        }
        else
        {
            FUN7(VAR2, VAR8, VAR4, VAR6, VAR13, VAR12, VAR9);
        }
    }
    else
    {
        TCGv_i64 VAR15 = FUN8(VAR2, VAR4);
        if (VAR10)
        {
            FUN9(VAR2, VAR15, VAR13, VAR12);
        }
        else
        {
            FUN10(VAR2, VAR15, VAR13, VAR12, false, false);
        }
    }
}