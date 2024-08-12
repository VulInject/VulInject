int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    uint32_t VAR7;
    FUN2(&VAR2->VAR8);
    if (FUN3(&VAR2->VAR8, 2) == 2 && VAR2->VAR9->VAR10 == 0)
    {
        FUN4(VAR2->VAR9, VAR11, "");
    }
    VAR7 = FUN5(&VAR2->VAR8, 22 - 8);
    for (VAR6 = FUN6(&VAR2->VAR8); VAR6 > 24; VAR6 -= 8)
    {
        VAR7 = ((VAR7 << 8) | FUN5(&VAR2->VAR8, 8)) & 0x003FFFFF;
        if (VAR7 == 0x20)
            break;
    }
    if (VAR7 != 0x20)
    {
        FUN4(VAR2->VAR9, VAR12, "");
        return -1;
    }
    VAR6 = FUN5(&VAR2->VAR8, 8);
    if ((VAR2->VAR13 & ~0xFF) + VAR6 < VAR2->VAR13)
        VAR6 += 256;
    VAR2->VAR13 = (VAR2->VAR13 & ~0xFF) + VAR6;
    if (FUN7(&VAR2->VAR8, "") != 1)
    {
        return -1;
    }
    if (FUN8(&VAR2->VAR8) != 0)
    {
        FUN4(VAR2->VAR9, VAR12, "");
        return -1;
    }
    FUN9(&VAR2->VAR8);
    FUN9(&VAR2->VAR8);
    FUN9(&VAR2->VAR8);
    VAR3 = FUN5(&VAR2->VAR8, 3);
    if (VAR3 != 7 && VAR3 != 6)
    {
        VAR2->VAR14 = 0;
        VAR4 = VAR15[VAR3][0];
        VAR5 = VAR15[VAR3][1];
        if (!VAR4)
            return -1;
        VAR2->VAR16 = VAR17 + FUN8(&VAR2->VAR8);
        VAR2->VAR18 = FUN8(&VAR2->VAR8);
        if (FUN8(&VAR2->VAR8) != 0)
        {
            FUN4(VAR2->VAR9, VAR12, "");
            return -1;
        }
        VAR2->VAR19 = FUN8(&VAR2->VAR8);
        VAR2->VAR20 = VAR2->VAR18 || VAR2->VAR19;
        VAR2->VAR21 = FUN8(&VAR2->VAR8);
        VAR2->VAR22 = VAR2->VAR23 = FUN5(&VAR2->VAR8, 5);
        FUN9(&VAR2->VAR8);
        VAR2->VAR4 = VAR4;
        VAR2->VAR5 = VAR5;
        VAR2->VAR9->VAR24 = (VAR25){12, 11};
        VAR2->VAR9->VAR26 = (VAR25){30000, 1001};
    }
    else
    {
        int VAR27;
        VAR2->VAR14 = 1;
        VAR27 = FUN5(&VAR2->VAR8, 3);
        if (VAR27 == 1)
        {
            VAR3 = FUN5(&VAR2->VAR8, 3);
            FUN10(VAR2->VAR9, "", VAR3);
            VAR2->VAR28 = FUN8(&VAR2->VAR8);
            VAR2->VAR29 = FUN8(&VAR2->VAR8);
            if (FUN8(&VAR2->VAR8) != 0)
            {
                FUN4(VAR2->VAR9, VAR12, "");
            }
            VAR2->VAR19 = FUN8(&VAR2->VAR8);
            VAR2->VAR30 = FUN8(&VAR2->VAR8);
            VAR2->VAR31 = FUN8(&VAR2->VAR8);
            VAR2->VAR20 = VAR2->VAR29 || VAR2->VAR19 || VAR2->VAR31;
            if (VAR2->VAR9->VAR32)
                VAR2->VAR31 = 0;
            VAR2->VAR33 = FUN8(&VAR2->VAR8);
            if (FUN8(&VAR2->VAR8) != 0)
            {
                FUN4(VAR2->VAR9, VAR12, "");
            }
            if (FUN8(&VAR2->VAR8) != 0)
            {
                FUN4(VAR2->VAR9, VAR12, "");
            }
            VAR2->VAR34 = FUN8(&VAR2->VAR8);
            VAR2->VAR35 = FUN8(&VAR2->VAR8);
            if (VAR2->VAR35)
                VAR2->VAR36 = VAR37;
            FUN11(&VAR2->VAR8, 1);
            FUN11(&VAR2->VAR8, 3);
        }
        else if (VAR27 != 0)
        {
            FUN4(VAR2->VAR9, VAR12, "", VAR27);
            return -1;
        }
        VAR2->VAR16 = FUN5(&VAR2->VAR8, 3);
        switch (VAR2->VAR16)
        {
        case 0:
            VAR2->VAR16 = VAR17;
            break;
        case 1:
            VAR2->VAR16 = VAR38;
            break;
        case 2:
            VAR2->VAR16 = VAR38;
            VAR2->VAR21 = 3;
            break;
        case 3:
            VAR2->VAR16 = VAR39;
            break;
        case 7:
            VAR2->VAR16 = VAR17;
            break;
        default:
            return -1;
        }
        FUN11(&VAR2->VAR8, 2);
        VAR2->VAR40 = FUN8(&VAR2->VAR8);
        FUN11(&VAR2->VAR8, 4);
        if (VAR27)
        {
            if (VAR3 == 6)
            {
                VAR2->VAR41 = FUN5(&VAR2->VAR8, 4);
                FUN10(VAR2->VAR9, "", VAR2->VAR41);
                VAR4 = (FUN5(&VAR2->VAR8, 9) + 1) * 4;
                FUN7(&VAR2->VAR8, "");
                VAR5 = FUN5(&VAR2->VAR8, 9) * 4;
                FUN10(VAR2->VAR9, "", VAR4, VAR5);
                if (VAR2->VAR41 == VAR42)
                {
                    VAR2->VAR9->VAR24.VAR43 = FUN5(&VAR2->VAR8, 8);
                    VAR2->VAR9->VAR24.VAR44 = FUN5(&VAR2->VAR8, 8);
                }
                else
                {
                    VAR2->VAR9->VAR24 = VAR45[VAR2->VAR41];
                }
            }
            else
            {
                VAR4 = VAR15[VAR3][0];
                VAR5 = VAR15[VAR3][1];
                VAR2->VAR9->VAR24 = (VAR25){12, 11};
            }
            VAR2->VAR9->VAR24.VAR44 <<= VAR2->VAR46;
            if ((VAR4 == 0) || (VAR5 == 0))
                return -1;
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            if (VAR2->VAR28)
            {
                int VAR47;
                VAR2->VAR9->VAR26.VAR43 = 1800000;
                VAR2->VAR9->VAR26.VAR44 = 1000 + FUN8(&VAR2->VAR8);
                VAR2->VAR9->VAR26.VAR44 *= FUN5(&VAR2->VAR8, 7);
                if (VAR2->VAR9->VAR26.VAR44 == 0)
                {
                    FUN4(VAR2, VAR12, "");
                    return -1;
                }
                VAR47 = FUN12(VAR2->VAR9->VAR26.VAR44, VAR2->VAR9->VAR26.VAR43);
                VAR2->VAR9->VAR26.VAR44 /= VAR47;
                VAR2->VAR9->VAR26.VAR43 /= VAR47;
            }
            else
            {
                VAR2->VAR9->VAR26 = (VAR25){30000, 1001};
            }
        }
        if (VAR2->VAR28)
        {
            FUN11(&VAR2->VAR8, 2);
        }
        if (VAR27)
        {
            if (VAR2->VAR29)
            {
                if (FUN8(&VAR2->VAR8) == 0)
                    FUN9(&VAR2->VAR8);
            }
            if (VAR2->VAR33)
            {
                if (FUN8(&VAR2->VAR8) != 0)
                {
                    FUN4(VAR2->VAR9, VAR12, "");
                }
                if (FUN8(&VAR2->VAR8) != 0)
                {
                    FUN4(VAR2->VAR9, VAR12, "");
                }
            }
        }
        VAR2->VAR23 = FUN5(&VAR2->VAR8, 5);
    }
    if (VAR2->VAR4 == 0 || VAR2->VAR5 == 0)
    {
        FUN4(VAR2->VAR9, VAR12, "");
        return -1;
    }
    VAR2->VAR48 = (VAR2->VAR4 + 15) / 16;
    VAR2->VAR49 = (VAR2->VAR5 + 15) / 16;
    VAR2->VAR50 = VAR2->VAR48 * VAR2->VAR49;
    if (VAR2->VAR21)
    {
        FUN11(&VAR2->VAR8, 3);
        if (VAR2->VAR28)
            FUN11(&VAR2->VAR8, 2);
        FUN11(&VAR2->VAR8, 2);
    }
    if (VAR2->VAR16 != VAR39)
    {
        VAR2->VAR51 = VAR2->VAR13;
        VAR2->VAR52 = VAR2->VAR51 - VAR2->VAR53;
        VAR2->VAR53 = VAR2->VAR51;
    }
    else
    {
        VAR2->VAR51 = VAR2->VAR13;
        VAR2->VAR54 = VAR2->VAR52 - (VAR2->VAR53 - VAR2->VAR51);
        if (VAR2->VAR52 <= VAR2->VAR54 || VAR2->VAR52 <= VAR2->VAR52 - VAR2->VAR54 || VAR2->VAR52 <= 0)
        {
            VAR2->VAR52 = 2;
            VAR2->VAR54 = 1;
        }
        FUN13(VAR2);
    }
    if (FUN14(&VAR2->VAR8) < 0)
        return VAR55;
    if (VAR2->VAR33)
    {
        if (FUN7(&VAR2->VAR8, "") != 1)
        {
            return -1;
        }
        FUN15(VAR2);
        if (FUN7(&VAR2->VAR8, "") != 1)
        {
            return -1;
        }
    }
    VAR2->VAR56 = 1;
    if (VAR2->VAR30)
    {
        VAR2->VAR57 = VAR2->VAR58 = VAR59;
    }
    else
    {
        VAR2->VAR57 = VAR2->VAR58 = VAR60;
    }
    FUN16(VAR2);
    if (VAR2->VAR16 == VAR17 && VAR2->VAR61 == FUN17("") && FUN6(&VAR2->VAR8) >= 85 + 13 * 3 * 16 + 50)
    {
        int VAR6, VAR62;
        for (VAR6 = 0; VAR6 < 85; VAR6++)
            FUN4(VAR2->VAR9, VAR63, "", FUN8(&VAR2->VAR8));
        FUN4(VAR2->VAR9, VAR63, "");
        for (VAR6 = 0; VAR6 < 13; VAR6++)
        {
            for (VAR62 = 0; VAR62 < 3; VAR62++)
            {
                int VAR64 = FUN5(&VAR2->VAR8, 8);
                VAR64 |= FUN18(&VAR2->VAR8, 8) << 8;
                FUN4(VAR2->VAR9, VAR63, "", VAR64);
            }
            FUN4(VAR2->VAR9, VAR63, "");
        }
        for (VAR6 = 0; VAR6 < 50; VAR6++)
            FUN4(VAR2->VAR9, VAR63, "", FUN8(&VAR2->VAR8));
    }
    return 0;
}