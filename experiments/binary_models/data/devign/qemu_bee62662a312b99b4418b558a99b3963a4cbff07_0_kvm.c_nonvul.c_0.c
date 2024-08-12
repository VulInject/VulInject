static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = &VAR5->VAR7;
    int VAR8, VAR9 = 0;
    unsigned int VAR10;
    if (VAR7->VAR11 & (1 << VAR12))
    {
        if (VAR3 == VAR13)
        {
            VAR8 = FUN3(VAR2, VAR14, &VAR7->VAR15.VAR16);
            if (VAR8 < 0)
            {
                FUN4("", VAR17, VAR8);
                VAR9 = VAR8;
            }
        }
        VAR8 = FUN3(VAR2, VAR18, &VAR7->VAR15.VAR19);
        if (VAR8 < 0)
        {
            FUN4("", VAR17, VAR8);
            VAR9 = VAR8;
        }
        if (!(VAR7->VAR20 & (1 << VAR21)))
        {
            for (VAR10 = 0; VAR10 < 32; ++VAR10)
            {
                if (VAR7->VAR22 & (1 << VAR23))
                {
                    VAR8 = FUN5(VAR2, FUN6(VAR10), &VAR7->VAR15.VAR24[VAR10].VAR25);
                }
                else
                {
                    VAR8 = FUN7(VAR2, FUN8(VAR10), &VAR7->VAR15.VAR24[VAR10].VAR26[VAR27]);
                }
                if (VAR8 < 0)
                {
                    FUN4("", VAR17, VAR10, VAR8);
                    VAR9 = VAR8;
                }
            }
        }
    }
    if (VAR7->VAR20 & (1 << VAR21))
    {
        if (VAR3 == VAR13)
        {
            VAR8 = FUN9(VAR2, VAR28, &VAR7->VAR29);
            if (VAR8 < 0)
            {
                FUN4("", VAR17, VAR8);
                VAR9 = VAR8;
            }
        }
        VAR8 = FUN9(VAR2, VAR30, &VAR7->VAR31.VAR32);
        if (VAR8 < 0)
        {
            FUN4("", VAR17, VAR8);
            VAR9 = VAR8;
        }
        for (VAR10 = 0; VAR10 < 32; ++VAR10)
        {
            VAR8 = FUN10(VAR2, FUN11(VAR10), VAR7->VAR15.VAR24[VAR10].VAR33.VAR25);
            if (VAR8 < 0)
            {
                FUN4("", VAR17, VAR10, VAR8);
                VAR9 = VAR8;
            }
        }
    }
    return VAR9;
}