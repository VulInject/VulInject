static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    offset_t VAR7 = 0;
    uint32_t VAR8;
    unsigned VAR9 = VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    VAR13 *VAR14 = VAR2->VAR15[0];
    VAR6 = FUN2(VAR12, &VAR8);
    if (VAR6 < 0 || VAR8 != FUN3('', '', '', ''))
        return VAR16;
    VAR8 = FUN4(VAR12);
    if (VAR8 == FUN3('', '', '', ''))
        VAR9 = VAR17;
    else if (VAR8 != FUN3('', '', '', ''))
        return VAR16;
    VAR6 -= 4;
    VAR14 = FUN5(VAR2, 0);
    if (!VAR14)
        return FUN6(VAR18);
    while (VAR6 > 0)
    {
        VAR5 = FUN2(VAR12, &VAR8);
        if (VAR5 < 0)
            return VAR5;
        VAR6 -= VAR5 + 8;
        switch (VAR8)
        {
        case FUN3('', '', '', ''):
            VAR14->VAR19 = FUN7(VAR12, VAR14->VAR20, VAR5, VAR9);
            if (VAR14->VAR19 < 0)
                return VAR14->VAR19;
            if (VAR7 > 0)
                goto VAR21;
            break;
        case FUN3('', '', '', ''):
            VAR9 = FUN8(VAR12);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR12, VAR2->VAR22, sizeof(VAR2->VAR22), VAR5);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR12, VAR2->VAR23, sizeof(VAR2->VAR23), VAR5);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR12, VAR2->VAR24, sizeof(VAR2->VAR24), VAR5);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR12, VAR2->VAR25, sizeof(VAR2->VAR25), VAR5);
            break;
        case FUN3('', '', '', ''):
            VAR7 = FUN8(VAR12);
            FUN8(VAR12);
            VAR7 += FUN10(VAR12);
            if (VAR14->VAR20->VAR26)
                goto VAR21;
            if (FUN11(VAR12))
            {
                FUN12(VAR2, VAR27, "");
            }
            FUN13(VAR12, VAR5 - 8);
            break;
        case FUN3('', '', '', ''):
            VAR14->VAR20->VAR28 = FUN14(VAR5 + VAR29);
            if (!VAR14->VAR20->VAR28)
                return FUN6(VAR18);
            VAR14->VAR20->VAR30 = VAR5;
            FUN15(VAR12, VAR14->VAR20->VAR28, VAR5);
            break;
        default:
            if (VAR5 & 1)
                VAR5++;
            FUN13(VAR12, VAR5);
        }
    }
    return VAR16;
VAR21:
    if (VAR14->VAR19)
        VAR2->VAR31 = VAR14->VAR19 * VAR14->VAR20->VAR32;
    FUN16(VAR14, 64, 1, VAR14->VAR20->VAR33);
    VAR14->VAR34 = 0;
    VAR14->VAR35 = VAR14->VAR20->VAR36 ? VAR14->VAR19 * VAR14->VAR20->VAR36 : VAR14->VAR19;
    FUN17(VAR12, VAR7, VAR37);
    return 0;