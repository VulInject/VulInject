static void FUN1(int VAR1, int VAR2, int VAR3, unsigned int VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    uint32_t VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    uint32_t VAR27;
    VAR17 = 0;
    if (!VAR2 && !VAR5)
    {
        switch (VAR1)
        {
        case 8:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 17:
            VAR17 = 1;
            break;
        }
    }
    VAR7 = &VAR28->VAR29;
    if (VAR1 * 8 + 7 > VAR7->VAR30)
        FUN2(VAR31, VAR1 * 8 + 2);
    VAR9 = VAR7->VAR32 + VAR1 * 8;
    VAR20 = FUN3(VAR9);
    VAR21 = FUN3(VAR9 + 4);
    VAR11 = (VAR21 >> VAR33) & 0x1f;
    switch (VAR11)
    {
    case 5:
        if (!(VAR21 & VAR34))
            FUN2(VAR35, VAR1 * 8 + 2);
        FUN4(VAR1 * 8, VAR20, VAR21, VAR36);
        if (VAR17)
        {
            int VAR37;
            VAR19 = (VAR28->VAR38[VAR39].VAR40 >> VAR41) & 1;
            if (VAR28->VAR38[VAR42].VAR40 & VAR43)
                VAR37 = 0xffffffff;
            else
                VAR37 = 0xffff;
            VAR24 = (VAR28->VAR44[VAR45] - (2 << VAR19)) & VAR37;
            VAR10 = VAR28->VAR38[VAR42].VAR32 + VAR24;
            if (VAR19)
                FUN5(VAR10, VAR3);
            else
                FUN6(VAR10, VAR3);
            VAR28->VAR44[VAR45] = (VAR24 & VAR37) | (VAR28->VAR44[VAR45] & ~VAR37);
        }
        return;
    case 6:
    case 7:
    case 14:
    case 15:
        break;
    default:
        FUN2(VAR31, VAR1 * 8 + 2);
        break;
    }
    VAR12 = (VAR21 >> VAR46) & 3;
    VAR15 = VAR28->VAR47 & VAR48;
    if (VAR2 && VAR12 < VAR15)
        FUN2(VAR31, VAR1 * 8 + 2);
    if (!(VAR21 & VAR34))
        FUN2(VAR35, VAR1 * 8 + 2);
    VAR13 = VAR20 >> 16;
    VAR22 = (VAR21 & 0xffff0000) | (VAR20 & 0x0000ffff);
    if ((VAR13 & 0xfffc) == 0)
        FUN2(VAR31, 0);
    if (FUN7(&VAR20, &VAR21, VAR13) != 0)
        FUN2(VAR31, VAR13 & 0xfffc);
    if (!(VAR21 & VAR49) || !(VAR21 & (VAR50)))
        FUN2(VAR31, VAR13 & 0xfffc);
    VAR12 = (VAR21 >> VAR46) & 3;
    if (VAR12 > VAR15)
        FUN2(VAR31, VAR13 & 0xfffc);
    if (!(VAR21 & VAR34))
        FUN2(VAR35, VAR13 & 0xfffc);
    if (!(VAR21 & VAR51) && VAR12 < VAR15)
    {
        FUN8(&VAR23, &VAR24, VAR12);
        if ((VAR23 & 0xfffc) == 0)
            FUN2(VAR52, VAR23 & 0xfffc);
        if ((VAR23 & 3) != VAR12)
            FUN2(VAR52, VAR23 & 0xfffc);
        if (FUN7(&VAR25, &VAR26, VAR23) != 0)
            FUN2(VAR52, VAR23 & 0xfffc);
        VAR14 = (VAR26 >> VAR46) & 3;
        if (VAR14 != VAR12)
            FUN2(VAR52, VAR23 & 0xfffc);
        if (!(VAR26 & VAR49) || (VAR26 & VAR50) || !(VAR26 & VAR53))
            FUN2(VAR52, VAR23 & 0xfffc);
        if (!(VAR26 & VAR34))
            FUN2(VAR52, VAR23 & 0xfffc);
        VAR18 = 1;
        VAR16 = FUN9(VAR26);
        VAR10 = FUN10(VAR25, VAR26);
    }
    else if ((VAR21 & VAR51) || VAR12 == VAR15)
    {
        if (VAR28->VAR54 & VAR55)
            FUN2(VAR31, VAR13 & 0xfffc);
        VAR18 = 0;
        VAR16 = FUN9(VAR28->VAR38[VAR42].VAR40);
        VAR10 = VAR28->VAR38[VAR42].VAR32;
        VAR24 = VAR56;
    }
    else
    {
        FUN2(VAR31, VAR13 & 0xfffc);
        VAR18 = 0;
        VAR16 = 0;
        VAR10 = NULL;
        VAR24 = 0;
    }
    VAR19 = VAR11 >> 3;
    VAR57 = 6 + (VAR18 << 2) + (VAR17 << 1);
    if (VAR28->VAR54 & VAR55)
        VAR57 += 8;
    VAR57 <<= VAR19;
    if (VAR2)
        VAR27 = VAR4;
    else
        VAR27 = VAR28->VAR58;
    if (VAR19 == 1)
    {
        if (VAR18)
        {
            if (VAR28->VAR54 & VAR55)
            {
                FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR59].VAR13);
                FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR60].VAR13);
                FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR61].VAR13);
                FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR62].VAR13);
            }
            FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR42].VAR13);
            FUN11(VAR10, VAR24, VAR16, VAR56);
        }
        FUN11(VAR10, VAR24, VAR16, FUN12());
        FUN11(VAR10, VAR24, VAR16, VAR28->VAR38[VAR39].VAR13);
        FUN11(VAR10, VAR24, VAR16, VAR27);
        if (VAR17)
        {
            FUN11(VAR10, VAR24, VAR16, VAR3);
        }
    }
    else
    {
        if (VAR18)
        {
            if (VAR28->VAR54 & VAR55)
            {
                FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR59].VAR13);
                FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR60].VAR13);
                FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR61].VAR13);
                FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR62].VAR13);
            }
            FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR42].VAR13);
            FUN13(VAR10, VAR24, VAR16, VAR56);
        }
        FUN13(VAR10, VAR24, VAR16, FUN12());
        FUN13(VAR10, VAR24, VAR16, VAR28->VAR38[VAR39].VAR13);
        FUN13(VAR10, VAR24, VAR16, VAR27);
        if (VAR17)
        {
            FUN13(VAR10, VAR24, VAR16, VAR3);
        }
    }
    if (VAR18)
    {
        if (VAR28->VAR54 & VAR55)
        {
            VAR28->VAR38[VAR62].VAR13 = 0;
            VAR28->VAR38[VAR62].VAR40 = 0;
            VAR28->VAR38[VAR61].VAR13 = 0;
            VAR28->VAR38[VAR61].VAR40 = 0;
            VAR28->VAR38[VAR60].VAR13 = 0;
            VAR28->VAR38[VAR60].VAR40 = 0;
            VAR28->VAR38[VAR59].VAR13 = 0;
            VAR28->VAR38[VAR59].VAR40 = 0;
        }
        VAR23 = (VAR23 & ~3) | VAR12;
        FUN14(VAR28, VAR42, VAR23, VAR10, FUN15(VAR25, VAR26), VAR26);
    }
    VAR56 = (VAR56 & ~VAR16) | (VAR24 & VAR16);
    VAR13 = (VAR13 & ~3) | VAR12;
    FUN14(VAR28, VAR39, VAR13, FUN10(VAR20, VAR21), FUN15(VAR20, VAR21), VAR21);
    FUN16(VAR28, VAR12);
    VAR28->VAR58 = VAR22;
    if ((VAR11 & 1) == 0)
    {
        VAR28->VAR54 &= ~VAR63;
    }
    VAR28->VAR54 &= ~(VAR64 | VAR55 | VAR65 | VAR66);
}