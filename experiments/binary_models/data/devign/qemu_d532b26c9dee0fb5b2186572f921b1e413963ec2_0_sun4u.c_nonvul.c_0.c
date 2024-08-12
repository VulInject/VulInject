void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR4 | (VAR2->VAR5 & ~(VAR6 | VAR7));
    if (VAR2->VAR5 & (VAR6 | VAR7))
    {
        VAR3 |= 1 << 14;
    }
    if (!VAR3)
    {
        if (VAR2->VAR8 & VAR9)
        {
            FUN2("", VAR2->VAR10);
            VAR2->VAR10 = 0;
            FUN3(VAR2, VAR9);
        }
        return;
    }
    if (FUN4(VAR2))
    {
        unsigned int VAR11;
        for (VAR11 = 15; VAR11 > VAR2->VAR12; VAR11--)
        {
            if (VAR3 & (1 << VAR11))
            {
                int VAR13 = VAR2->VAR10;
                int VAR14 = VAR15 | VAR11;
                if (VAR2->VAR16 > 0 && FUN5(VAR2)->VAR17 > VAR14)
                {
                    FUN2(""
                                   "",
                                   VAR2->VAR16, FUN5(VAR2)->VAR17, VAR14);
                }
                else if (VAR13 != VAR14)
                {
                    VAR2->VAR10 = VAR14;
                    FUN2("", VAR11, VAR13, VAR14);
                    FUN6(VAR2, VAR9);
                }
                break;
            }
        }
    }
    else
    {
        FUN2(""
                       "",
                       VAR3, VAR2->VAR4, VAR2->VAR5, VAR2->VAR10);
    }
}