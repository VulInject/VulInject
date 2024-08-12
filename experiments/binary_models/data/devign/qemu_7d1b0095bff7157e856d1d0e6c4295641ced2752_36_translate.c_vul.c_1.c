static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint32_t VAR6;
    TCGv VAR7, VAR8;
    if (FUN2(VAR2, VAR9))
        return 1;
    if ((VAR5 & (1 << 25)) == 0)
    {
        if (VAR5 & (1 << 20))
        {
            return 1;
        }
        return 0;
    }
    if ((VAR5 & (1 << 4)) == 0)
    {
        return 1;
    }
    if (FUN3(VAR4) && !FUN4(VAR5))
    {
        return 1;
    }
    if ((VAR5 & 0x0fff0fff) == 0x0e070f90)
    {
        if (!FUN2(VAR2, VAR10))
        {
            FUN5(VAR4->VAR11);
            VAR4->VAR12 = VAR13;
        }
        return 0;
    }
    if ((VAR5 & 0x0fff0fff) == 0x0e070f58)
    {
        if (!FUN2(VAR2, VAR14))
        {
            FUN5(VAR4->VAR11);
            VAR4->VAR12 = VAR13;
            return 0;
        }
    }
    VAR6 = (VAR5 >> 12) & 0xf;
    if (FUN6(VAR2, VAR4, VAR5, VAR6))
        return 0;
    VAR8 = FUN7(VAR5);
    if (VAR5 & VAR15)
    {
        VAR7 = FUN8();
        FUN9(VAR7, VAR16, VAR8);
        if (VAR6 != 15)
            FUN10(VAR4, VAR6, VAR7);
        else
            FUN11(VAR7);
    }
    else
    {
        VAR7 = FUN12(VAR4, VAR6);
        FUN13(VAR16, VAR8, VAR7);
        FUN11(VAR7);
        if (!FUN2(VAR2, VAR17) || (VAR5 & 0x0fff0fff) != 0x0e010f10)
            FUN14(VAR4);
    }
    FUN15(VAR8);
    return 0;
}