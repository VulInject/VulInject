static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN2(VAR3, 10, 5);
    uint64_t VAR7 = FUN3(VAR3, 15, 7);
    int VAR8 = FUN2(VAR3, 23, 2);
    bool VAR9 = FUN2(VAR3, 26, 1);
    bool VAR10 = FUN2(VAR3, 22, 1);
    int VAR11 = FUN2(VAR3, 30, 2);
    bool VAR12 = false;
    bool VAR13 = false;
    bool VAR14 = false;
    TCGv_i64 VAR15;
    int VAR16;
    if (VAR11 == 3)
    {
        FUN4(VAR2);
        return;
    }
    if (VAR9)
    {
        VAR16 = 2 + VAR11;
    }
    else
    {
        VAR16 = 2 + FUN2(VAR11, 1, 1);
        VAR12 = FUN2(VAR11, 0, 1);
        if (!VAR10 && VAR12)
        {
            FUN4(VAR2);
            return;
        }
    }
    switch (VAR8)
    {
    case 1:
        VAR13 = true;
        VAR14 = true;
        break;
    case 0:
        if (VAR12)
        {
            FUN4(VAR2);
            return;
        }
        VAR13 = false;
        break;
    case 2:
        VAR13 = false;
        break;
    case 3:
        VAR13 = false;
        VAR14 = true;
        break;
    }
    if (VAR9 && !FUN5(VAR2))
    {
        return;
    }
    VAR7 <<= VAR16;
    if (VAR5 == 31)
    {
        FUN6(VAR2);
    }
    VAR15 = FUN7(VAR2, VAR5, 1);
    if (!VAR13)
    {
        FUN8(VAR15, VAR15, VAR7);
    }
    if (VAR9)
    {
        if (VAR10)
        {
            FUN9(VAR2, VAR4, VAR15, VAR16);
        }
        else
        {
            FUN10(VAR2, VAR4, VAR15, VAR16);
        }
    }
    else
    {
        TCGv_i64 VAR17 = FUN11(VAR2, VAR4);
        if (VAR10)
        {
            FUN12(VAR2, VAR17, VAR15, VAR16, VAR12, false);
        }
        else
        {
            FUN13(VAR2, VAR17, VAR15, VAR16);
        }
    }
    FUN8(VAR15, VAR15, 1 << VAR16);
    if (VAR9)
    {
        if (VAR10)
        {
            FUN9(VAR2, VAR6, VAR15, VAR16);
        }
        else
        {
            FUN10(VAR2, VAR6, VAR15, VAR16);
        }
    }
    else
    {
        TCGv_i64 VAR18 = FUN11(VAR2, VAR6);
        if (VAR10)
        {
            FUN12(VAR2, VAR18, VAR15, VAR16, VAR12, false);
        }
        else
        {
            FUN13(VAR2, VAR18, VAR15, VAR16);
        }
    }
    if (VAR14)
    {
        if (VAR13)
        {
            FUN8(VAR15, VAR15, VAR7 - (1 << VAR16));
        }
        else
        {
            FUN14(VAR15, VAR15, 1 << VAR16);
        }
        FUN15(FUN16(VAR2, VAR5), VAR15);
    }
}