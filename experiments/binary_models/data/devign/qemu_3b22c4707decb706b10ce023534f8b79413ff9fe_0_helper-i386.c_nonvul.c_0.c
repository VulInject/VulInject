static void FUN1(int VAR1, int VAR2, int VAR3, unsigned int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    uint32_t VAR25, VAR26, VAR27, VAR28;
    VAR6 = &VAR29->VAR30;
    if (VAR1 * 8 + 7 > VAR6->VAR31)
        FUN2(VAR32, VAR1 * 8 + 2);
    VAR8 = VAR6->VAR33 + VAR1 * 8;
    VAR17 = FUN3(VAR8);
    VAR18 = FUN3(VAR8 + 4);
    VAR10 = (VAR18 >> VAR34) & 0x1f;
    switch (VAR10)
    {
    case 5:
        FUN4(VAR29, "");
        break;
    case 6:
    case 7:
    case 14:
    case 15:
        break;
    default:
        FUN2(VAR32, VAR1 * 8 + 2);
        break;
    }
    VAR11 = (VAR18 >> VAR35) & 3;
    if (VAR2 && VAR11 < VAR29->VAR36)
        FUN2(VAR32, VAR1 * 8 + 2);
    if (!(VAR18 & VAR37))
        FUN2(VAR38, VAR1 * 8 + 2);
    VAR12 = VAR17 >> 16;
    VAR19 = (VAR18 & 0xffff0000) | (VAR17 & 0x0000ffff);
    if ((VAR12 & 0xfffc) == 0)
        FUN2(VAR32, 0);
    if (FUN5(&VAR17, &VAR18, VAR12) != 0)
        FUN2(VAR32, VAR12 & 0xfffc);
    if (!(VAR18 & VAR39) || !(VAR18 & (VAR40)))
        FUN2(VAR32, VAR12 & 0xfffc);
    VAR11 = (VAR18 >> VAR35) & 3;
    if (VAR11 > VAR29->VAR36)
        FUN2(VAR32, VAR12 & 0xfffc);
    if (!(VAR18 & VAR37))
        FUN2(VAR38, VAR12 & 0xfffc);
    if (!(VAR18 & VAR41) && VAR11 < VAR29->VAR36)
    {
        FUN6(&VAR20, &VAR21, VAR11);
        if ((VAR20 & 0xfffc) == 0)
            FUN2(VAR42, VAR20 & 0xfffc);
        if ((VAR20 & 3) != VAR11)
            FUN2(VAR42, VAR20 & 0xfffc);
        if (FUN5(&VAR22, &VAR23, VAR20) != 0)
            FUN2(VAR42, VAR20 & 0xfffc);
        VAR13 = (VAR23 >> VAR35) & 3;
        if (VAR13 != VAR11)
            FUN2(VAR42, VAR20 & 0xfffc);
        if (!(VAR23 & VAR39) || (VAR23 & VAR40) || !(VAR23 & VAR43))
            FUN2(VAR42, VAR20 & 0xfffc);
        if (!(VAR23 & VAR37))
            FUN2(VAR42, VAR20 & 0xfffc);
        VAR15 = 1;
    }
    else if ((VAR18 & VAR41) || VAR11 == VAR29->VAR36)
    {
        VAR15 = 0;
    }
    else
    {
        FUN2(VAR32, VAR12 & 0xfffc);
        VAR15 = 0;
    }
    VAR16 = VAR10 >> 3;
    VAR14 = 0;
    if (!VAR2)
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
            VAR14 = 1;
            break;
        }
    }
    VAR24 = 6 + (VAR15 << 2) + (VAR14 << 1);
    if (VAR29->VAR44 & VAR45)
        VAR24 += 8;
    VAR24 <<= VAR16;
    if (VAR15)
    {
        VAR27 = VAR46;
        VAR26 = VAR29->VAR47[VAR48].VAR12;
        FUN7(VAR48, VAR20, VAR29->VAR49);
    }
    else
    {
        VAR27 = 0;
        VAR26 = 0;
        VAR21 = VAR46;
    }
    if (VAR2)
        VAR28 = VAR4;
    else
        VAR28 = VAR29->VAR49;
    VAR25 = VAR29->VAR47[VAR50].VAR12;
    FUN7(VAR50, VAR12, VAR29->VAR49);
    VAR29->VAR49 = VAR19;
    VAR46 = VAR21 - VAR24;
    VAR9 = VAR29->VAR47[VAR48].VAR33 + VAR21;
    if (VAR16 == 1)
    {
        int VAR51;
        if (VAR29->VAR44 & VAR45)
        {
            VAR9 -= 4;
            FUN8(VAR9, VAR29->VAR47[VAR52].VAR12);
            VAR9 -= 4;
            FUN8(VAR9, VAR29->VAR47[VAR53].VAR12);
            VAR9 -= 4;
            FUN8(VAR9, VAR29->VAR47[VAR54].VAR12);
            VAR9 -= 4;
            FUN8(VAR9, VAR29->VAR47[VAR55].VAR12);
        }
        if (VAR15)
        {
            VAR9 -= 4;
            FUN8(VAR9, VAR26);
            VAR9 -= 4;
            FUN8(VAR9, VAR27);
        }
        VAR9 -= 4;
        VAR51 = FUN9();
        FUN8(VAR9, VAR51);
        VAR9 -= 4;
        FUN8(VAR9, VAR25);
        VAR9 -= 4;
        FUN8(VAR9, VAR28);
        if (VAR14)
        {
            VAR9 -= 4;
            FUN8(VAR9, VAR3);
        }
    }
    else
    {
        if (VAR15)
        {
            VAR9 -= 2;
            FUN10(VAR9, VAR26);
            VAR9 -= 2;
            FUN10(VAR9, VAR27);
        }
        VAR9 -= 2;
        FUN10(VAR9, FUN9());
        VAR9 -= 2;
        FUN10(VAR9, VAR25);
        VAR9 -= 2;
        FUN10(VAR9, VAR28);
        if (VAR14)
        {
            VAR9 -= 2;
            FUN10(VAR9, VAR3);
        }
    }
    if ((VAR10 & 1) == 0)
    {
        VAR29->VAR44 &= ~VAR56;
    }
    VAR29->VAR44 &= ~(VAR57 | VAR45 | VAR58 | VAR59);
}