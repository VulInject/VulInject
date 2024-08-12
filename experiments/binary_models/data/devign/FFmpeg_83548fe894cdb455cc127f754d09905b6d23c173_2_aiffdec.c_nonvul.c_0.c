static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int64_t VAR5 = 0;
    uint32_t VAR6;
    unsigned VAR7 = VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR4 = FUN2(VAR10, &VAR6);
    if (VAR4 < 0 || VAR6 != FUN3('', '', '', ''))
        return VAR16;
    VAR6 = FUN4(VAR10);
    if (VAR6 == FUN3('', '', '', ''))
        VAR7 = VAR17;
    else if (VAR6 != FUN3('', '', '', ''))
        return VAR16;
    VAR4 -= 4;
    VAR12 = FUN5(VAR2, NULL);
    if (!VAR12)
        return FUN6(VAR18);
    while (VAR4 > 0)
    {
        VAR3 = FUN2(VAR10, &VAR6);
        if (VAR3 < 0)
            return VAR3;
        VAR4 -= VAR3 + 8;
        switch (VAR6)
        {
        case FUN3('', '', '', ''):
            VAR12->VAR19 = FUN7(VAR2, VAR3, VAR7);
            if (VAR12->VAR19 < 0)
                return VAR12->VAR19;
            if (VAR5 > 0)
                goto VAR20;
            break;
        case FUN3('', '', '', ''):
            VAR7 = FUN8(VAR10);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR2, "", VAR3);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR2, "", VAR3);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR2, "", VAR3);
            break;
        case FUN3('', '', '', ''):
            FUN9(VAR2, "", VAR3);
            break;
        case FUN3('', '', '', ''):
            VAR14->VAR21 = FUN10(VAR10) + VAR3;
            VAR5 = FUN8(VAR10);
            FUN8(VAR10);
            VAR5 += FUN10(VAR10);
            if (VAR12->VAR22->VAR23)
                goto VAR20;
            if (!(VAR10->VAR24 & VAR25))
            {
                FUN11(VAR2, VAR26, "");
                return -1;
            }
            FUN12(VAR10, VAR3 - 8);
            break;
        case FUN3('', '', '', ''):
            if ((VAR27)VAR3 > (1 << 30))
                return -1;
            VAR12->VAR22->VAR28 = FUN13(VAR3 + VAR29);
            if (!VAR12->VAR22->VAR28)
                return FUN6(VAR18);
            VAR12->VAR22->VAR30 = VAR3;
            FUN14(VAR10, VAR12->VAR22->VAR28, VAR3);
            break;
        default:
            FUN12(VAR10, VAR3);
        }
        if (VAR3 & 1)
        {
            VAR4--;
            FUN12(VAR10, 1);
        }
    }
VAR20:
    if (!VAR12->VAR22->VAR23)
    {
        FUN11(VAR2, VAR26, "");
        return -1;
    }
    FUN15(VAR12, 64, 1, VAR12->VAR22->VAR31);
    VAR12->VAR32 = 0;
    VAR12->VAR33 = VAR12->VAR19 * VAR14->VAR34;
    FUN16(VAR10, VAR5, VAR35);
    return 0;
}