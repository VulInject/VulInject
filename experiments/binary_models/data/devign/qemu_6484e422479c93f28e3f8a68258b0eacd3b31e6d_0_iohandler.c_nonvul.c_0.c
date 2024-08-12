void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        int VAR7 = 0;
        if (VAR4->VAR8)
            continue;
        if (VAR4->VAR9)
        {
            VAR7 |= VAR10 | VAR11 | VAR12;
        }
        if (VAR4->VAR13)
        {
            VAR7 |= VAR14 | VAR12;
        }
        if (VAR7)
        {
            GPollFD VAR15 = {
                .VAR16 = VAR4->VAR16,
                .VAR7 = VAR7,
            };
            VAR4->VAR17 = VAR2->VAR18;
            FUN3(VAR2, VAR15);
        }
        else
        {
            VAR4->VAR17 = -1;
        }
    }
}