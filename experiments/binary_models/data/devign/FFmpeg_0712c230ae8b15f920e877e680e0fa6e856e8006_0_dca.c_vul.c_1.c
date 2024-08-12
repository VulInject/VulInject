static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11;
    int VAR12 = 0;
    int VAR13;
    int VAR14 = 0;
    VAR15 *VAR16 = VAR3;
    VAR17 *VAR18 = VAR2->VAR19;
    int VAR20;
    VAR18->VAR21 = FUN2(VAR8, VAR9, VAR18->VAR22, VAR23);
    if (VAR18->VAR21 == -1)
    {
        FUN3(VAR2, VAR24, "");
        return -1;
    }
    FUN4(&VAR18->VAR25, VAR18->VAR22, VAR18->VAR21 * 8);
    if (FUN5(VAR18) < 0)
    {
        *VAR4 = 0;
        return VAR9;
    }
    VAR2->VAR26 = VAR18->VAR26;
    VAR2->VAR27 = VAR18->VAR27;
    for (VAR13 = 0; VAR13 < (VAR18->VAR28 / 8); VAR13++)
    {
        FUN6(VAR18, 0, VAR13);
    }
    VAR12 = VAR18->VAR29;
    FUN7(&VAR18->VAR25, (-FUN8(&VAR18->VAR25)) & 31);
    while (FUN9(&VAR18->VAR25) >= 32)
    {
        uint32_t VAR30 = FUN10(&VAR18->VAR25, 32);
        switch (VAR30)
        {
        case 0x5a5a5a5a:
        {
            int VAR31 = VAR18->VAR29;
            int VAR32;
            FUN11(&VAR18->VAR25, 10);
            if ((VAR32 = FUN12(&VAR18->VAR25, 4)) != 1)
            {
                FUN3(VAR2, VAR24, ""
                                            "",
                       VAR32);
                continue;
            }
            FUN13(VAR18, VAR31);
            for (VAR13 = 0; VAR13 < (VAR18->VAR28 / 8); VAR13++)
            {
                FUN6(VAR18, VAR31, VAR13);
            }
            VAR14 = 1;
            break;
        }
        case 0x1d95f262:
            FUN3(VAR2, VAR33, "", FUN8(&VAR18->VAR25));
            FUN3(VAR2, VAR33, "", FUN12(&VAR18->VAR25, 12) + 1);
            FUN3(VAR2, VAR33, "", FUN12(&VAR18->VAR25, 4));
            break;
        }
        FUN7(&VAR18->VAR25, (-FUN8(&VAR18->VAR25)) & 31);
    }
    VAR20 = VAR18->VAR29 + !!VAR18->VAR34;
    if (VAR18->VAR35 < 16)
    {
        VAR2->VAR36 = VAR37[VAR18->VAR35];
        if (VAR14 && (!VAR2->VAR38 || VAR2->VAR38 > VAR12))
        {
            VAR2->VAR36 |= VAR39;
            if (VAR18->VAR34)
            {
                VAR2->VAR36 |= VAR40;
                VAR18->VAR41 = VAR42[VAR18->VAR35];
            }
            else
            {
                VAR18->VAR41 = VAR43[VAR18->VAR35];
            }
        }
        else
        {
            if (VAR18->VAR34)
            {
                VAR2->VAR36 |= VAR40;
                VAR18->VAR41 = VAR44[VAR18->VAR35];
            }
            else
                VAR18->VAR41 = VAR45[VAR18->VAR35];
        }
        if (VAR18->VAR29 > 0 && VAR18->VAR41[VAR18->VAR29 - 1] < 0)
            return -1;
        if (VAR2->VAR38 == 2 && VAR18->VAR29 > 2)
        {
            VAR20 = 2;
            VAR18->VAR46 = VAR47;
            VAR2->VAR36 = VAR48;
        }
    }
    else
    {
        FUN3(VAR2, VAR24, "", VAR18->VAR35);
        return -1;
    }
    if (!VAR2->VAR20)
        VAR2->VAR20 = VAR20;
    if (*VAR4 < (VAR18->VAR28 / 8) * 256 * sizeof(VAR15) * VAR20)
        return -1;
    *VAR4 = 256 / 8 * VAR18->VAR28 * sizeof(VAR15) * VAR20;
    for (VAR13 = 0; VAR13 < (VAR18->VAR28 / 8); VAR13++)
    {
        FUN14(VAR18, VAR13);
        VAR18->VAR49.FUN15(VAR16, VAR18->VAR50, 256, VAR20);
        VAR16 += 256 * VAR20;
    }
    VAR11 = 2 * VAR18->VAR34 * (VAR18->VAR28 / 8);
    for (VAR13 = 0; VAR13 < 2 * VAR18->VAR34 * 4; VAR13++)
    {
        VAR18->VAR51[VAR13] = VAR18->VAR51[VAR13 + VAR11];
    }
    return VAR9;
}