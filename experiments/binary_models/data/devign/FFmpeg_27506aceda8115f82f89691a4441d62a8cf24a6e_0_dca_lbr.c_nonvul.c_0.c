int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct
    {
        LBRChunk VAR7;
        LBRChunk VAR8;
        LBRChunk VAR9[5];
        LBRChunk VAR10[VAR11 / 2];
        LBRChunk VAR12[VAR11 / 2];
        LBRChunk VAR13[VAR11 / 2];
        LBRChunk VAR14[VAR11 / 2];
    } VAR15 = {0};
    GetByteContext VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    FUN2(&VAR16, VAR4 + VAR6->VAR25, VAR6->VAR26);
    if (FUN3(&VAR16) != VAR27)
    {
        FUN4(VAR2->VAR28, VAR29, "");
        return VAR30;
    }
    switch (FUN5(&VAR16))
    {
    case VAR31:
        if (!VAR2->VAR32)
        {
            FUN4(VAR2->VAR28, VAR29, "");
            return VAR30;
        }
        break;
    case VAR33:
        if ((VAR21 = FUN6(VAR2, &VAR16)) < 0)
        {
            VAR2->VAR32 = 0;
            return VAR21;
        }
        break;
    default:
        FUN4(VAR2->VAR28, VAR29, "");
        return VAR30;
    }
    VAR23 = FUN5(&VAR16);
    VAR24 = (VAR23 & 0x80) ? FUN7(&VAR16) : FUN5(&VAR16);
    if (VAR24 > FUN8(&VAR16))
    {
        VAR24 = FUN8(&VAR16);
        FUN4(VAR2->VAR28, VAR34, "");
        if (VAR2->VAR28->VAR35 & VAR36)
            return VAR30;
    }
    FUN2(&VAR16, VAR16.VAR37, VAR24);
    switch (VAR23 & 0x7f)
    {
    case VAR38:
        if (VAR2->VAR28->VAR35 & (VAR39 | VAR40))
        {
            int VAR41 = FUN7(&VAR16);
            uint16_t VAR42 = VAR23;
            VAR42 += (VAR24 >> 8) & 0xff;
            VAR42 += VAR24 & 0xff;
            for (VAR17 = 0; VAR17 < VAR24 - 2; VAR17++)
                VAR42 += VAR16.VAR37[VAR17];
            if (VAR41 != VAR42)
            {
                FUN4(VAR2->VAR28, VAR34, "");
                if (VAR2->VAR28->VAR35 & VAR36)
                    return VAR30;
            }
        }
        else
        {
            FUN9(&VAR16, 2);
        }
        break;
    case VAR43:
        break;
    default:
        FUN4(VAR2->VAR28, VAR29, "");
        return VAR30;
    }
    memset(VAR2->VAR44, 0, sizeof(VAR2->VAR44));
    memset(VAR2->VAR45, 0xff, sizeof(VAR2->VAR45));
    memset(VAR2->VAR46, 0, sizeof(VAR2->VAR46));
    memset(VAR2->VAR47, 0, sizeof(VAR2->VAR47));
    memset(VAR2->VAR48, 0, sizeof(VAR2->VAR48));
    memset(VAR2->VAR49, 0, sizeof(VAR2->VAR49));
    memset(VAR2->VAR50, 0, sizeof(VAR2->VAR50));
    memset(VAR2->VAR51, 0, sizeof(VAR2->VAR51));
    memset(VAR2->VAR52, 0, sizeof(VAR2->VAR52));
    memset(VAR2->VAR53, 0, sizeof(VAR2->VAR53));
    memset(VAR2->VAR54, 0, sizeof(VAR2->VAR54));
    memset(VAR2->VAR55, 0, sizeof(VAR2->VAR55));
    VAR2->VAR56 = 0;
    VAR2->VAR57 = (VAR2->VAR57 + 1) & 31;
    for (VAR18 = 0; VAR18 < VAR2->VAR58; VAR18++)
    {
        for (VAR19 = 0; VAR19 < VAR2->VAR59 / 4; VAR19++)
        {
            VAR2->VAR60[VAR18][VAR19][0] = VAR2->VAR60[VAR18][VAR19][4];
            VAR2->VAR60[VAR18][VAR19][4] = 16;
        }
    }
    memset(VAR2->VAR61[VAR2->VAR57 & 1], 0, sizeof(VAR2->VAR61[0]));
    for (VAR22 = 0; VAR22 < 5; VAR22++)
    {
        for (VAR20 = 0; VAR20 < 1 << VAR22; VAR20++)
        {
            int VAR62 = ((VAR2->VAR57 << VAR22) + VAR20) & 31;
            VAR2->VAR63[VAR22][VAR62][0] = VAR2->VAR63[VAR22][VAR62][1] = VAR2->VAR64;
        }
    }
    while (FUN8(&VAR16) > 0)
    {
        VAR23 = FUN5(&VAR16);
        VAR24 = (VAR23 & 0x80) ? FUN7(&VAR16) : FUN5(&VAR16);
        VAR23 &= 0x7f;
        if (VAR24 > FUN8(&VAR16))
        {
            VAR24 = FUN8(&VAR16);
            FUN4(VAR2->VAR28, VAR34, "", VAR23);
            if (VAR2->VAR28->VAR35 & VAR36)
                return VAR30;
        }
        switch (VAR23)
        {
        case VAR65:
            VAR15.VAR7.VAR66 = VAR24;
            VAR15.VAR7.VAR4 = VAR16.VAR37;
            break;
        case VAR67:
        case VAR68:
        case VAR69:
            VAR15.VAR8.VAR70 = VAR23;
            VAR15.VAR8.VAR66 = VAR24;
            VAR15.VAR8.VAR4 = VAR16.VAR37;
            break;
        case VAR71:
        case VAR72:
        case VAR73:
        case VAR74:
        case VAR75:
            VAR17 = VAR75 - VAR23;
            VAR15.VAR9[VAR17].VAR70 = VAR17;
            VAR15.VAR9[VAR17].VAR66 = VAR24;
            VAR15.VAR9[VAR17].VAR4 = VAR16.VAR37;
            break;
        case VAR76:
        case VAR77:
        case VAR78:
        case VAR79:
        case VAR80:
            VAR17 = VAR80 - VAR23;
            VAR15.VAR9[VAR17].VAR70 = VAR17;
            VAR15.VAR9[VAR17].VAR66 = VAR24;
            VAR15.VAR9[VAR17].VAR4 = VAR16.VAR37;
            break;
        case VAR81:
        case VAR81 + 1:
        case VAR81 + 2:
            VAR17 = VAR23 - VAR81;
            VAR15.VAR10[VAR17].VAR66 = VAR24;
            VAR15.VAR10[VAR17].VAR4 = VAR16.VAR37;
            break;
        case VAR82:
        case VAR82 + 1:
        case VAR82 + 2:
            VAR17 = VAR23 - VAR82;
            VAR15.VAR12[VAR17].VAR66 = VAR24;
            VAR15.VAR12[VAR17].VAR4 = VAR16.VAR37;
            break;
        case VAR83:
        case VAR83 + 1:
        case VAR83 + 2:
            VAR17 = VAR23 - VAR83;
            VAR15.VAR13[VAR17].VAR66 = VAR24;
            VAR15.VAR13[VAR17].VAR4 = VAR16.VAR37;
            break;
        case VAR84:
        case VAR84 + 1:
        case VAR84 + 2:
            VAR17 = VAR23 - VAR84;
            VAR15.VAR14[VAR17].VAR66 = VAR24;
            VAR15.VAR14[VAR17].VAR4 = VAR16.VAR37;
            break;
        }
        FUN9(&VAR16, VAR24);
    }
    VAR21 = FUN10(VAR2, &VAR15.VAR7);
    VAR21 |= FUN11(VAR2, &VAR15.VAR8);
    for (VAR17 = 0; VAR17 < 5; VAR17++)
        VAR21 |= FUN12(VAR2, &VAR15.VAR9[VAR17]);
    for (VAR17 = 0; VAR17 < (VAR2->VAR58 + 1) / 2; VAR17++)
    {
        int VAR85 = VAR17 * 2;
        int VAR86 = FUN13(VAR85 + 1, VAR2->VAR58 - 1);
        if (FUN14(VAR2, &VAR15.VAR10[VAR17], VAR85, VAR86) < 0 || FUN15(VAR2, &VAR15.VAR12[VAR17], VAR85, VAR86) < 0)
        {
            VAR21 = -1;
            continue;
        }
        if (!VAR15.VAR10[VAR17].VAR66 || !VAR15.VAR12[VAR17].VAR66 || !VAR15.VAR13[VAR17].VAR66)
            continue;
        if (FUN16(VAR2, &VAR15.VAR13[VAR17], VAR85, VAR86) < 0 || FUN17(VAR2, &VAR15.VAR14[VAR17], VAR85, VAR86) < 0)
        {
            VAR21 = -1;
            continue;
        }
    }
    if (VAR21 < 0 && (VAR2->VAR28->VAR35 & VAR36))
        return VAR30;
    return 0;
}