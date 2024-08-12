static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    AVBPrint VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2(VAR2, NULL);
    if (!VAR8)
    {
        return FUN3(VAR9);
    }
    FUN4(VAR8, 64, 1, 1000);
    VAR4->VAR10 = 0;
    VAR8->VAR11->VAR12 = VAR13;
    VAR8->VAR11->VAR14 = VAR15;
    FUN5(&VAR6, 0, VAR16);
    while (!FUN6(VAR2->VAR17))
    {
        int64_t VAR18 = FUN7(&VAR6, VAR2->VAR17);
        int64_t VAR19 = FUN8(VAR6.VAR20);
        if (VAR19 >= 0)
        {
            char *VAR21 = strchr(VAR6.VAR20, '');
            if (VAR21)
            {
                char *VAR22 = strchr(VAR6.VAR20, '');
                if (!VAR22)
                {
                    continue;
                }
                *VAR22 = *VAR21 = '';
                if (strcmp(VAR6.VAR20 + 1, "") || sscanf(VAR21 + 1, "" VAR23, &VAR4->VAR10) != 1)
                {
                    FUN9(&VAR2->VAR24, VAR6.VAR20 + 1, VAR21 + 1, 0);
                }
                *VAR21 = '';
                *VAR22 = '';
            }
        }
        else
        {
            VAR25 *VAR26;
            int64_t VAR27 = VAR28;
            int64_t VAR29 = 0;
            int64_t VAR30 = 0;
            int64_t VAR31 = FUN10(VAR6.VAR20);
            while ((VAR30 = FUN11(VAR6.VAR20 + VAR29, &VAR27)) != 0)
            {
                VAR29 += VAR30;
                VAR26 = FUN12(&VAR4->VAR32, VAR6.VAR20 + VAR31, VAR6.VAR33 - VAR31, 0);
                if (!VAR26)
                {
                    return FUN3(VAR9);
                }
                VAR26->VAR18 = VAR18;
                VAR26->VAR34 = VAR27 - VAR4->VAR10;
                VAR26->VAR35 = -1;
            }
        }
    }
    FUN13(VAR2, &VAR4->VAR32);
    FUN14(VAR2, NULL, VAR36);
    return 0;