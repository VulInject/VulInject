static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int64_t VAR6 = 0, VAR7;
    uint32_t VAR8;
    unsigned VAR9 = VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    VAR18 *VAR19 = NULL;
    VAR5 = FUN2(VAR12, &VAR8);
    if (VAR5 < 0 || VAR8 != FUN3('', '', '', ''))
        return VAR20;
    VAR8 = FUN4(VAR12);
    if (VAR8 == FUN3('', '', '', ''))
        VAR9 = VAR21;
    else if (VAR8 != FUN3('', '', '', ''))
        return VAR20;
    VAR5 -= 4;
    VAR14 = FUN5(VAR2, NULL);
    if (!VAR14)
        return FUN6(VAR22);
    while (VAR5 > 0)
    {
        VAR4 = FUN2(VAR12, &VAR8);
        if (VAR4 == VAR23 && VAR6 > 0 && VAR14->VAR24->VAR25)
        {
            FUN7(VAR2, VAR26, "");
            goto VAR27;
        }
        if (VAR4 < 0)
            return VAR4;
        VAR5 -= VAR4 + 8;
        switch (VAR8)
        {
        case FUN3('', '', '', ''):
            VAR14->VAR28 = FUN8(VAR2, VAR4, VAR9);
            if (VAR14->VAR28 < 0)
                return VAR14->VAR28;
            if (VAR6 > 0)
                goto VAR27;
            break;
        case FUN3('', '', '', ''):
            VAR7 = FUN9(VAR12);
            FUN10(VAR2, VAR29, &VAR19, VAR4);
            if (VAR19)
                if ((VAR3 = FUN11(VAR2, &VAR19)) < 0)
                {
                    FUN12(&VAR19);
                    return VAR3;
                }
            FUN12(&VAR19);
            if (VAR7 + VAR4 > FUN9(VAR12))
                FUN13(VAR12, VAR7 + VAR4 - FUN9(VAR12));
            break;
        case FUN3('', '', '', ''):
            VAR9 = FUN14(VAR12);
            break;
        case FUN3('', '', '', ''):
            FUN15(VAR2, "", VAR4);
            break;
        case FUN3('', '', '', ''):
            FUN15(VAR2, "", VAR4);
            break;
        case FUN3('', '', '', ''):
            FUN15(VAR2, "", VAR4);
            break;
        case FUN3('', '', '', ''):
            FUN15(VAR2, "", VAR4);
            break;
        case FUN3('', '', '', ''):
            VAR16->VAR30 = FUN9(VAR12) + VAR4;
            VAR6 = FUN14(VAR12);
            FUN14(VAR12);
            VAR6 += FUN9(VAR12);
            if (VAR14->VAR24->VAR25 && !VAR12->VAR31)
                goto VAR27;
            if (!VAR12->VAR31)
            {
                FUN7(VAR2, VAR32, "");
                return -1;
            }
            FUN13(VAR12, VAR4 - 8);
            break;
        case FUN3('', '', '', ''):
            if ((VAR33)VAR4 > (1 << 30))
                return -1;
            if (FUN16(VAR2, VAR14->VAR24, VAR12, VAR4) < 0)
                return FUN6(VAR22);
            if ((VAR14->VAR24->VAR34 == VAR35 || VAR14->VAR24->VAR34 == VAR36) && VAR4 >= 12 * 4 && !VAR14->VAR24->VAR25)
            {
                VAR14->VAR24->VAR25 = FUN17(VAR14->VAR24->VAR37 + 11 * 4);
                VAR16->VAR38 = FUN17(VAR14->VAR24->VAR37 + 9 * 4);
            }
            else if (VAR14->VAR24->VAR34 == VAR39)
            {
                char VAR40 = 0;
                if (VAR4 >= 25)
                    VAR40 = VAR14->VAR24->VAR37[24];
                switch (VAR40)
                {
                case '':
                    VAR14->VAR24->VAR25 = 17;
                    break;
                case '':
                default:
                    VAR14->VAR24->VAR25 = 35;
                }
                VAR16->VAR38 = 160;
                VAR14->VAR24->VAR41 = VAR14->VAR24->VAR42 * (VAR14->VAR24->VAR25 << 3) / VAR16->VAR38;
            }
            break;
        case FUN3('', '', '', ''):
            if (FUN18(VAR2, VAR12, VAR14, VAR4) < 0)
                return VAR20;
            break;
        case 0:
            if (VAR6 > 0 && VAR14->VAR24->VAR25)
                goto VAR27;
        default:
            if (VAR4 & 1)
                VAR4++;
            FUN13(VAR12, VAR4);
        }
    }
VAR27:
    if (!VAR14->VAR24->VAR25 && VAR14->VAR24->VAR34 == VAR39)
    {
        FUN7(VAR2, VAR26, "");
        VAR14->VAR24->VAR25 = 35;
    }
    else if (!VAR14->VAR24->VAR25)
    {
        FUN7(VAR2, VAR32, "");
        return -1;
    }
    FUN19(VAR14, 64, 1, VAR14->VAR24->VAR42);
    VAR14->VAR43 = 0;
    VAR14->VAR44 = VAR14->VAR28 * VAR16->VAR38;
    FUN20(VAR12, VAR6, VAR45);
    return 0;
}