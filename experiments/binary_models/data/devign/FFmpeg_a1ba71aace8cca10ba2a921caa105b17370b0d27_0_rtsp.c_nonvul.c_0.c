static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR3 *VAR11;
    fd_set VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20 = 0;
    struct timeval VAR21;
    for (;;)
    {
        if (FUN2())
            return FUN3(VAR22);
        FUN4(&VAR12);
        if (VAR9->VAR23)
        {
            VAR19 = VAR15 = FUN5(VAR9->VAR23);
            FUN6(VAR19, &VAR12);
        }
        else
        {
            VAR15 = 0;
            VAR19 = -1;
        }
        for (VAR17 = 0; VAR17 < VAR9->VAR24; VAR17++)
        {
            VAR11 = VAR9->VAR25[VAR17];
            if (VAR11->VAR26)
            {
                VAR13 = FUN5(VAR11->VAR26);
                VAR14 = FUN7(VAR11->VAR26);
                if (FUN8(VAR13, VAR14) > VAR15)
                    VAR15 = FUN8(VAR13, VAR14);
                FUN6(VAR13, &VAR12);
                FUN6(VAR14, &VAR12);
            }
        }
        VAR21.VAR27 = 0;
        VAR21.VAR28 = VAR29 * 1000;
        VAR16 = FUN9(VAR15 + 1, &VAR12, NULL, NULL, &VAR21);
        if (VAR16 > 0)
        {
            VAR20 = 0;
            for (VAR17 = 0; VAR17 < VAR9->VAR24; VAR17++)
            {
                VAR11 = VAR9->VAR25[VAR17];
                if (VAR11->VAR26)
                {
                    VAR13 = FUN5(VAR11->VAR26);
                    VAR14 = FUN7(VAR11->VAR26);
                    if (FUN10(VAR14, &VAR12) || FUN10(VAR13, &VAR12))
                    {
                        VAR18 = FUN11(VAR11->VAR26, VAR6, VAR7);
                        if (VAR18 > 0)
                        {
                            *VAR4 = VAR11;
                            return VAR18;
                        }
                    }
                }
            }
            if (VAR19 != -1 && FUN10(VAR19, &VAR12))
            {
                RTSPMessageHeader VAR30;
                VAR18 = FUN12(VAR2, &VAR30, NULL, 0);
                if (VAR18 < 0)
                    return VAR18;
                if (VAR9->VAR31 != VAR32)
                    return 0;
            }
        }
        else if (VAR16 == 0 && ++VAR20 >= VAR33)
        {
            return FUN13(VAR34);
        }
        else if (VAR16 < 0 && VAR35 != VAR22)
            return FUN3(VAR35);
    }
}