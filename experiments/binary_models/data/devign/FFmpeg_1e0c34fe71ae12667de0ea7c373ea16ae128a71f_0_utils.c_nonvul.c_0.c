void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        VAR6 *VAR7 = VAR2->VAR8[VAR3];
        if (VAR7->VAR9->VAR10 != VAR11)
            continue;
        if (FUN2(VAR7->VAR9) && VAR7->VAR12->VAR13 > 15 && VAR7->VAR12->VAR14 > FUN3(1, VAR7->VAR15.VAR16 / (500LL * VAR7->VAR15.VAR17)) && !VAR7->VAR18.VAR17)
            FUN4(&VAR7->VAR18.VAR17, &VAR7->VAR18.VAR16, VAR7->VAR15.VAR16, VAR7->VAR15.VAR17 * VAR7->VAR12->VAR14, VAR19);
        if (VAR7->VAR12->VAR13 > 1 && !VAR7->VAR18.VAR17 && FUN2(VAR7->VAR9))
        {
            int VAR17 = 0;
            double VAR20 = 0.01;
            AVRational VAR21 = VAR7->VAR18.VAR17 ? VAR7->VAR18 : FUN5(VAR7->VAR15);
            for (VAR4 = 0; VAR4 < VAR22; VAR4++)
            {
                int VAR23;
                if (VAR7->VAR12->VAR24 && VAR7->VAR12->VAR24 * FUN6(VAR7->VAR15) < (1001 * 12.0) / FUN7(VAR4))
                    continue;
                if (!VAR7->VAR12->VAR24 && FUN7(VAR4) < 1001 * 12)
                    continue;
                if (FUN6(VAR7->VAR15) * VAR7->VAR12->VAR25 / VAR7->VAR12->VAR13 < (1001 * 12.0 * 0.8) / FUN7(VAR4))
                    continue;
                for (VAR23 = 0; VAR23 < 2; VAR23++)
                {
                    int VAR26 = VAR7->VAR12->VAR13;
                    double VAR27 = VAR7->VAR12->VAR28[VAR23][0][VAR4] / VAR26;
                    double VAR29 = VAR7->VAR12->VAR28[VAR23][1][VAR4] / VAR26 - VAR27 * VAR27;
                    if (VAR29 < VAR20 && VAR20 > 0.000000001)
                    {
                        VAR20 = VAR29;
                        VAR17 = FUN7(VAR4);
                    }
                    if (VAR29 < 0.02)
                        FUN8(VAR2, VAR30, "", FUN7(VAR4) / 12.0 / 1001, VAR29);
                }
            }
            if (VAR17 && (!VAR21.VAR17 || (double)VAR17 / (12 * 1001) < 1.01 * FUN6(VAR21)))
                FUN4(&VAR7->VAR18.VAR17, &VAR7->VAR18.VAR16, VAR17, 12 * 1001, VAR19);
        }
        if (!VAR7->VAR31.VAR17 && VAR7->VAR18.VAR17 && VAR7->VAR12->VAR25 && VAR7->VAR12->VAR24 <= 0 && VAR7->VAR12->VAR13 > 2 && FUN9(1.0 / (FUN6(VAR7->VAR18) * FUN6(VAR7->VAR15)) - VAR7->VAR12->VAR25 / (double)VAR7->VAR12->VAR13) <= 1.0)
        {
            FUN8(VAR2, VAR30, "");
            VAR7->VAR31 = VAR7->VAR18;
        }
        FUN10(&VAR7->VAR12->VAR28);
        VAR7->VAR12->VAR32 = VAR33;
        VAR7->VAR12->VAR13 = 0;
        VAR7->VAR12->VAR25 = 0;
    }
}