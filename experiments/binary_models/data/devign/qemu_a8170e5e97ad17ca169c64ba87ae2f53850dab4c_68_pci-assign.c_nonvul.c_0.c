static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, int VAR5, VAR1 *VAR6)
{
    uint64_t VAR7 = 0;
    int VAR8 = VAR3->VAR9->VAR10;
    if (VAR8 >= 0)
    {
        if (VAR6)
        {
            FUN2("" VAR11 "" VAR12 "" VAR12 "", *VAR6, VAR5, VAR4, VAR4);
            if (FUN3(VAR8, VAR6, VAR5, VAR4) != VAR5)
            {
                FUN4("", VAR13, strerror(VAR14));
            }
        }
        else
        {
            if (pread(VAR8, &VAR7, VAR5, VAR4) != VAR5)
            {
                FUN4("", VAR13, strerror(VAR14));
                VAR7 = (1UL << (VAR5 * 8)) - 1;
            }
            FUN2("" VAR11 "" VAR12 "" VAR12 "", VAR7, VAR5, VAR4, VAR4);
        }
    }
    else
    {
        uint32_t VAR15 = VAR4 + VAR3->VAR16.VAR17;
        if (VAR6)
        {
            FUN2("" VAR11 "" VAR12 "", *VAR6, VAR5, VAR4, VAR15);
            switch (VAR5)
            {
            case 1:
                FUN5(*VAR6, VAR15);
                break;
            case 2:
                FUN6(*VAR6, VAR15);
                break;
            case 4:
                FUN7(*VAR6, VAR15);
                break;
            }
        }
        else
        {
            switch (VAR5)
            {
            case 1:
                VAR7 = FUN8(VAR15);
                break;
            case 2:
                VAR7 = FUN9(VAR15);
                break;
            case 4:
                VAR7 = FUN10(VAR15);
                break;
            }
            FUN2("" VAR11 "" VAR12 "", VAR7, VAR5, VAR4, VAR15);
        }
    }
    return VAR7;
}