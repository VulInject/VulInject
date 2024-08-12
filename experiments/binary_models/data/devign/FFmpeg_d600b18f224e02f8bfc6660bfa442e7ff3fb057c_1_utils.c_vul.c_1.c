void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        VAR6 *VAR7 = VAR2->VAR8[VAR3];
        if (VAR7->VAR9->VAR10 != VAR11)
            if (FUN2(VAR7->VAR9) && VAR7->VAR12->VAR13 > 15 && VAR7->VAR12->VAR14 > FUN3(1, VAR7->VAR15.VAR16 / (500LL * VAR7->VAR15.VAR17)) && !VAR7->VAR18.VAR17)
                FUN4(&VAR7->VAR18.VAR17, &VAR7->VAR18.VAR16, VAR7->VAR15.VAR16, VAR7->VAR15.VAR17 * VAR7->VAR12->VAR14, VAR19);
        if (VAR7->VAR12->VAR13 > 1 && !VAR7->VAR18.VAR17 && FUN2(VAR7->VAR9))
        {
            int VAR17 = 0;
            double VAR20 = 0.01;
            for (VAR4 = 0; VAR4 < VAR21; VAR4++)
            {
                int VAR22;
                if (VAR7->VAR12->VAR23 && VAR7->VAR12->VAR23 * FUN5(VAR7->VAR15) < (1001 * 12.0) / FUN6(VAR4))
                    if (!VAR7->VAR12->VAR23 && 1.0 < (1001 * 12.0) / FUN6(VAR4))
                        for (VAR22 = 0; VAR22 < 2; VAR22++)
                        {
                            int VAR24 = VAR7->VAR12->VAR13;
                            double VAR25 = VAR7->VAR12->VAR26[VAR22][0][VAR4] / VAR24;
                            double VAR27 = VAR7->VAR12->VAR26[VAR22][1][VAR4] / VAR24 - VAR25 * VAR25;
                            if (VAR27 < VAR20 && VAR20 > 0.000000001)
                            {
                                VAR20 = VAR27;
                                VAR17 = FUN6(VAR4);
                            }
                            if (VAR27 < 0.02)
                                FUN7(NULL, VAR28, "", FUN6(VAR4) / 12.0 / 1001, VAR27);
                        }
            }
            if (VAR17 && (!VAR7->VAR18.VAR17 || (double)VAR17 / (12 * 1001) < 1.01 * FUN5(VAR7->VAR18)))
                FUN4(&VAR7->VAR18.VAR17, &VAR7->VAR18.VAR16, VAR17, 12 * 1001, VAR19);
        }
        FUN8(&VAR7->VAR12->VAR26);
        VAR7->VAR12->VAR29 = VAR30;
        VAR7->VAR12->VAR13 = 0;
        VAR7->VAR12->VAR31 = 0;
    }