int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    uint32_t VAR7;
    FUN2(&VAR2->VAR8);
    VAR7 = FUN3(&VAR2->VAR8, 22 - 8);
    for (VAR6 = FUN4(&VAR2->VAR8); VAR6 > 24; VAR6 -= 8)
    {
        VAR7 = ((VAR7 << 8) | FUN3(&VAR2->VAR8, 8)) & 0x003FFFFF;
        if (VAR7 == 0x20)
            break;
    }
    if (VAR7 != 0x20)
    {
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;
    }
    VAR6 = FUN3(&VAR2->VAR8, 8);
    if ((VAR2->VAR11 & ~0xFF) + VAR6 < VAR2->VAR11)
        VAR6 += 256;
    VAR2->VAR12->VAR13.VAR14 = VAR2->VAR11 = (VAR2->VAR11 & ~0xFF) + VAR6;
    if (FUN6(&VAR2->VAR8) != 1)
    {
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (FUN6(&VAR2->VAR8) != 0)
    {
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;
    }
    FUN7(&VAR2->VAR8);
    FUN7(&VAR2->VAR8);
    FUN7(&VAR2->VAR8);
    VAR3 = FUN3(&VAR2->VAR8, 3);
    if (VAR3 != 7 && VAR3 != 6)
    {
        VAR2->VAR15 = 0;
        VAR4 = VAR16[VAR3][0];
        VAR5 = VAR16[VAR3][1];
        if (!VAR4)
            return -1;
        VAR2->VAR17 = VAR18 + FUN6(&VAR2->VAR8);
        VAR2->VAR19 = FUN6(&VAR2->VAR8);
        if (FUN6(&VAR2->VAR8) != 0)
        {
            FUN5(VAR2->VAR9, VAR10, "");
            return -1;
        }
        VAR2->VAR20 = FUN6(&VAR2->VAR8);
        VAR2->VAR21 = VAR2->VAR19 || VAR2->VAR20;
        VAR2->VAR22 = FUN6(&VAR2->VAR8);
        VAR2->VAR23 = VAR2->VAR24 = FUN3(&VAR2->VAR8, 5);
        FUN7(&VAR2->VAR8);
        VAR2->VAR4 = VAR4;
        VAR2->VAR5 = VAR5;
        VAR2->VAR9->VAR25 = (VAR26){12, 11};
        VAR2->VAR9->VAR27 = (VAR26){1001, 30000};
    }
    else
    {
        int VAR28;
        VAR2->VAR15 = 1;
        VAR28 = FUN3(&VAR2->VAR8, 3);
        if (VAR28 == 1)
        {
            VAR3 = FUN3(&VAR2->VAR8, 3);
            FUN8(VAR2->VAR9, "", VAR3);
            VAR2->VAR29 = FUN6(&VAR2->VAR8);
            VAR2->VAR30 = FUN6(&VAR2->VAR8);
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            VAR2->VAR20 = FUN6(&VAR2->VAR8);
            VAR2->VAR31 = FUN6(&VAR2->VAR8);
            VAR2->VAR32 = FUN6(&VAR2->VAR8);
            VAR2->VAR21 = VAR2->VAR30 || VAR2->VAR20 || VAR2->VAR32;
            VAR2->VAR33 = FUN6(&VAR2->VAR8);
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            if (FUN6(&VAR2->VAR8) != 0)
            {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            VAR2->VAR34 = FUN6(&VAR2->VAR8);
            VAR2->VAR35 = FUN6(&VAR2->VAR8);
            if (VAR2->VAR35)
                VAR2->VAR36 = VAR37;
            FUN9(&VAR2->VAR8, 1);
            FUN9(&VAR2->VAR8, 3);
        }
        else if (VAR28 != 0)
        {
            FUN5(VAR2->VAR9, VAR10, "", VAR28);
            return -1;
        }
        VAR2->VAR17 = FUN3(&VAR2->VAR8, 3);
        switch (VAR2->VAR17)
        {
        case 0:
            VAR2->VAR17 = VAR18;
            break;
        case 1:
            VAR2->VAR17 = VAR38;
            break;
        case 2:
            VAR2->VAR17 = VAR38;
            VAR2->VAR22 = 3;
            break;
        case 3:
            VAR2->VAR17 = VAR39;
            break;
        case 7:
            VAR2->VAR17 = VAR18;
            break;
        default:
            return -1;
        }
        FUN9(&VAR2->VAR8, 2);
        VAR2->VAR40 = FUN6(&VAR2->VAR8);
        FUN9(&VAR2->VAR8, 4);
        if (VAR28)
        {
            if (VAR3 == 6)
            {
                VAR2->VAR41 = FUN3(&VAR2->VAR8, 4);
                FUN8(VAR2->VAR9, "", VAR2->VAR41);
                VAR4 = (FUN3(&VAR2->VAR8, 9) + 1) * 4;
                FUN7(&VAR2->VAR8);
                VAR5 = FUN3(&VAR2->VAR8, 9) * 4;
                FUN8(VAR2->VAR9, "", VAR4, VAR5);
                if (VAR2->VAR41 == VAR42)
                {
                    VAR2->VAR9->VAR25.VAR43 = FUN3(&VAR2->VAR8, 8);
                    VAR2->VAR9->VAR25.VAR44 = FUN3(&VAR2->VAR8, 8);
                }
                else
                {
                    VAR2->VAR9->VAR25 = VAR45[VAR2->VAR41];
                }
            }
            else
            {
                VAR4 = VAR16[VAR3][0];
                VAR5 = VAR16[VAR3][1];
                VAR2->VAR9->VAR25 = (VAR26){12, 11};
            }
            if ((VAR4 == 0) || (VAR5 == 0))
                return -1;
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            if (VAR2->VAR29)
            {
                int VAR46;
                VAR2->VAR9->VAR27.VAR44 = 1800000;
                VAR2->VAR9->VAR27.VAR43 = 1000 + FUN6(&VAR2->VAR8);
                VAR2->VAR9->VAR27.VAR43 *= FUN3(&VAR2->VAR8, 7);
                if (VAR2->VAR9->VAR27.VAR43 == 0)
                {
                    FUN5(VAR2, VAR10, "");
                    return -1;
                }
                VAR46 = FUN10(VAR2->VAR9->VAR27.VAR44, VAR2->VAR9->VAR27.VAR43);
                VAR2->VAR9->VAR27.VAR44 /= VAR46;
                VAR2->VAR9->VAR27.VAR43 /= VAR46;
            }
            else
            {
                VAR2->VAR9->VAR27 = (VAR26){1001, 30000};
            }
        }
        if (VAR2->VAR29)
        {
            FUN9(&VAR2->VAR8, 2);
        }
        if (VAR28)
        {
            if (VAR2->VAR30)
            {
                if (FUN6(&VAR2->VAR8) == 0)
                    FUN7(&VAR2->VAR8);
            }
            if (VAR2->VAR33)
            {
                if (FUN6(&VAR2->VAR8) != 0)
                {
                    FUN5(VAR2->VAR9, VAR10, "");
                }
                if (FUN6(&VAR2->VAR8) != 0)
                {
                    FUN5(VAR2->VAR9, VAR10, "");
                }
            }
        }
        VAR2->VAR24 = FUN3(&VAR2->VAR8, 5);
    }
    VAR2->VAR47 = (VAR2->VAR4 + 15) / 16;
    VAR2->VAR48 = (VAR2->VAR5 + 15) / 16;
    VAR2->VAR49 = VAR2->VAR47 * VAR2->VAR48;
    if (VAR2->VAR22)
    {
        FUN9(&VAR2->VAR8, 3);
        if (VAR2->VAR29)
            FUN9(&VAR2->VAR8, 2);
        FUN9(&VAR2->VAR8, 2);
    }
    while (FUN6(&VAR2->VAR8) != 0)
    {
        FUN9(&VAR2->VAR8, 8);
    }
    if (VAR2->VAR33)
    {
        if (FUN6(&VAR2->VAR8) != 1)
        {
            FUN5(VAR2->VAR9, VAR10, "");
            return -1;
        }
        FUN11(VAR2);
        if (FUN6(&VAR2->VAR8) != 1)
        {
            FUN5(VAR2->VAR9, VAR10, "");
            return -1;
        }
    }
    VAR2->VAR50 = 1;
    if (VAR2->VAR31)
    {
        VAR2->VAR51 = VAR2->VAR52 = VAR53;
    }
    else
    {
        VAR2->VAR51 = VAR2->VAR52 = VAR54;
    }
    FUN12(VAR2);
    if (VAR2->VAR17 == VAR18 && VAR2->VAR55 == FUN13(""))
    {
        int VAR6, VAR56;
        for (VAR6 = 0; VAR6 < 85; VAR6++)
            FUN5(VAR2->VAR9, VAR57, "", FUN6(&VAR2->VAR8));
        FUN5(VAR2->VAR9, VAR57, "");
        for (VAR6 = 0; VAR6 < 13; VAR6++)
        {
            for (VAR56 = 0; VAR56 < 3; VAR56++)
            {
                int VAR58 = FUN3(&VAR2->VAR8, 8);
                VAR58 |= FUN14(&VAR2->VAR8, 8) << 8;
                FUN5(VAR2->VAR9, VAR57, "", VAR58);
            }
            FUN5(VAR2->VAR9, VAR57, "");
        }
        for (VAR6 = 0; VAR6 < 50; VAR6++)
            FUN5(VAR2->VAR9, VAR57, "", FUN6(&VAR2->VAR8));
    }
    return 0;
}