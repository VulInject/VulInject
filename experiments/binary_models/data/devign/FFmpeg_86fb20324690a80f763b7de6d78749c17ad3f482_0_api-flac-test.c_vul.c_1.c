static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    AVPacket VAR7;
    VAR8 *VAR9, *VAR10;
    VAR11 *VAR12 = NULL, *VAR13 = NULL;
    int VAR14 = 0, VAR15 = 0;
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18 = 0;
    int VAR19 = 0;
    VAR9 = FUN2();
    if (!VAR9)
    {
        FUN3(NULL, VAR20, "");
        return FUN4(VAR21);
    }
    VAR9->VAR22 = VAR5->VAR23;
    VAR9->VAR24 = VAR5->VAR25;
    VAR9->VAR26 = VAR5->VAR26;
    if (FUN5(VAR9, 32) != 0)
    {
        FUN3(NULL, VAR20, "");
        return FUN4(VAR21);
    }
    VAR10 = FUN2();
    if (!VAR10)
    {
        FUN3(NULL, VAR20, "");
        return FUN4(VAR21);
    }
    VAR12 = FUN6(VAR9->VAR27[0] * VAR28);
    if (!VAR12)
    {
        FUN3(NULL, VAR20, "");
        return FUN4(VAR21);
    }
    VAR13 = FUN6(VAR9->VAR27[0] * VAR28);
    if (!VAR13)
    {
        FUN3(NULL, VAR20, "");
        return FUN4(VAR21);
    }
    for (VAR19 = 0; VAR19 < VAR28; VAR19++)
    {
        FUN7(&VAR7);
        VAR7.VAR29 = NULL;
        VAR7.VAR30 = 0;
        FUN8((VAR31 *)(VAR9->VAR29[0]), VAR19, VAR5->VAR32, VAR5->VAR33, VAR5->VAR23);
        memcpy(VAR12 + VAR14, VAR9->VAR29[0], VAR9->VAR27[0]);
        VAR14 += VAR9->VAR27[0];
        VAR17 = FUN9(VAR5, &VAR7, VAR9, &VAR18);
        if (VAR17 < 0)
        {
            FUN3(NULL, VAR20, "");
            return VAR17;
        }
        if (VAR18)
        {
            VAR17 = FUN10(VAR6, VAR10, &VAR18, &VAR7);
            if (VAR17 < 0)
            {
                FUN3(NULL, VAR20, "");
                return VAR17;
            }
            if (VAR18)
            {
                if (VAR17 != VAR7.VAR30)
                {
                    FUN3(NULL, VAR34, "");
                    return VAR35;
                }
                if (VAR9->VAR22 != VAR10->VAR22)
                {
                    FUN3(NULL, VAR20, "");
                    return VAR35;
                }
                if (VAR9->VAR26 != VAR10->VAR26)
                {
                    FUN3(NULL, VAR20, "");
                    return VAR35;
                }
                if (VAR9->VAR24 != VAR10->VAR24)
                {
                    FUN3(NULL, VAR20, "");
                    return VAR35;
                }
                memcpy(VAR13 + VAR15, VAR10->VAR29[0], VAR10->VAR27[0]);
                VAR15 += VAR10->VAR27[0];
            }
        }
        FUN11(&VAR7);
    }
    if (memcmp(VAR12, VAR13, VAR16 * VAR28) != 0)
    {
        FUN3(NULL, VAR20, "");
        return 1;
    }
    FUN3(NULL, VAR34, "");
    FUN12(&VAR12);
    FUN12(&VAR13);
    FUN13(&VAR9);
    FUN13(&VAR10);
    return 0;
}