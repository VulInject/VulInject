int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    uint32_t VAR7;
    FUN2(&VAR2->VAR8);
    VAR7 = FUN3(&VAR2->VAR8, 22 - 8);
    for (VAR6 = VAR2->VAR8.VAR9 - FUN4(&VAR2->VAR8); VAR6 > 24; VAR6 -= 8)
    {
        VAR7 = ((VAR7 << 8) | FUN3(&VAR2->VAR8, 8)) & 0x003FFFFF;
        if (VAR7 == 0x20)
            break;
    }
    if (VAR7 != 0x20)
    {
        FUN5(VAR2->VAR10, VAR11, "");
        return -1;
    }
    VAR2->VAR12 = FUN3(&VAR2->VAR8, 8);
    if (FUN6(&VAR2->VAR8) != 1)
    {
        FUN5(VAR2->VAR10, VAR11, "");
        return -1;
    }
    if (FUN6(&VAR2->VAR8) != 0)
    {
        FUN5(VAR2->VAR10, VAR11, "");
        return -1;
    }
    FUN7(&VAR2->VAR8);
    FUN7(&VAR2->VAR8);
    FUN7(&VAR2->VAR8);
    VAR2->VAR13 = 0;
    VAR3 = FUN3(&VAR2->VAR8, 3);
    if (VAR3 != 7 && VAR3 != 6)
    {
        VAR2->VAR14 = 0;
        VAR4 = VAR15[VAR3][0];
        VAR5 = VAR15[VAR3][1];
        if (!VAR4)
            return -1;
        VAR2->VAR16 = VAR17 + FUN6(&VAR2->VAR8);
        VAR2->VAR18 = FUN6(&VAR2->VAR8);
        if (FUN6(&VAR2->VAR8) != 0)
        {
            FUN5(VAR2->VAR10, VAR11, "");
            return -1;
        }
        VAR2->VAR19 = FUN6(&VAR2->VAR8);
        VAR2->VAR20 = VAR2->VAR18 || VAR2->VAR19;
        if (FUN6(&VAR2->VAR8) != 0)
        {
            FUN5(VAR2->VAR10, VAR11, "");
            return -1;
        }
        VAR2->VAR21 = VAR2->VAR22 = FUN3(&VAR2->VAR8, 5);
        FUN7(&VAR2->VAR8);
        VAR2->VAR4 = VAR4;
        VAR2->VAR5 = VAR5;
    }
    else
    {
        int VAR23;
        VAR2->VAR14 = 1;
        VAR23 = FUN3(&VAR2->VAR8, 3);
        if (VAR23 == 1)
        {
            VAR3 = FUN3(&VAR2->VAR8, 3);
            FUN8("", VAR3);
            FUN9(&VAR2->VAR8, 1);
            VAR2->VAR24 = FUN3(&VAR2->VAR8, 1);
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR10, VAR11, "");
            }
            VAR2->VAR19 = FUN6(&VAR2->VAR8);
            VAR2->VAR25 = FUN6(&VAR2->VAR8);
            VAR2->VAR26 = FUN6(&VAR2->VAR8);
            VAR2->VAR20 = VAR2->VAR24 || VAR2->VAR19 || VAR2->VAR26;
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR10, VAR11, "");
            }
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR10, VAR11, "");
            }
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR10, VAR11, "");
            }
            VAR2->VAR27 = FUN6(&VAR2->VAR8);
            VAR2->VAR28 = FUN6(&VAR2->VAR8);
            if (VAR2->VAR28)
                VAR2->VAR29 = VAR30;
            FUN9(&VAR2->VAR8, 1);
            FUN9(&VAR2->VAR8, 3);
        }
        else if (VAR23 != 0)
        {
            FUN5(VAR2->VAR10, VAR11, "", VAR23);
            return -1;
        }
        VAR2->VAR16 = FUN3(&VAR2->VAR8, 3) + VAR17;
        if (VAR2->VAR16 == 8 && VAR2->VAR10->VAR31 == FUN10(""))
            VAR2->VAR16 = VAR17;
        if (VAR2->VAR16 != VAR17 && VAR2->VAR16 != VAR32)
            return -1;
        FUN9(&VAR2->VAR8, 2);
        VAR2->VAR33 = FUN6(&VAR2->VAR8);
        FUN9(&VAR2->VAR8, 4);
        if (VAR23)
        {
            if (VAR3 == 6)
            {
                VAR2->VAR34 = FUN3(&VAR2->VAR8, 4);
                FUN8("", VAR2->VAR34);
                VAR4 = (FUN3(&VAR2->VAR8, 9) + 1) * 4;
                FUN7(&VAR2->VAR8);
                VAR5 = FUN3(&VAR2->VAR8, 9) * 4;
                FUN8("", VAR4, VAR5);
                if (VAR2->VAR34 == VAR35)
                {
                    VAR2->VAR10->VAR36.VAR37 = FUN3(&VAR2->VAR8, 8);
                    VAR2->VAR10->VAR36.VAR38 = FUN3(&VAR2->VAR8, 8);
                }
                else
                {
                    VAR2->VAR10->VAR36 = VAR39[VAR2->VAR34];
                }
            }
            else
            {
                VAR4 = VAR15[VAR3][0];
                VAR5 = VAR15[VAR3][1];
            }
            if ((VAR4 == 0) || (VAR5 == 0))
                return -1;
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            if (VAR2->VAR24)
            {
                if (FUN6(&VAR2->VAR8) == 0)
                    FUN7(&VAR2->VAR8);
            }
        }
        VAR2->VAR22 = FUN3(&VAR2->VAR8, 5);
        VAR2->VAR21 = VAR2->VAR29[VAR2->VAR22];
    }
    while (FUN6(&VAR2->VAR8) != 0)
    {
        FUN9(&VAR2->VAR8, 8);
    }
    VAR2->VAR40 = 1;
    if (VAR2->VAR25)
    {
        VAR2->VAR41 = VAR2->VAR42 = VAR43;
    }
    else
    {
        VAR2->VAR41 = VAR2->VAR42 = VAR44;
    }
    if (VAR2->VAR10->VAR45 & VAR46)
    {
        FUN5(VAR2->VAR10, VAR47, "", VAR2->VAR22, FUN11(VAR2->VAR16), VAR2->VAR8.VAR9, 1 - VAR2->VAR33, VAR2->VAR19 ? "" : "", VAR2->VAR24 ? "" : "", VAR2->VAR18 ? "" : "", VAR2->VAR14 ? "" : "", VAR2->VAR25 ? "" : "", VAR2->VAR27 ? "" : "", VAR2->VAR28 ? "" : "", VAR2->VAR26 ? "" : "");
    }
    if (VAR2->VAR16 == VAR17 && VAR2->VAR10->VAR31 == FUN10(""))
    {
        int VAR6, VAR48;
        for (VAR6 = 0; VAR6 < 85; VAR6++)
            FUN5(VAR2->VAR10, VAR47, "", FUN6(&VAR2->VAR8));
        FUN5(VAR2->VAR10, VAR47, "");
        for (VAR6 = 0; VAR6 < 13; VAR6++)
        {
            for (VAR48 = 0; VAR48 < 3; VAR48++)
            {
                int VAR49 = FUN3(&VAR2->VAR8, 8);
                VAR49 |= FUN12(&VAR2->VAR8, 8) << 8;
                FUN5(VAR2->VAR10, VAR47, "", VAR49);
            }
            FUN5(VAR2->VAR10, VAR47, "");
        }
        for (VAR6 = 0; VAR6 < 50; VAR6++)
            FUN5(VAR2->VAR10, VAR47, "", FUN6(&VAR2->VAR8));
    }
    return 0;
}