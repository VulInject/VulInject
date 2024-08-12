static int FUN1(enum AVPixelFormat VAR1, enum AVPixelFormat VAR2, unsigned *VAR3, unsigned VAR4)
{
    const VAR5 *VAR6 = FUN2(VAR2);
    const VAR5 *VAR7 = FUN2(VAR1);
    int VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18 = VAR19 - 1;
    if (!VAR6 || !VAR7)
        return -4;
    if ((VAR6->VAR20 & VAR21) || (VAR7->VAR20 & VAR21))
    {
        if (VAR1 == VAR2)
            return -1;
        else
            return -2;
    }
    *VAR3 = VAR15 = 0;
    if (VAR1 == VAR2)
        return VAR19;
    if ((VAR14 = FUN3(&VAR10, &VAR11, VAR2)) < 0)
        return -3;
    if ((VAR14 = FUN3(&VAR12, &VAR13, VAR1)) < 0)
        return -3;
    VAR8 = FUN4(VAR6);
    VAR9 = FUN4(VAR7);
    if (VAR1 == VAR22)
        VAR17 = FUN5(VAR6->VAR17, 4);
    else
        VAR17 = FUN5(VAR6->VAR17, VAR7->VAR17);
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        int VAR23 = (VAR1 == VAR22) ? 7 / VAR17 : (VAR7->VAR24[VAR16].VAR25 - 1);
        if (VAR6->VAR24[VAR16].VAR25 - 1 > VAR23 && (VAR4 & VAR26))
        {
            VAR15 |= VAR26;
            VAR18 -= 65536 >> VAR23;
        }
    }
    if (VAR4 & VAR27)
    {
        if (VAR7->VAR28 > VAR6->VAR28)
        {
            VAR15 |= VAR27;
            VAR18 -= 256 << VAR7->VAR28;
        }
        if (VAR7->VAR29 > VAR6->VAR29)
        {
            VAR15 |= VAR27;
            VAR18 -= 256 << VAR7->VAR29;
        }
        if (VAR7->VAR28 == 1 && VAR6->VAR28 == 0 && VAR7->VAR29 == 1 && VAR6->VAR29 == 0)
        {
            VAR18 += 512;
        }
    }
    if (VAR4 & VAR30)
        switch (VAR9)
        {
        case VAR31:
            if (VAR8 != VAR31 && VAR8 != VAR32)
                VAR15 |= VAR30;
            break;
        case VAR32:
            if (VAR8 != VAR32)
                VAR15 |= VAR30;
            break;
        case VAR33:
            if (VAR8 != VAR33)
                VAR15 |= VAR30;
            break;
        case VAR34:
            if (VAR8 != VAR34 && VAR8 != VAR33 && VAR8 != VAR32)
                VAR15 |= VAR30;
            break;
        default:
            if (VAR8 != VAR9)
                VAR15 |= VAR30;
            break;
        }
    if (VAR15 & VAR30)
        VAR18 -= (VAR17 * 65536) >> FUN5(VAR7->VAR24[0].VAR25 - 1, VAR6->VAR24[0].VAR25 - 1);
    if (VAR9 == VAR32 && VAR8 != VAR32 && (VAR4 & VAR35))
    {
        VAR15 |= VAR35;
        VAR18 -= 2 * 65536;
    }
    if (!FUN6(VAR7) && (FUN6(VAR6) && (VAR4 & VAR36)))
    {
        VAR15 |= VAR36;
        VAR18 -= 65536;
    }
    if (VAR1 == VAR22 && (VAR4 & VAR37) && (VAR2 != VAR22 && (VAR8 != VAR32 || (FUN6(VAR6) && (VAR4 & VAR36)))))
    {
        VAR15 |= VAR37;
        VAR18 -= 65536;
    }
    *VAR3 = VAR15;
    return VAR18;
}