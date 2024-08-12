int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7 = 0;
    VAR8 *VAR9, *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14 = 0, VAR15 = 1, VAR16, VAR17;
    VAR9 = FUN2(VAR2->VAR18.VAR19[0]);
    VAR10 = VAR9;
    VAR11 = VAR2->VAR18.VAR20[0];
    VAR13 = FUN2(sizeof(VAR12));
    VAR13->VAR3 = VAR3;
    VAR13->VAR21 = (VAR2->VAR22 < 2) ? 2 : VAR2->VAR22;
    VAR13->VAR23 = VAR2->VAR23;
    VAR13->VAR24 = VAR2->VAR25;
    VAR13->VAR26 = VAR2->VAR27;
    VAR13->VAR28 = VAR2->VAR29;
    VAR13->VAR30 = VAR2->VAR30;
    FUN3(VAR13, 0);
    FUN4(VAR13);
    if (VAR2->VAR22 <= 8)
        VAR17 = VAR4 + (8 - VAR2->VAR22);
    else
        VAR17 = VAR4 + (16 - VAR2->VAR22);
    if (VAR2->VAR31->VAR32 & VAR33)
    {
        FUN5(VAR2->VAR31, VAR34, "", VAR2->VAR16, VAR2->VAR35, VAR13->VAR3, VAR13->VAR23, VAR13->VAR24, VAR13->VAR26, VAR13->VAR28, VAR13->VAR30, VAR13->VAR36, VAR13->VAR37, VAR13->VAR38);
        FUN5(VAR2->VAR31, VAR34, "", VAR5, VAR4, VAR2->VAR22, VAR2->VAR39);
    }
    if (VAR5 == 0)
    {
        VAR15 = (VAR2->VAR40 > 1) ? 3 : 1;
        VAR14 = FUN6(VAR2->VAR39 - 1, 0, VAR15 - 1);
        VAR16 = VAR2->VAR16 * VAR15;
        VAR11 += VAR14;
        for (VAR6 = 0; VAR6 < VAR2->VAR35; VAR6++)
        {
            if (VAR2->VAR22 <= 8)
            {
                FUN7(VAR13, VAR2, VAR10, VAR11, VAR7, VAR16, VAR15, VAR14, 8);
                VAR7 = VAR10[0];
            }
            else
            {
                FUN7(VAR13, VAR2, VAR10, VAR11, VAR7, VAR16, VAR15, VAR14, 16);
                VAR7 = *((VAR41 *)VAR10);
            }
            VAR10 = VAR11;
            VAR11 += VAR2->VAR18.VAR19[0];
            if (VAR2->VAR42 && !--VAR2->VAR43)
            {
                FUN8(&VAR2->VAR44);
                FUN9(&VAR2->VAR44, 16);
            }
        }
    }
    else if (VAR5 == 1)
    {
        int VAR45;
        int VAR46[3] = {0, 0, 0};
        VAR15 = (VAR2->VAR40 > 1) ? 3 : 1;
        memset(VAR11, 0, VAR2->VAR18.VAR19[0]);
        VAR16 = VAR2->VAR16 * VAR15;
        for (VAR6 = 0; VAR6 < VAR2->VAR35; VAR6++)
        {
            for (VAR45 = 0; VAR45 < VAR15; VAR45++)
            {
                FUN7(VAR13, VAR2, VAR10 + VAR45, VAR11 + VAR45, VAR46[VAR45], VAR16, VAR15, VAR45, 8);
                VAR46[VAR45] = VAR10[VAR45];
                if (VAR2->VAR42 && !--VAR2->VAR43)
                {
                    FUN8(&VAR2->VAR44);
                    FUN9(&VAR2->VAR44, 16);
                }
            }
            VAR10 = VAR11;
            VAR11 += VAR2->VAR18.VAR19[0];
        }
    }
    else if (VAR5 == 2)
    {
        FUN5(VAR2->VAR31, VAR47, "");
        FUN10(VAR13);
        FUN10(VAR9);
        return -1;
    }
    if (VAR17)
    {
        int VAR48, VAR49;
        VAR49 = VAR2->VAR16 * VAR2->VAR40;
        if (VAR2->VAR22 <= 8)
        {
            VAR8 *VAR50 = VAR2->VAR18.VAR20[0];
            for (VAR6 = 0; VAR6 < VAR2->VAR35; VAR6++)
            {
                for (VAR48 = VAR14; VAR48 < VAR49; VAR48 += VAR15)
                {
                    VAR50[VAR48] <<= VAR17;
                }
                VAR50 += VAR2->VAR18.VAR19[0];
            }
        }
        else
        {
            VAR41 *VAR50 = (VAR41 *)VAR2->VAR18.VAR20[0];
            for (VAR6 = 0; VAR6 < VAR2->VAR35; VAR6++)
            {
                for (VAR48 = 0; VAR48 < VAR49; VAR48++)
                {
                    VAR50[VAR48] <<= VAR17;
                }
                VAR50 += VAR2->VAR18.VAR19[0] / 2;
            }
        }
    }
    FUN10(VAR13);
    FUN10(VAR9);
    return 0;
}