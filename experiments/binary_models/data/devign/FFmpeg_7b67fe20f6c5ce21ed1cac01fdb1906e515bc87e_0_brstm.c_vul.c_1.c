static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int64_t VAR11, VAR12, VAR13;
    uint32_t VAR14, VAR15, VAR16 = 0;
    VAR17 *VAR18;
    int VAR19 = VAR20;
    int VAR21 = 0;
    int VAR22 = !strcmp("", VAR2->VAR23->VAR24);
    VAR18 = FUN2(VAR2, NULL);
    if (!VAR18)
        return FUN3(VAR25);
    VAR18->VAR9->VAR26 = VAR27;
    FUN4(VAR2->VAR28, 4);
    VAR6 = FUN5(VAR2->VAR28);
    if (VAR6 != 0xFEFF && VAR6 != 0xFFFE)
    {
        FUN6(VAR2, VAR29, "", VAR6);
        return VAR30;
    }
    if (VAR6 == 0xFFFE)
        VAR4->VAR31 = 1;
    if (!VAR22)
    {
        VAR7 = FUN7(VAR2->VAR28);
        VAR8 = FUN7(VAR2->VAR28);
        FUN4(VAR2->VAR28, 4);
        VAR14 = FUN8(VAR2);
        if (VAR14 < 14)
            return VAR30;
        FUN4(VAR2->VAR28, VAR14 - 14);
        VAR12 = FUN9(VAR2->VAR28);
        if (FUN10(VAR2->VAR28) != FUN11('', '', '', ''))
            return VAR30;
    }
    else
    {
        uint32_t VAR32 = 0;
        uint16_t VAR33, VAR34, VAR35;
        VAR34 = FUN8(VAR2);
        FUN4(VAR2->VAR28, 4);
        FUN4(VAR2->VAR28, 4);
        VAR33 = FUN8(VAR2);
        FUN4(VAR2->VAR28, 2);
        for (VAR35 = 0; FUN9(VAR2->VAR28) < VAR34 && !(VAR16 && VAR32) && VAR35 < VAR33; VAR35++)
        {
            uint16_t VAR36 = FUN8(VAR2);
            FUN4(VAR2->VAR28, 2);
            switch (VAR36)
            {
            case 0x4000:
                VAR32 = FUN12(VAR2);
                FUN12(VAR2);
                break;
            case 0x4001:
                FUN4(VAR2->VAR28, 4);
                FUN4(VAR2->VAR28, 4);
                break;
            case 0x4002:
                VAR16 = FUN12(VAR2) + 8;
                FUN4(VAR2->VAR28, 4);
                break;
            case 0x4003:
                FUN4(VAR2->VAR28, 4);
                FUN4(VAR2->VAR28, 4);
                break;
            }
        }
        if (!VAR32 || !VAR16)
            return VAR30;
        FUN4(VAR2->VAR28, VAR32 - FUN9(VAR2->VAR28));
        VAR12 = FUN9(VAR2->VAR28);
        if (FUN10(VAR2->VAR28) != FUN11('', '', '', ''))
            return VAR30;
    }
    VAR14 = FUN12(VAR2);
    if (VAR14 < 192)
        return VAR30;
    FUN4(VAR2->VAR28, 4);
    VAR11 = FUN12(VAR2);
    if (VAR11 > VAR14)
        return VAR30;
    FUN4(VAR2->VAR28, 12);
    VAR13 = FUN12(VAR2) + 16LL;
    if (VAR13 > VAR14)
        return VAR30;
    FUN4(VAR2->VAR28, VAR12 + VAR11 + 8 - FUN9(VAR2->VAR28));
    VAR9 = FUN7(VAR2->VAR28);
    switch (VAR9)
    {
    case 0:
        VAR9 = VAR37;
        break;
    case 1:
        VAR9 = VAR4->VAR31 ? VAR38 : VAR39;
        break;
    case 2:
        VAR9 = VAR4->VAR31 ? VAR40 : VAR41;
        break;
    default:
        FUN13(VAR2, "", VAR9);
        return VAR42;
    }
    VAR21 = FUN7(VAR2->VAR28);
    VAR18->VAR9->VAR43 = VAR9;
    VAR18->VAR9->VAR44 = FUN7(VAR2->VAR28);
    if (!VAR18->VAR9->VAR44)
        return VAR30;
    FUN4(VAR2->VAR28, 1);
    VAR18->VAR9->VAR45 = VAR22 ? FUN12(VAR2) : FUN8(VAR2);
    if (!VAR18->VAR9->VAR45)
        return VAR30;
    if (!VAR22)
        FUN4(VAR2->VAR28, 2);
    if (VAR21)
    {
        if (FUN14(&VAR2->VAR46, "", FUN15(FUN12(VAR2), VAR47, VAR18->VAR9->VAR45), 0) < 0)
            return FUN3(VAR25);
    }
    else
    {
        FUN4(VAR2->VAR28, 4);
    }
    VAR18->VAR48 = 0;
    VAR18->VAR49 = FUN12(VAR2);
    FUN16(VAR18, 64, 1, VAR18->VAR9->VAR45);
    if (!VAR22)
        VAR16 = FUN12(VAR2);
    VAR4->VAR50 = 0;
    VAR4->VAR51 = FUN12(VAR2);
    if (VAR4->VAR51 > VAR52)
    {
        FUN6(VAR2, VAR53, "", VAR4->VAR51);
        return VAR30;
    }
    VAR4->VAR54 = FUN12(VAR2);
    if (VAR4->VAR54 > VAR55 / VAR18->VAR9->VAR44)
        return VAR30;
    VAR4->VAR56 = FUN12(VAR2);
    VAR4->VAR57 = FUN12(VAR2);
    VAR4->VAR58 = FUN12(VAR2);
    VAR4->VAR59 = FUN12(VAR2);
    if (VAR4->VAR59 > VAR55 / VAR18->VAR9->VAR44)
        return VAR30;
    if (VAR4->VAR57 > VAR4->VAR59)
        return VAR30;
    if (VAR9 == VAR41 || VAR9 == VAR40)
    {
        int VAR60;
        FUN4(VAR2->VAR28, VAR12 + VAR13 - FUN9(VAR2->VAR28));
        if (!VAR22)
            VAR13 = FUN12(VAR2) + 16LL;
        else
            VAR13 = VAR13 + FUN12(VAR2) + VAR18->VAR9->VAR44 * 8 - 8;
        if (VAR13 > VAR14)
            return VAR30;
        FUN4(VAR2->VAR28, VAR12 + VAR13 - FUN9(VAR2->VAR28));
        VAR4->VAR61 = FUN17(32 * VAR18->VAR9->VAR44);
        if (!VAR4->VAR61)
            return FUN3(VAR25);
        for (VAR60 = 0; VAR60 < VAR18->VAR9->VAR44; VAR60++)
        {
            if (FUN18(VAR2->VAR28, VAR4->VAR61 + VAR60 * 32, 32) != 32)
            {
                VAR19 = VAR30;
                goto VAR62;
            }
            FUN4(VAR2->VAR28, VAR22 ? 14 : 24);
        }
    }
    if (VAR14 < (FUN9(VAR2->VAR28) - VAR12))
    {
        VAR19 = VAR30;
        goto VAR62;
    }
    FUN4(VAR2->VAR28, VAR14 - (FUN9(VAR2->VAR28) - VAR12));
    while (!FUN19(VAR2->VAR28))
    {
        VAR10 = FUN10(VAR2->VAR28);
        VAR14 = FUN12(VAR2);
        if (VAR14 < 8)
        {
            VAR19 = VAR30;
            goto VAR62;
        }
        VAR14 -= 8;
        switch (VAR10)
        {
        case FUN11('', '', '', ''):
        case FUN11('', '', '', ''):
            if (VAR9 != VAR41 && VAR9 != VAR40)
                goto VAR63;
            VAR15 = VAR4->VAR51 * VAR18->VAR9->VAR44 * 4;
            if (VAR14 < VAR15)
            {
                VAR19 = VAR30;
                goto VAR62;
            }
            if (VAR4->VAR64)
            {
                FUN6(VAR2, VAR53, "");
                goto VAR63;
            }
            else
            {
                VAR4->VAR64 = FUN17(VAR15);
                if (!VAR4->VAR64)
                {
                    VAR19 = FUN3(VAR25);
                    goto VAR62;
                }
                if (VAR22 && VAR9 != VAR40)
                {
                    int VAR35;
                    for (VAR35 = 0; VAR35 < VAR15; VAR35 += 2)
                    {
                        VAR4->VAR64[VAR35 + 1] = FUN7(VAR2->VAR28);
                        VAR4->VAR64[VAR35] = FUN7(VAR2->VAR28);
                    }
                }
                else
                {
                    FUN18(VAR2->VAR28, VAR4->VAR64, VAR15);
                }
                FUN4(VAR2->VAR28, VAR14 - VAR15);
            }
            break;
        case FUN11('', '', '', ''):
            if ((VAR16 < FUN9(VAR2->VAR28)) || (!VAR4->VAR64 && (VAR9 == VAR41 || VAR9 == VAR40)))
            {
                VAR19 = VAR30;
                goto VAR62;
            }
            FUN4(VAR2->VAR28, VAR16 - FUN9(VAR2->VAR28));
            if (VAR22 && (VAR9 == VAR41 || VAR9 == VAR40))
                FUN4(VAR2->VAR28, 24);
            VAR4->VAR65 = FUN9(VAR2->VAR28);
            if (!VAR22 && (VAR7 != 1 || VAR8))
                FUN13(VAR2, "", VAR7, VAR8);
            return 0;
        default:
            FUN6(VAR2, VAR53, "", VAR10);
        VAR63:
            FUN4(VAR2->VAR28, VAR14);
        }
    }
VAR62:
    FUN20(VAR2);
    return VAR19;
}