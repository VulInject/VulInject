static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    unsigned int VAR4;
    int VAR5;
    unsigned int VAR6 = 0;
    int VAR7;
    unsigned char VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12;
    int VAR13 = -1;
    int VAR14 = -1;
    int VAR15 = -1;
    int VAR16 = -1;
    int VAR17 = -1;
    int VAR18 = -1;
    int VAR19 = -1;
    int VAR20, VAR21;
    int VAR22 = 0;
    int VAR23;
    int VAR24 = 0;
    int VAR25 = 0;
    int VAR26 = 0;
    int VAR27 = 0;
    int VAR28 = VAR2->VAR29 / 2;
    while (FUN2(&VAR2->VAR30) >= 8)
    {
        VAR3 = FUN3(&VAR2->VAR30);
        VAR6 = FUN4(&VAR2->VAR30);
        VAR4 = FUN3(&VAR2->VAR30);
        switch (VAR3)
        {
        case VAR31:
            VAR13 = VAR6;
            break;
        case VAR32:
            VAR14 = VAR6;
            break;
        case VAR33:
            VAR15 = VAR6;
            break;
        case VAR34:
            VAR16 = VAR6;
            break;
        case VAR35:
            VAR17 = VAR6;
            break;
        case VAR36:
            VAR18 = VAR6;
            break;
        case VAR37:
            VAR19 = VAR6;
            break;
        default:
            FUN5(VAR2->VAR38, VAR39, "", (VAR3 >> 24) & 0xFF, (VAR3 >> 16) & 0xFF, (VAR3 >> 8) & 0xFF, (VAR3 >> 0) & 0xFF, VAR3);
            break;
        }
        VAR5 = VAR4 & 0x01;
        FUN6(&VAR2->VAR30, VAR4 + VAR5);
    }
    if ((VAR17 != -1) && (VAR18 != -1))
    {
        FUN5(VAR2->VAR38, VAR39, "");
        return VAR40;
    }
    if (VAR18 != -1)
    {
    }
    if (VAR17 != -1)
    {
        FUN7(&VAR2->VAR30, VAR17, VAR41);
        VAR4 = FUN8(&VAR2->VAR30);
        if (VAR4 / 3 > 256 || VAR4 > FUN2(&VAR2->VAR30))
        {
            FUN5(VAR2->VAR38, VAR39, "", VAR4 / 3);
            return VAR40;
        }
        for (VAR7 = 0; VAR7 < VAR4 / 3; VAR7++)
        {
            VAR8 = FUN9(&VAR2->VAR30) * 4;
            VAR9 = FUN9(&VAR2->VAR30) * 4;
            VAR10 = FUN9(&VAR2->VAR30) * 4;
            VAR2->VAR42[VAR7] = (VAR8 << 16) | (VAR9 << 8) | (VAR10);
        }
    }
    if ((VAR13 != -1) && (VAR14 != -1))
    {
        FUN5(VAR2->VAR38, VAR39, "");
        return VAR40;
    }
    if (VAR14 != -1)
    {
        FUN7(&VAR2->VAR30, VAR14, VAR41);
        VAR4 = FUN8(&VAR2->VAR30);
        if ((VAR12 = FUN10(&VAR2->VAR30, VAR4, VAR2->VAR43, VAR2->VAR44, 0)) < 0)
            return VAR12;
    }
    if (VAR13 != -1)
    {
        FUN7(&VAR2->VAR30, VAR13, VAR41);
        VAR4 = FUN8(&VAR2->VAR30);
        if (VAR4 > VAR45)
        {
            FUN5(VAR2->VAR38, VAR39, "", VAR4);
            return VAR40;
        }
        FUN11(&VAR2->VAR30, VAR2->VAR43, VAR4);
    }
    if (VAR19 == -1)
    {
        FUN5(VAR2->VAR38, VAR39, "");
        return VAR40;
    }
    FUN7(&VAR2->VAR30, VAR19, VAR41);
    VAR4 = FUN8(&VAR2->VAR30);
    if ((VAR12 = FUN10(&VAR2->VAR30, VAR4, VAR2->VAR46, VAR2->VAR29, 1)) < 0)
        return VAR12;
    if (VAR2->VAR47 == 4)
        VAR11 = 4;
    else
        VAR11 = 3;
    for (VAR21 = 0; VAR21 < VAR2->VAR48; VAR21 += VAR2->VAR47)
    {
        for (VAR20 = 0; VAR20 < VAR2->VAR49; VAR20 += 4, VAR27++, VAR28++)
        {
            VAR23 = VAR21 * VAR2->VAR50.VAR51[0] + VAR20;
            switch (VAR2->VAR52)
            {
            case 1:
                VAR25 = VAR2->VAR46[VAR27 * 2];
                VAR26 = VAR2->VAR46[(VAR27 * 2) + 1];
                VAR24 = ((VAR26 << 8) | VAR25) >> 3;
                VAR24 <<= VAR11;
                VAR22 = VAR2->VAR47;
                if (VAR26 == 0xFF)
                {
                    while (VAR22--)
                    {
                        VAR2->VAR50.VAR53[0][VAR23 + 0] = 255 - VAR25;
                        VAR2->VAR50.VAR53[0][VAR23 + 1] = 255 - VAR25;
                        VAR2->VAR50.VAR53[0][VAR23 + 2] = 255 - VAR25;
                        VAR2->VAR50.VAR53[0][VAR23 + 3] = 255 - VAR25;
                        VAR23 += VAR2->VAR50.VAR51[0];
                    }
                    VAR22 = 0;
                }
                break;
            case 2:
                VAR25 = VAR2->VAR46[VAR27];
                VAR26 = VAR2->VAR46[VAR28];
                VAR24 = (VAR26 << 8) | VAR25;
                VAR24 <<= VAR11;
                VAR22 = VAR2->VAR47;
                break;
            case 3:
                VAR22 = 0;
                break;
            }
            while (VAR22--)
            {
                VAR2->VAR50.VAR53[0][VAR23 + 0] = VAR2->VAR43[VAR24++];
                VAR2->VAR50.VAR53[0][VAR23 + 1] = VAR2->VAR43[VAR24++];
                VAR2->VAR50.VAR53[0][VAR23 + 2] = VAR2->VAR43[VAR24++];
                VAR2->VAR50.VAR53[0][VAR23 + 3] = VAR2->VAR43[VAR24++];
                VAR23 += VAR2->VAR50.VAR51[0];
            }
        }
    }
    if ((VAR15 != -1) && (VAR16 != -1))
    {
        FUN5(VAR2->VAR38, VAR39, "");
        return VAR40;
    }
    if (VAR15 != -1)
    {
        FUN7(&VAR2->VAR30, VAR15, VAR41);
        VAR4 = FUN8(&VAR2->VAR30);
        FUN11(&VAR2->VAR30, &VAR2->VAR54[VAR2->VAR55], VAR4);
        VAR2->VAR55 += VAR4;
        VAR2->VAR56--;
        if (VAR2->VAR56 == 0)
        {
            memcpy(VAR2->VAR43, VAR2->VAR54, VAR2->VAR55);
            VAR2->VAR55 = 0;
            VAR2->VAR56 = VAR2->VAR57;
        }
    }
    if (VAR16 != -1)
    {
        FUN7(&VAR2->VAR30, VAR16, VAR41);
        VAR4 = FUN8(&VAR2->VAR30);
        FUN11(&VAR2->VAR30, &VAR2->VAR54[VAR2->VAR55], VAR4);
        VAR2->VAR55 += VAR4;
        VAR2->VAR56--;
        if (VAR2->VAR56 == 0)
        {
            GetByteContext VAR30;
            FUN12(&VAR30, VAR2->VAR54, VAR2->VAR55);
            if ((VAR12 = FUN10(&VAR30, VAR2->VAR55, VAR2->VAR43, VAR2->VAR44, 0)) < 0)
                return VAR12;
            VAR2->VAR55 = 0;
            VAR2->VAR56 = VAR2->VAR57;
        }
    }
    return 0;
}