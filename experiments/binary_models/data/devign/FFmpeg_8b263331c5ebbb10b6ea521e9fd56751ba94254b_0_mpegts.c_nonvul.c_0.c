int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 **VAR7, const VAR6 *VAR8, VAR9 *VAR10, int VAR11, int VAR12, VAR13 *VAR14)
{
    const VAR6 *VAR15;
    int VAR16, VAR17, VAR18;
    char VAR19[252];
    int VAR20;
    VAR17 = FUN2(VAR7, VAR8);
    if (VAR17 < 0)
        return VAR21;
    VAR16 = FUN2(VAR7, VAR8);
    if (VAR16 < 0)
        return VAR21;
    VAR15 = *VAR7 + VAR16;
    if (VAR15 > VAR8)
        return VAR21;
    FUN3(VAR2, "", VAR17, VAR16);
    if (VAR4->VAR22->VAR23 == VAR24 && VAR5 == VAR25)
        FUN4(VAR4, VAR17, VAR26);
    switch (VAR17)
    {
    case 0x1E:
        VAR18 = FUN5(VAR7, VAR15);
        if (VAR18 < 0)
            break;
        if (VAR14 && VAR14->VAR27[VAR12])
            VAR14->VAR27[VAR12]->VAR28 = VAR18;
        for (VAR20 = 0; VAR20 < VAR11; VAR20++)
            if (VAR10[VAR20].VAR29 && VAR10[VAR20].VAR28 == VAR18)
            {
                AVIOContext VAR30;
                FUN6(&VAR30, VAR10[VAR20].VAR31, VAR10[VAR20].VAR29, 0, NULL, NULL, NULL, NULL);
                FUN7(VAR2, VAR4, &VAR30);
                if (VAR4->VAR22->VAR23 == VAR32 && VAR4->VAR22->VAR33 > 0)
                    VAR4->VAR34 = 0;
                if (VAR4->VAR22->VAR23 == VAR35)
                    FUN8(VAR14, VAR12, VAR36, VAR14, 1);
            }
        break;
    case 0x1F:
        if (FUN5(VAR7, VAR15) < 0)
            break;
        if (VAR11 > 0 && VAR4->VAR22->VAR23 == VAR37 && VAR10->VAR29 && VAR10->VAR28 == VAR12)
        {
            AVIOContext VAR30;
            FUN6(&VAR30, VAR10->VAR31, VAR10->VAR29, 0, NULL, NULL, NULL, NULL);
            FUN7(VAR2, VAR4, &VAR30);
            if (VAR4->VAR22->VAR23 == VAR32 && VAR4->VAR22->VAR33 > 0)
                VAR4->VAR34 = 0;
        }
        break;
    case 0x56:
        VAR19[0] = FUN2(VAR7, VAR15);
        VAR19[1] = FUN2(VAR7, VAR15);
        VAR19[2] = FUN2(VAR7, VAR15);
        VAR19[3] = 0;
        FUN9(&VAR4->VAR38, "", VAR19, 0);
        break;
    case 0x59:
        VAR19[0] = FUN2(VAR7, VAR15);
        VAR19[1] = FUN2(VAR7, VAR15);
        VAR19[2] = FUN2(VAR7, VAR15);
        VAR19[3] = 0;
        switch (FUN2(VAR7, VAR15))
        {
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
            VAR4->VAR39 |= VAR40;
            break;
        }
        if (VAR4->VAR22->VAR41)
        {
            if (VAR4->VAR22->VAR33 == 4 && memcmp(VAR4->VAR22->VAR41, *VAR7, 4))
                FUN10(VAR2, "");
        }
        else
        {
            VAR4->VAR22->VAR41 = FUN11(4 + VAR42);
            if (VAR4->VAR22->VAR41)
            {
                VAR4->VAR22->VAR33 = 4;
                memcpy(VAR4->VAR22->VAR41, *VAR7, 4);
            }
        }
        *VAR7 += 4;
        FUN9(&VAR4->VAR38, "", VAR19, 0);
        break;
    case 0x0a:
        for (VAR20 = 0; VAR20 + 4 <= VAR16; VAR20 += 4)
        {
            VAR19[VAR20 + 0] = FUN2(VAR7, VAR15);
            VAR19[VAR20 + 1] = FUN2(VAR7, VAR15);
            VAR19[VAR20 + 2] = FUN2(VAR7, VAR15);
            VAR19[VAR20 + 3] = '';
            switch (FUN2(VAR7, VAR15))
            {
            case 0x01:
                VAR4->VAR39 |= VAR43;
                break;
            case 0x02:
                VAR4->VAR39 |= VAR40;
                break;
            case 0x03:
                VAR4->VAR39 |= VAR44;
                break;
            }
        }
        if (VAR20 && VAR19[0])
        {
            VAR19[VAR20 - 1] = 0;
            FUN9(&VAR4->VAR38, "", VAR19, 0);
        }
        break;
    case 0x05:
        VAR4->VAR22->VAR45 = FUN12(VAR7);
        FUN3(VAR2, "", (char *)&VAR4->VAR22->VAR45);
        if (VAR4->VAR22->VAR23 == VAR24)
            FUN4(VAR4, VAR4->VAR22->VAR45, VAR46);
        break;
    default:
        break;
    }
    *VAR7 = VAR15;
    return 0;
}