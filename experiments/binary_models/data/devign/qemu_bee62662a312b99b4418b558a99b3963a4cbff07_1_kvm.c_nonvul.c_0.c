static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8 = 0;
    unsigned int VAR9;
    if (VAR6->VAR10 & (1 << VAR11))
    {
        VAR7 = FUN3(VAR2, VAR12, &VAR6->VAR13.VAR14);
        if (VAR7 < 0)
        {
            FUN4("", VAR15, VAR7);
            VAR8 = VAR7;
        }
        VAR7 = FUN3(VAR2, VAR16, &VAR6->VAR13.VAR17);
        if (VAR7 < 0)
        {
            FUN4("", VAR15, VAR7);
            VAR8 = VAR7;
        }
        else
        {
            FUN5(VAR6);
        }
        if (!(VAR6->VAR18 & (1 << VAR19)))
        {
            for (VAR9 = 0; VAR9 < 32; ++VAR9)
            {
                if (VAR6->VAR20 & (1 << VAR21))
                {
                    VAR7 = FUN6(VAR2, FUN7(VAR9), &VAR6->VAR13.VAR22[VAR9].VAR23);
                }
                else
                {
                    VAR7 = FUN3(VAR2, FUN8(VAR9), &VAR6->VAR13.VAR22[VAR9].VAR24[VAR25]);
                }
                if (VAR7 < 0)
                {
                    FUN4("", VAR15, VAR9, VAR7);
                    VAR8 = VAR7;
                }
            }
        }
    }
    if (VAR6->VAR18 & (1 << VAR19))
    {
        VAR7 = FUN9(VAR2, VAR26, &VAR6->VAR27);
        if (VAR7 < 0)
        {
            FUN4("", VAR15, VAR7);
            VAR8 = VAR7;
        }
        VAR7 = FUN9(VAR2, VAR28, &VAR6->VAR29.VAR30);
        if (VAR7 < 0)
        {
            FUN4("", VAR15, VAR7);
            VAR8 = VAR7;
        }
        else
        {
            FUN10(VAR6);
        }
        for (VAR9 = 0; VAR9 < 32; ++VAR9)
        {
            VAR7 = FUN11(VAR2, FUN12(VAR9), VAR6->VAR13.VAR22[VAR9].VAR31.VAR23);
            if (VAR7 < 0)
            {
                FUN4("", VAR15, VAR9, VAR7);
                VAR8 = VAR7;
            }
        }
    }
    return VAR8;
}