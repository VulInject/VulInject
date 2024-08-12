static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    uint32_t VAR6 = 0;
    int VAR7;
    VAR5 = FUN2(VAR3);
    VAR3->VAR8 &= ~VAR9;
    if (!(VAR3->VAR10 & VAR11) || !(VAR3->VAR10 & VAR12))
    {
        FUN3("");
        return 0;
    }
    VAR7 = VAR3->VAR13;
    if (VAR3->VAR10 & VAR14)
    {
        VAR7 %= VAR15;
        if (VAR7 == 0)
        {
            if (VAR3->VAR13 != 0)
                if (!FUN4(VAR3, VAR5))
                {
                    FUN3("", FUN5(VAR5));
                    return 0;
                }
            if (FUN6(VAR5->VAR16, FUN5(VAR5), VAR3->VAR17, 1) < 0)
            {
                FUN3("", FUN5(VAR5));
                memset(VAR3->VAR17, 0, VAR15);
            }
        }
    }
    VAR6 = VAR3->VAR17[VAR7];
    if (++VAR3->VAR13 == VAR3->VAR18)
    {
        VAR3->VAR13 = 0;
        if (VAR3->VAR10 & VAR14)
        {
            FUN7(VAR3, 0x00, 0x00, 0x00);
        }
        else
        {
            FUN8(VAR3);
            FUN9(VAR3);
        }
    }
    FUN3("", VAR6);
    return VAR6;
}