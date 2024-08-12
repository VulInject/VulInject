static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    bool VAR6, VAR7;
    int VAR8;
    VAR5 = &VAR2->VAR5[VAR3];
    VAR6 = VAR5->VAR9;
    if ((VAR5->VAR10 & VAR11) && !VAR5->VAR12)
    {
        FUN2("", VAR13, VAR3);
        VAR6 = false;
    }
    VAR7 = !!(VAR5->VAR10 & VAR14);
    if (!VAR6 && !VAR7)
    {
        FUN2("", VAR13, VAR3);
        return;
    }
    if (VAR6)
    {
        VAR5->VAR10 |= VAR14;
    }
    else
    {
        VAR5->VAR10 &= ~VAR14;
    }
    if (VAR5->VAR15 == 0)
    {
        FUN2("", VAR13, VAR3);
        return;
    }
    if (VAR5->VAR15 == (1 << VAR5->VAR16))
    {
        FUN3(VAR2, VAR5->VAR16, VAR3, VAR6, VAR7);
    }
    else if (!(VAR5->VAR10 & VAR17))
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR18; VAR8++)
        {
            if (VAR5->VAR15 & (1 << VAR8))
            {
                FUN3(VAR2, VAR8, VAR3, VAR6, VAR7);
            }
        }
    }
    else
    {
        for (VAR8 = VAR5->VAR16 + 1; VAR8 != VAR5->VAR16; VAR8++)
        {
            if (VAR8 == VAR2->VAR18)
            {
                VAR8 = 0;
            }
            if (VAR5->VAR15 & (1 << VAR8))
            {
                FUN3(VAR2, VAR8, VAR3, VAR6, VAR7);
                VAR5->VAR16 = VAR8;
                break;
            }
        }
    }
}