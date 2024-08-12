static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR3 *VAR11;
    fd_set VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    struct timeval VAR19;
    for (;;)
    {
        if (FUN2())
            return FUN3(VAR20);
        FUN4(&VAR12);
        VAR18 = VAR14 = FUN5(VAR9->VAR21);
        FUN6(VAR18, &VAR12);
        for (VAR16 = 0; VAR16 < VAR9->VAR22; VAR16++)
        {
            VAR11 = VAR9->VAR23[VAR16];
            if (VAR11->VAR24)
            {
                VAR13 = FUN5(VAR11->VAR24);
                if (VAR13 > VAR14)
                    VAR14 = VAR13;
                FUN6(VAR13, &VAR12);
            }
        }
        VAR19.VAR25 = 0;
        VAR19.VAR26 = 100 * 1000;
        VAR15 = FUN7(VAR14 + 1, &VAR12, NULL, NULL, &VAR19);
        if (VAR15 > 0)
        {
            for (VAR16 = 0; VAR16 < VAR9->VAR22; VAR16++)
            {
                VAR11 = VAR9->VAR23[VAR16];
                if (VAR11->VAR24)
                {
                    VAR13 = FUN5(VAR11->VAR24);
                    if (FUN8(VAR13, &VAR12))
                    {
                        VAR17 = FUN9(VAR11->VAR24, VAR6, VAR7);
                        if (VAR17 > 0)
                        {
                            *VAR4 = VAR11;
                            return VAR17;
                        }
                    }
                }
            }
            if (FUN8(VAR18, &VAR12))
            {
                RTSPMessageHeader VAR27;
                FUN10(VAR2, &VAR27, NULL, 0);
            }
        }
    }
}