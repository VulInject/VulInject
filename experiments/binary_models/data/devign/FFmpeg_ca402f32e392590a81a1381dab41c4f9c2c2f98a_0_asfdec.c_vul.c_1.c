static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    ff_asf_guid VAR13;
    enum AVMediaType VAR14;
    int VAR15, VAR16;
    uint64_t VAR17;
    unsigned int VAR18;
    int64_t VAR19, VAR20, VAR21;
    int VAR22, VAR23 = 0;
    if (VAR2->VAR24 == VAR25)
    {
        FUN2(VAR2, VAR26, "");
        return FUN3(VAR27);
    }
    VAR19 = FUN4(VAR8);
    VAR10 = FUN5(VAR2, 0);
    if (!VAR10)
        return FUN3(VAR28);
    FUN6(VAR10, 32, 1, 1000);
    VAR12 = FUN7(sizeof(VAR11));
    if (!VAR12)
        return FUN3(VAR28);
    VAR10->VAR6 = VAR12;
    VAR10->VAR21 = 0;
    VAR21 = VAR5->VAR29.VAR30;
    VAR12->VAR31 = 128;
    if (!(VAR5->VAR29.VAR32 & 0x01))
    {
        VAR10->VAR33 = VAR5->VAR29.VAR34 / (10000000 / 1000) - VAR21;
    }
    FUN8(VAR8, &VAR13);
    VAR22 = 0;
    if (!FUN9(&VAR13, &VAR35))
    {
        VAR14 = VAR36;
    }
    else if (!FUN9(&VAR13, &VAR37))
    {
        VAR14 = VAR38;
    }
    else if (!FUN9(&VAR13, &VAR39))
    {
        VAR14 = VAR38;
        VAR10->VAR40->VAR41 = VAR42;
    }
    else if (!FUN9(&VAR13, &VAR43))
    {
        VAR14 = VAR44;
    }
    else if (!FUN9(&VAR13, &VAR45))
    {
        VAR22 = 1;
        VAR14 = VAR46;
    }
    else
    {
        return -1;
    }
    FUN8(VAR8, &VAR13);
    VAR17 = FUN10(VAR8);
    VAR15 = FUN11(VAR8);
    FUN11(VAR8);
    VAR10->VAR47 = FUN12(VAR8) & 0x7f;
    VAR5->VAR48[VAR10->VAR47] = VAR2->VAR24 - 1;
    FUN11(VAR8);
    if (VAR22)
    {
        FUN8(VAR8, &VAR13);
        if (!FUN9(&VAR13, &VAR49))
        {
            VAR14 = VAR36;
            VAR23 = 1;
            FUN8(VAR8, &VAR13);
            FUN11(VAR8);
            FUN11(VAR8);
            FUN11(VAR8);
            FUN8(VAR8, &VAR13);
            FUN11(VAR8);
        }
    }
    VAR10->VAR40->VAR50 = VAR14;
    if (VAR14 == VAR36)
    {
        FUN13(VAR8, VAR10->VAR40, VAR15);
        if (VAR23)
        {
            VAR10->VAR40->VAR41 = VAR51;
            VAR10->VAR40->VAR52 = 0;
        }
        if (VAR10->VAR40->VAR41 == VAR53)
        {
            VAR10->VAR54 = VAR55;
        }
        else
        {
            VAR10->VAR54 = VAR56;
        }
        VAR20 = FUN4(VAR8);
        if (VAR3 >= (VAR20 + 8 - VAR19 + 24))
        {
            VAR12->VAR57 = FUN14(VAR8);
            VAR12->VAR58 = FUN12(VAR8);
            VAR12->VAR59 = FUN12(VAR8);
            FUN12(VAR8);
            FUN14(VAR8);
        }
        if (VAR12->VAR57 > 1)
        {
            if (!VAR12->VAR59 || (VAR12->VAR58 / VAR12->VAR59 <= 1) || VAR12->VAR58 % VAR12->VAR59)
                VAR12->VAR57 = 0;
        }
        switch (VAR10->VAR40->VAR41)
        {
        case VAR60:
            VAR10->VAR40->VAR61 = VAR62;
            break;
        case VAR63:
        case VAR64:
        case VAR65:
        case VAR66:
        case VAR67:
        case VAR68:
        case VAR69:
        case VAR70:
            VAR10->VAR40->VAR61 = 1;
            break;
        default:
            VAR10->VAR40->VAR61 = 1;
            break;
        }
    }
    else if (VAR14 == VAR38 && VAR3 - (FUN4(VAR8) - VAR19 + 24) >= 51)
    {
        FUN11(VAR8);
        FUN11(VAR8);
        FUN14(VAR8);
        FUN12(VAR8);
        VAR16 = FUN11(VAR8);
        VAR10->VAR40->VAR71 = FUN11(VAR8);
        VAR10->VAR40->VAR72 = FUN11(VAR8);
        FUN12(VAR8);
        VAR10->VAR40->VAR73 = FUN12(VAR8);
        VAR18 = FUN11(VAR8);
        FUN15(VAR8, 20);
        if (VAR16 > 40)
        {
            VAR10->VAR40->VAR74 = VAR16 - 40;
            VAR10->VAR40->VAR75 = FUN7(VAR10->VAR40->VAR74 + VAR76);
            FUN16(VAR8, VAR10->VAR40->VAR75, VAR10->VAR40->VAR74);
        }
        if (VAR10->VAR40->VAR74 && (VAR10->VAR40->VAR73 <= 8))
        {
            int av_unused VAR77;
            VAR10->VAR40->VAR78 = FUN7(sizeof(VAR79));
            for (VAR77 = 0; VAR77 < FUN17(VAR10->VAR40->VAR74, VAR80) / 4; VAR77++)
                VAR10->VAR40->VAR78->VAR81[VAR77] = FUN18(((VAR82 *)VAR10->VAR40->VAR75)[VAR77]);
            memcpy(VAR10->VAR40->VAR78->VAR81, VAR10->VAR40->VAR75, FUN17(VAR10->VAR40->VAR74, VAR80));
            VAR10->VAR40->VAR78->VAR83 = 1;
        }
        VAR10->VAR40->VAR52 = VAR18;
        VAR10->VAR40->VAR41 = FUN19(VAR84, VAR18);
        if (VAR18 == FUN20('', '', '', ''))
        {
            VAR10->VAR54 = VAR56;
            VAR10->VAR40->VAR71 = VAR10->VAR40->VAR72 = 0;
            FUN21(&VAR10->VAR40->VAR75);
            VAR10->VAR40->VAR74 = 0;
        }
        if (VAR10->VAR40->VAR41 == VAR85)
            VAR10->VAR54 = VAR86;
    }
    VAR20 = FUN4(VAR8);
    FUN15(VAR8, VAR3 - (VAR20 - VAR19 + 24));
    return 0;
}