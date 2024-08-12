static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR5 *VAR10 = VAR6, *VAR11 = VAR6, *VAR12;
    int VAR13, VAR14;
    for (VAR13 = 0; VAR13 < VAR15; VAR13++)
    {
        VAR12 = VAR8->VAR16[VAR13];
        if (!VAR12)
            continue;
        if (VAR12->VAR17 && (!VAR10 || VAR12->VAR18 < VAR10->VAR18))
            VAR10 = VAR12;
        if (VAR12->VAR19 && (!VAR11 || VAR12->VAR20 < VAR11->VAR20))
            VAR11 = VAR12;
    }
    if (!VAR10 && !VAR11)
        return VAR21;
    if (!VAR11 || (VAR10 && VAR10->VAR18 < VAR11->VAR18))
        VAR12 = VAR10;
    else
        VAR12 = VAR11;
    if (VAR12->VAR17 && VAR12->VAR19 && VAR10 == VAR11)
    {
        FUN2(VAR2, VAR22, ""
                                  "" VAR23 "" VAR23 "",
               VAR12->VAR18, VAR12->VAR20);
        FUN3(VAR4, VAR12->VAR24);
        VAR12->VAR17 = VAR12->VAR19 = 0;
    }
    else if (VAR12->VAR17)
    {
        if (VAR12->VAR19)
        {
            FUN2(VAR2, VAR22, "" VAR23 ""
                                      "" VAR23 "",
                   VAR12->VAR18, VAR12->VAR20);
        }
        else
        {
            FUN2(VAR2, VAR22, ""
                                      "" VAR23 "" VAR23 "",
                   VAR12->VAR18, VAR12->VAR20);
        }
        FUN3(VAR4, VAR12->VAR24);
        VAR4->VAR20 = VAR4->VAR25;
        VAR12->VAR17 = 0;
    }
    else
    {
        PutBitContext VAR26;
        FUN4(!VAR12->VAR17 && VAR12->VAR19);
        if (VAR12->VAR27 == 0)
        {
            FUN2(VAR2, VAR28, ""
                                      "");
            VAR12->VAR19 = 0;
            return VAR29;
        }
        VAR13 = FUN5(VAR12->VAR27);
        FUN4(VAR13 < VAR15);
        FUN2(VAR2, VAR22, "" VAR23 ""
                                  "" VAR23 "",
               VAR12->VAR18, VAR12->VAR20, VAR13);
        VAR12->VAR24 = FUN6();
        if (!VAR12->VAR24)
            return FUN7(VAR30);
        VAR14 = FUN8(VAR4, 2);
        if (VAR14 < 0)
            return VAR14;
        FUN9(&VAR26, VAR4->VAR31, 2);
        FUN10(&VAR26, 2, 2);
        FUN10(&VAR26, 1, VAR12->VAR32 & 1);
        FUN10(&VAR26, 1, (VAR12->VAR32 >> 1) & 1);
        if (VAR12->VAR32 == 3)
        {
            FUN10(&VAR26, 1, 0);
        }
        FUN10(&VAR26, 1, 1);
        FUN10(&VAR26, 3, VAR13);
        while (FUN11(&VAR26) < 16)
            FUN10(&VAR26, 1, 0);
        FUN12(&VAR26);
        VAR4->VAR20 = VAR4->VAR25 = VAR12->VAR20;
        VAR12->VAR19 = 0;
    }
    return 0;
}