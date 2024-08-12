void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR4 | (VAR2->VAR5 & ~(VAR6 | VAR7));
    if (VAR2->VAR8 & 0x20)
    {
        return;
    }
    if (VAR2->VAR5 & (VAR6 | VAR7))
    {
        VAR3 |= 1 << 14;
    }
    if (VAR3 < (2 << VAR2->VAR9))
    {
        if (VAR2->VAR10 & VAR11)
        {
            FUN2("", VAR2->VAR12);
            VAR2->VAR12 = 0;
            FUN3(VAR2, VAR11);
        }
        return;
    }
    if (FUN4(VAR2))
    {
        unsigned int VAR13;
        for (VAR13 = 15; VAR13 > VAR2->VAR9; VAR13--)
        {
            if (VAR3 & (1 << VAR13))
            {
                int VAR14 = VAR2->VAR12;
                int VAR15 = VAR16 | VAR13;
                if (FUN5(VAR2->VAR17 > 0 && FUN6(VAR2)->VAR18 > VAR15 && ((FUN6(VAR2)->VAR18 & 0x1f0) == VAR16)))
                {
                    FUN2(""
                                   "",
                                   VAR2->VAR17, FUN6(VAR2)->VAR18, VAR15);
                }
                else if (VAR14 != VAR15)
                {
                    VAR2->VAR12 = VAR15;
                    FUN2("", VAR13, VAR14, VAR15);
                    FUN7(VAR2, VAR11);
                }
                break;
            }
        }
    }
    else if (VAR2->VAR10 & VAR11)
    {
        FUN2(""
                       "",
                       VAR3, VAR2->VAR4, VAR2->VAR5, VAR2->VAR12);
        VAR2->VAR12 = 0;
        FUN3(VAR2, VAR11);
    }
}