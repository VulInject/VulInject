static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    VAR3 *VAR13, *VAR14, *VAR15, *VAR16, *VAR17;
    int VAR18[4], VAR19[4];
    int VAR20, VAR21;
    if (VAR9->VAR22.VAR23 == VAR9->VAR13.VAR23)
        return FUN2(VAR11, VAR4);
    switch (VAR9->VAR13.VAR23)
    {
    case VAR24:
    case VAR25:
        if (!VAR9->VAR26)
        {
            VAR9->VAR26 = VAR4;
            return 0;
        }
        break;
    };
    switch (VAR9->VAR22.VAR23)
    {
    case VAR24:
    case VAR25:
        if (!VAR9->VAR26)
        {
            VAR9->VAR26 = VAR4;
            return 0;
        }
        VAR16 = VAR9->VAR26;
        VAR17 = VAR4;
        if (VAR9->VAR22.VAR23 == VAR25)
            FUN3(VAR3 *, VAR16, VAR17);
        break;
    default:
        VAR16 = VAR17 = VAR4;
    };
    if ((VAR9->VAR13.VAR23 == VAR24 || VAR9->VAR13.VAR23 == VAR25) && (VAR9->VAR22.VAR23 == VAR27 || VAR9->VAR22.VAR23 == VAR28 || VAR9->VAR22.VAR23 == VAR29 || VAR9->VAR22.VAR23 == VAR30 || VAR9->VAR22.VAR23 == VAR31 || VAR9->VAR22.VAR23 == VAR32 || VAR9->VAR22.VAR23 == VAR33 || VAR9->VAR22.VAR23 == VAR34))
    {
        VAR15 = FUN4(VAR9->VAR26);
        VAR14 = FUN4(VAR9->VAR26);
        if (!VAR15 || !VAR14)
        {
            FUN5(&VAR15);
            FUN5(&VAR14);
            FUN5(&VAR9->VAR26);
            FUN5(&VAR4);
            return FUN6(VAR35);
        }
    }
    else if ((VAR9->VAR13.VAR23 == VAR36 || VAR9->VAR13.VAR23 == VAR37) && (VAR9->VAR22.VAR23 == VAR27 || VAR9->VAR22.VAR23 == VAR28 || VAR9->VAR22.VAR23 == VAR29 || VAR9->VAR22.VAR23 == VAR30 || VAR9->VAR22.VAR23 == VAR31 || VAR9->VAR22.VAR23 == VAR32 || VAR9->VAR22.VAR23 == VAR33 || VAR9->VAR22.VAR23 == VAR34))
    {
        VAR13 = VAR14 = VAR15 = FUN4(VAR4);
        if (!VAR13)
        {
            FUN5(&VAR9->VAR26);
            FUN5(&VAR4);
            return FUN6(VAR35);
        }
    }
    else if ((VAR9->VAR13.VAR23 == VAR36 && VAR9->VAR22.VAR23 == VAR24) || (VAR9->VAR13.VAR23 == VAR37 && VAR9->VAR22.VAR23 == VAR25))
    {
        VAR9->VAR26->VAR38 /= 2;
        VAR21 = FUN2(VAR11, VAR9->VAR26);
        FUN5(&VAR4);
        VAR9->VAR26 = NULL;
        return VAR21;
    }
    else if ((VAR9->VAR13.VAR23 == VAR36 && VAR9->VAR22.VAR23 == VAR25) || (VAR9->VAR13.VAR23 == VAR37 && VAR9->VAR22.VAR23 == VAR24))
    {
        FUN5(&VAR9->VAR26);
        VAR4->VAR38 /= 2;
        return FUN2(VAR11, VAR4);
    }
    else if ((VAR9->VAR13.VAR23 == VAR24 && VAR9->VAR22.VAR23 == VAR25) || (VAR9->VAR13.VAR23 == VAR25 && VAR9->VAR22.VAR23 == VAR24))
    {
        FUN3(VAR39, VAR9->VAR26->VAR38, VAR4->VAR38);
        FUN2(VAR11, VAR4);
        VAR21 = FUN2(VAR11, VAR9->VAR26);
        VAR9->VAR26 = NULL;
        return VAR21;
    }
    else
    {
        VAR13 = VAR14 = VAR15 = FUN7(VAR11, VAR11->VAR40, VAR11->VAR41);
        if (!VAR13)
        {
            FUN5(&VAR9->VAR26);
            FUN5(&VAR4);
            return FUN6(VAR35);
        }
        FUN8(VAR13, VAR4);
        if (VAR9->VAR13.VAR23 == VAR24 || VAR9->VAR13.VAR23 == VAR25)
        {
            VAR15 = FUN7(VAR11, VAR11->VAR40, VAR11->VAR41);
            if (!VAR15)
            {
                FUN5(&VAR14);
                FUN5(&VAR9->VAR26);
                FUN5(&VAR4);
                return FUN6(VAR35);
            }
            FUN8(VAR15, VAR9->VAR26);
        }
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        int VAR42 = VAR20 == 1 || VAR20 == 2 ? VAR9->VAR42 : 0;
        int VAR43 = VAR20 == 1 || VAR20 == 2 ? VAR9->VAR43 : 0;
        VAR9->VAR44[VAR20] = (FUN9(VAR9->VAR22.VAR45, VAR43) + VAR9->VAR22.VAR46) * VAR16->VAR47[VAR20] + FUN9(VAR9->VAR22.VAR48 * VAR9->VAR49[VAR20], VAR42);
        VAR9->VAR50[VAR20] = (FUN9(VAR9->VAR22.VAR51, VAR43) + VAR9->VAR22.VAR52) * VAR17->VAR47[VAR20] + FUN9(VAR9->VAR22.VAR53 * VAR9->VAR49[VAR20], VAR42);
        VAR18[VAR20] = (FUN9(VAR9->VAR13.VAR45, VAR43) + VAR9->VAR13.VAR46) * VAR14->VAR47[VAR20] + FUN9(VAR9->VAR13.VAR48 * VAR9->VAR49[VAR20], VAR42);
        VAR19[VAR20] = (FUN9(VAR9->VAR13.VAR51, VAR43) + VAR9->VAR13.VAR52) * VAR15->VAR47[VAR20] + FUN9(VAR9->VAR13.VAR53 * VAR9->VAR49[VAR20], VAR42);
    }
    switch (VAR9->VAR13.VAR23)
    {
    case VAR24:
    case VAR25:
        switch (VAR9->VAR22.VAR23)
        {
        case VAR31:
        case VAR32:
        case VAR33:
        case VAR34:
        case VAR27:
        case VAR28:
        case VAR29:
        case VAR30:
            VAR14->VAR54 = VAR11->VAR40;
            VAR15->VAR54 = VAR11->VAR40;
            VAR14->VAR55 = VAR11->VAR41;
            VAR15->VAR55 = VAR11->VAR41;
            for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
            {
                VAR14->VAR57[VAR20] += VAR9->VAR44[VAR20];
                VAR15->VAR57[VAR20] += VAR9->VAR50[VAR20];
            }
            break;
        default:
            goto copy;
            break;
        }
        break;
    case VAR58:
        for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
        {
            int VAR59, VAR41 = VAR9->VAR55 >> ((VAR20 == 1 || VAR20 == 2) ? VAR9->VAR43 : 0);
            int VAR60 = (VAR9->VAR61) >> ((VAR20 == 1 || VAR20 == 2) ? VAR9->VAR43 : 0);
            for (VAR59 = VAR41; VAR59 < VAR41 + VAR60; VAR59++)
                memset(VAR14->VAR57[VAR20] + VAR59 * VAR9->VAR47[VAR20], 0, VAR9->VAR47[VAR20]);
        }
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR62:
    case VAR63:
    copy:
        for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
        {
            FUN10(VAR14->VAR57[VAR20] + VAR18[VAR20], VAR14->VAR47[VAR20] * VAR9->VAR13.VAR64, VAR16->VAR57[VAR20] + VAR9->VAR44[VAR20], VAR16->VAR47[VAR20] * VAR9->VAR22.VAR64, VAR9->VAR47[VAR20], VAR9->VAR65[VAR20]);
            FUN10(VAR15->VAR57[VAR20] + VAR19[VAR20], VAR15->VAR47[VAR20] * VAR9->VAR13.VAR64, VAR17->VAR57[VAR20] + VAR9->VAR50[VAR20], VAR17->VAR47[VAR20] * VAR9->VAR22.VAR64, VAR9->VAR47[VAR20], VAR9->VAR65[VAR20]);
        }
        break;
    case VAR36:
        VAR17 = VAR16;
    case VAR37:
        switch (VAR9->VAR22.VAR23)
        {
        case VAR31:
        case VAR32:
        case VAR33:
        case VAR34:
        case VAR27:
        case VAR28:
        case VAR29:
        case VAR30:
            VAR13->VAR54 = VAR11->VAR40;
            VAR13->VAR55 = VAR11->VAR41;
            for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
            {
                VAR13->VAR57[VAR20] += VAR9->VAR44[VAR20];
            }
            break;
        default:
            for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
            {
                FUN10(VAR13->VAR57[VAR20], VAR13->VAR47[VAR20], VAR17->VAR57[VAR20] + VAR9->VAR44[VAR20], VAR17->VAR47[VAR20] * VAR9->VAR22.VAR64, VAR9->VAR47[VAR20], VAR9->VAR65[VAR20]);
            }
            break;
        }
        break;
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
    case VAR71:
    case VAR72:
    case VAR73:
    case VAR74:
    case VAR75:
    case VAR76:
    case VAR77:
    case VAR78:
    case VAR79:
    {
        ThreadData VAR80;
        VAR80.VAR16 = VAR16;
        VAR80.VAR17 = VAR17;
        VAR80.VAR13 = VAR13;
        VAR6->VAR81->FUN11(VAR6, VAR82, &VAR80, NULL, FUN12(VAR9->VAR13.VAR55, VAR6->VAR83->VAR84));
        break;
    }
    case VAR85:
    case VAR86:
        for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
        {
            int VAR87, VAR88;
            for (VAR88 = 0; VAR88 < VAR9->VAR65[VAR20]; VAR88++)
            {
                VAR89 *VAR7 = VAR13->VAR57[VAR20] + VAR13->VAR47[VAR20] * VAR88;
                VAR89 *VAR90 = VAR16->VAR57[VAR20] + VAR16->VAR47[VAR20] * VAR88 + VAR9->VAR44[VAR20];
                VAR89 *VAR91 = VAR17->VAR57[VAR20] + VAR17->VAR47[VAR20] * VAR88 + VAR9->VAR50[VAR20];
                int VAR92, VAR60;
                if (VAR9->VAR13.VAR23 == VAR85)
                    FUN3(VAR89 *, VAR90, VAR91);
                switch (VAR9->VAR49[VAR20])
                {
                case 1:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 2, VAR92++, VAR60++)
                    {
                        VAR7[VAR87] = (VAR60 & 1) == (VAR88 & 1) ? VAR90[VAR92] : VAR91[VAR92];
                        VAR7[VAR87 + 1] = (VAR60 & 1) != (VAR88 & 1) ? VAR90[VAR92] : VAR91[VAR92];
                    }
                    break;
                case 2:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 4, VAR92 += 2, VAR60++)
                    {
                        FUN13(&VAR7[VAR87], (VAR60 & 1) == (VAR88 & 1) ? FUN14(&VAR90[VAR92]) : FUN14(&VAR91[VAR92]));
                        FUN13(&VAR7[VAR87 + 2], (VAR60 & 1) != (VAR88 & 1) ? FUN14(&VAR90[VAR92]) : FUN14(&VAR91[VAR92]));
                    }
                    break;
                case 3:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 6, VAR92 += 3, VAR60++)
                    {
                        FUN15(&VAR7[VAR87], (VAR60 & 1) == (VAR88 & 1) ? FUN16(&VAR90[VAR92]) : FUN16(&VAR91[VAR92]));
                        FUN15(&VAR7[VAR87 + 3], (VAR60 & 1) != (VAR88 & 1) ? FUN16(&VAR90[VAR92]) : FUN16(&VAR91[VAR92]));
                    }
                    break;
                case 4:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 8, VAR92 += 4, VAR60++)
                    {
                        FUN17(&VAR7[VAR87], (VAR60 & 1) == (VAR88 & 1) ? FUN18(&VAR90[VAR92]) : FUN18(&VAR91[VAR92]));
                        FUN17(&VAR7[VAR87 + 4], (VAR60 & 1) != (VAR88 & 1) ? FUN18(&VAR90[VAR92]) : FUN18(&VAR91[VAR92]));
                    }
                    break;
                case 6:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 12, VAR92 += 6, VAR60++)
                    {
                        FUN19(&VAR7[VAR87], (VAR60 & 1) == (VAR88 & 1) ? FUN20(&VAR90[VAR92]) : FUN20(&VAR91[VAR92]));
                        FUN19(&VAR7[VAR87 + 6], (VAR60 & 1) != (VAR88 & 1) ? FUN20(&VAR90[VAR92]) : FUN20(&VAR91[VAR92]));
                    }
                    break;
                case 8:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 16, VAR92 += 8, VAR60++)
                    {
                        FUN21(&VAR7[VAR87], (VAR60 & 1) == (VAR88 & 1) ? FUN22(&VAR90[VAR92]) : FUN22(&VAR91[VAR92]));
                        FUN21(&VAR7[VAR87 + 8], (VAR60 & 1) != (VAR88 & 1) ? FUN22(&VAR90[VAR92]) : FUN22(&VAR91[VAR92]));
                    }
                    break;
                }
            }
        }
        break;
    case VAR93:
    case VAR94:
        for (VAR20 = 0; VAR20 < VAR9->VAR56; VAR20++)
        {
            int VAR87, VAR88;
            for (VAR88 = 0; VAR88 < VAR9->VAR65[VAR20]; VAR88++)
            {
                VAR89 *VAR7 = VAR13->VAR57[VAR20] + VAR13->VAR47[VAR20] * VAR88;
                VAR89 *VAR90 = VAR16->VAR57[VAR20] + VAR16->VAR47[VAR20] * VAR88 * VAR9->VAR22.VAR64 + VAR9->VAR44[VAR20];
                VAR89 *VAR91 = VAR17->VAR57[VAR20] + VAR17->VAR47[VAR20] * VAR88 * VAR9->VAR22.VAR64 + VAR9->VAR50[VAR20];
                int VAR92, VAR60;
                if (VAR9->VAR13.VAR23 == VAR93)
                    FUN3(VAR89 *, VAR90, VAR91);
                switch (VAR9->VAR49[VAR20])
                {
                case 1:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 2, VAR92++, VAR60++)
                    {
                        VAR7[VAR87] = VAR60 & 1 ? VAR90[VAR92] : VAR91[VAR92];
                        VAR7[VAR87 + 1] = !(VAR60 & 1) ? VAR90[VAR92] : VAR91[VAR92];
                    }
                    break;
                case 2:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 4, VAR92 += 2, VAR60++)
                    {
                        FUN13(&VAR7[VAR87], VAR60 & 1 ? FUN14(&VAR90[VAR92]) : FUN14(&VAR91[VAR92]));
                        FUN13(&VAR7[VAR87 + 2], !(VAR60 & 1) ? FUN14(&VAR90[VAR92]) : FUN14(&VAR91[VAR92]));
                    }
                    break;
                case 3:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 6, VAR92 += 3, VAR60++)
                    {
                        FUN15(&VAR7[VAR87], VAR60 & 1 ? FUN16(&VAR90[VAR92]) : FUN16(&VAR91[VAR92]));
                        FUN15(&VAR7[VAR87 + 3], !(VAR60 & 1) ? FUN16(&VAR90[VAR92]) : FUN16(&VAR91[VAR92]));
                    }
                    break;
                case 4:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 8, VAR92 += 4, VAR60++)
                    {
                        FUN17(&VAR7[VAR87], VAR60 & 1 ? FUN18(&VAR90[VAR92]) : FUN18(&VAR91[VAR92]));
                        FUN17(&VAR7[VAR87 + 4], !(VAR60 & 1) ? FUN18(&VAR90[VAR92]) : FUN18(&VAR91[VAR92]));
                    }
                    break;
                case 6:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 12, VAR92 += 6, VAR60++)
                    {
                        FUN19(&VAR7[VAR87], VAR60 & 1 ? FUN20(&VAR90[VAR92]) : FUN20(&VAR91[VAR92]));
                        FUN19(&VAR7[VAR87 + 6], !(VAR60 & 1) ? FUN20(&VAR90[VAR92]) : FUN20(&VAR91[VAR92]));
                    }
                    break;
                case 8:
                    for (VAR87 = 0, VAR60 = 0, VAR92 = 0; VAR87 < VAR9->VAR47[VAR20] * 2; VAR87 += 16, VAR92 += 8, VAR60++)
                    {
                        FUN21(&VAR7[VAR87], VAR60 & 1 ? FUN22(&VAR90[VAR92]) : FUN22(&VAR91[VAR92]));
                        FUN21(&VAR7[VAR87 + 8], !(VAR60 & 1) ? FUN22(&VAR90[VAR92]) : FUN22(&VAR91[VAR92]));
                    }
                    break;
                }
            }
        }
        break;
    default:
        FUN23(0);
    }
    if (VAR15 != VAR14)
    {
        if (VAR9->VAR13.VAR23 == VAR24)
            FUN3(VAR3 *, VAR14, VAR15);
        VAR15->VAR38 = VAR9->VAR26->VAR38 * 2;
        FUN2(VAR11, VAR15);
        VAR13 = VAR14;
        VAR14->VAR38 = VAR9->VAR26->VAR38 + VAR4->VAR38;
        FUN5(&VAR9->VAR26);
        VAR9->VAR26 = VAR4;
    }
    else if (VAR9->VAR22.VAR23 == VAR24 || VAR9->VAR22.VAR23 == VAR25)
    {
        VAR13->VAR38 = VAR9->VAR26->VAR38 / 2;
        FUN5(&VAR9->VAR26);
        FUN5(&VAR4);
    }
    else
    {
        FUN5(&VAR9->VAR26);
        FUN5(&VAR4);
    }
    return FUN2(VAR11, VAR13);
}