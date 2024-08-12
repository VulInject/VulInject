static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    FUN2(&VAR8->VAR27, VAR6->VAR3, VAR6->VAR28);
    if (FUN3(&VAR8->VAR27) < 11)
        return VAR29;
    if (FUN4(&VAR8->VAR27) != 0x1234)
        return VAR29;
    VAR8->VAR30 = FUN4(&VAR8->VAR27);
    VAR8->VAR31 = FUN4(&VAR8->VAR27);
    FUN5(&VAR8->VAR27, 4);
    VAR24 = FUN6(&VAR8->VAR27);
    VAR14 = VAR24 & 0xF;
    VAR8->VAR32 = (VAR24 >> 4) + 1;
    VAR15 = VAR14 * VAR8->VAR32;
    if (VAR14 > 8 || VAR15 < 1 || VAR15 > 32)
    {
        FUN7(VAR2, "");
        return VAR33;
    }
    if (FUN8(&VAR8->VAR27) == 0xFF || VAR15 == 1 || VAR15 == 4 || VAR15 == 8)
    {
        FUN5(&VAR8->VAR27, 2);
        VAR16 = FUN9(&VAR8->VAR27);
        VAR17 = FUN9(&VAR8->VAR27);
        if (FUN3(&VAR8->VAR27) < VAR17)
            return VAR29;
    }
    else
    {
        VAR16 = -1;
        VAR17 = 0;
    }
    VAR2->VAR34 = VAR35;
    if (VAR8->VAR30 != VAR2->VAR30 && VAR8->VAR31 != VAR2->VAR31)
    {
        if (FUN10(VAR8->VAR30, VAR8->VAR31, 0, VAR2) < 0)
            return -1;
        FUN11(VAR2, VAR8->VAR30, VAR8->VAR31);
    }
    if ((VAR25 = FUN12(VAR2, VAR11, 0)) < 0)
        return VAR25;
    memset(VAR11->VAR3[0], 0, VAR8->VAR31 * VAR11->VAR36[0]);
    VAR11->VAR37 = VAR38;
    VAR11->VAR39 = 1;
    VAR19 = FUN13(&VAR8->VAR27) + VAR17;
    VAR13 = (VAR12 *)VAR11->VAR3[1];
    if (VAR16 == 1 && VAR17 > 1 && FUN8(&VAR8->VAR27) < 6)
    {
        int VAR40 = FUN14(&VAR8->VAR27);
        VAR18 = 4;
        for (VAR20 = 0; VAR20 < VAR18; VAR20++)
            VAR13[VAR20] = VAR41[VAR42[VAR40][VAR20]];
    }
    else if (VAR16 == 2)
    {
        VAR18 = FUN15(VAR17, 16);
        for (VAR20 = 0; VAR20 < VAR18; VAR20++)
        {
            int VAR43 = FUN14(&VAR8->VAR27);
            VAR13[VAR20] = VAR41[FUN15(VAR43, 15)];
        }
    }
    else if (VAR16 == 3)
    {
        VAR18 = FUN15(VAR17, 16);
        for (VAR20 = 0; VAR20 < VAR18; VAR20++)
        {
            int VAR43 = FUN14(&VAR8->VAR27);
            VAR13[VAR20] = VAR44[FUN15(VAR43, 63)];
        }
    }
    else if (VAR16 == 4 || VAR16 == 5)
    {
        VAR18 = FUN15(VAR17 / 3, 256);
        for (VAR20 = 0; VAR20 < VAR18; VAR20++)
        {
            VAR13[VAR20] = FUN16(&VAR8->VAR27) << 2;
            VAR13[VAR20] |= 0xFFU << 24 | VAR13[VAR20] >> 6 & 0x30303;
        }
    }
    else
    {
        if (VAR15 == 1)
        {
            VAR18 = 2;
            VAR13[0] = 0xFF000000;
            VAR13[1] = 0xFFFFFFFF;
        }
        else if (VAR15 == 2)
        {
            VAR18 = 4;
            for (VAR20 = 0; VAR20 < VAR18; VAR20++)
                VAR13[VAR20] = VAR41[VAR42[0][VAR20]];
        }
        else
        {
            VAR18 = 16;
            memcpy(VAR13, VAR41, VAR18 * 4);
        }
    }
    memset(VAR13 + VAR18, 0, VAR45 - VAR18 * 4);
    FUN17(&VAR8->VAR27, VAR19, VAR46);
    VAR26 = 0;
    VAR22 = VAR8->VAR31 - 1;
    if (FUN9(&VAR8->VAR27))
    {
        VAR21 = 0;
        VAR23 = 0;
        while (VAR22 >= 0 && FUN3(&VAR8->VAR27) >= 6)
        {
            int VAR47, VAR48, VAR49, VAR50;
            VAR49 = FUN3(&VAR8->VAR27);
            VAR50 = FUN9(&VAR8->VAR27);
            VAR47 = VAR49 - FUN15(VAR49, VAR50);
            FUN5(&VAR8->VAR27, 2);
            VAR48 = FUN14(&VAR8->VAR27);
            while (VAR23 < VAR8->VAR32 && VAR22 >= 0 && FUN3(&VAR8->VAR27) > VAR47)
            {
                int VAR51 = 1;
                VAR26 = FUN14(&VAR8->VAR27);
                if (VAR26 == VAR48)
                {
                    VAR51 = FUN14(&VAR8->VAR27);
                    if (VAR51 == 0)
                        VAR51 = FUN9(&VAR8->VAR27);
                    VAR26 = FUN14(&VAR8->VAR27);
                }
                if (!FUN3(&VAR8->VAR27))
                    break;
                if (VAR14 == 8)
                {
                    FUN18(VAR8, VAR11, VAR26, VAR51, &VAR21, &VAR22);
                    if (VAR22 < 0)
                        goto VAR52;
                }
                else
                {
                    FUN19(VAR8, VAR11, VAR26, VAR51, &VAR21, &VAR22, &VAR23, VAR14);
                }
            }
        }
        if (VAR21 < VAR2->VAR30 && VAR22 >= 0)
        {
            int VAR51 = (VAR22 + 1) * VAR2->VAR30 - VAR21;
            if (VAR14 == 8)
                FUN18(VAR8, VAR11, VAR26, VAR51, &VAR21, &VAR22);
            else
                FUN19(VAR8, VAR11, VAR26, VAR51 / (8 / VAR14), &VAR21, &VAR22, &VAR23, VAR14);
        }
    }
    else
    {
        while (VAR22 >= 0 && FUN3(&VAR8->VAR27) > 0)
        {
            memcpy(VAR11->VAR3[0] + VAR22 * VAR11->VAR36[0], VAR8->VAR27.VAR53, FUN15(VAR2->VAR30, FUN3(&VAR8->VAR27)));
            FUN5(&VAR8->VAR27, VAR2->VAR30);
            VAR22--;
        }
    }
VAR52:
    *VAR4 = 1;
    return VAR6->VAR28;
}