long FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3, int VAR4, int VAR5, target_ulong VAR6)
{
    target_ulong VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    long VAR14;
    FUN2(VAR15) || FUN2(VAR16) static target_ulong VAR17 = 0x40000000;
    static target_ulong VAR17 = 0x18000000;
    {
        FUN3("", VAR1, VAR2, VAR3 & VAR18 ? '' : '', VAR3 & VAR19 ? '' : '', VAR3 & VAR20 ? '' : '');
        if (VAR4 & VAR21)
            FUN3("");
        if (VAR4 & VAR22)
            FUN3("");
        switch (VAR4 & VAR23)
        {
        case VAR24:
            FUN3("");
            break;
        case VAR25:
            FUN3("");
            break;
        default:
            FUN3("", VAR4 & VAR23);
            break;
        }
        FUN3("", VAR5, VAR6);
    }
    if (VAR6 & ~VAR26)
    {
        VAR27 = VAR28;
        return -1;
    }
    VAR2 = FUN4(VAR2);
    if (VAR2 == 0)
        return VAR1;
    VAR9 = VAR1 & VAR29;
    if (!(VAR4 & VAR21))
    {
        FUN2(VAR15) || FUN2(VAR16) || FUN2(VAR30) if (VAR9 == 0)
        {
            VAR9 = VAR17;
            VAR17 += FUN5(VAR2);
        }
        if (0 && VAR31 != VAR32)
        {
            FUN6();
            VAR13 = FUN5(VAR2) + VAR31 - VAR33;
            VAR9 = (long)FUN7(FUN8(VAR9), VAR13, VAR34, VAR24 | VAR22, -1, 0);
            if (VAR9 == -1)
                return VAR9;
            VAR10 = VAR9 + VAR13;
            VAR1 = FUN5(VAR9);
            VAR8 = VAR1 + FUN5(VAR2);
            if (VAR1 > VAR9)
                FUN9((void *)VAR9, VAR1 - VAR9);
            if (VAR8 < VAR10)
                FUN9((void *)VAR8, VAR10 - VAR8);
            VAR4 |= VAR21;
        }
        else
        {
            VAR12 = VAR6 & VAR29;
            VAR13 = VAR2 + VAR6 - VAR12;
            VAR14 = (long)FUN7(VAR9 ? FUN8(VAR9) : NULL, VAR13, VAR3, VAR4, VAR5, VAR12);
            if (VAR14 == -1)
                return VAR14;
            if (!(VAR4 & VAR22))
                VAR14 += VAR6 - VAR12;
            VAR1 = FUN10(VAR14);
            goto VAR35;
        }
    }
    if (VAR1 & ~VAR26)
    {
        VAR27 = VAR28;
        return -1;
    }
    VAR8 = VAR1 + VAR2;
    VAR10 = FUN5(VAR8);
    if (!(VAR4 & VAR22) && (VAR6 & ~VAR29) != (VAR1 & ~VAR29))
    {
        if ((VAR4 & VAR23) == VAR25 && (VAR3 & VAR19))
        {
            VAR27 = VAR28;
            return -1;
        }
        VAR11 = FUN1(VAR1, VAR2, VAR3 | VAR19, VAR21 | VAR24 | VAR22, -1, 0);
        if (VAR11 == -1)
            return VAR11;
        pread(VAR5, FUN8(VAR1), VAR2, VAR6);
        if (!(VAR3 & VAR19))
        {
            VAR7 = FUN11(VAR1, VAR2, VAR3);
            if (VAR7 != 0)
                return VAR7;
        }
        goto VAR36;
    }
    if (VAR1 > VAR9)
    {
        if (VAR10 == VAR9 + VAR31)
        {
            VAR7 = FUN12(VAR9, VAR1, VAR8, VAR3, VAR4, VAR5, VAR6);
            if (VAR7 == -1)
                return VAR7;
            goto VAR35;
        }
        VAR7 = FUN12(VAR9, VAR1, VAR9 + VAR31, VAR3, VAR4, VAR5, VAR6);
        if (VAR7 == -1)
            return VAR7;
        VAR9 += VAR31;
    }
    if (VAR8 < VAR10)
    {
        VAR7 = FUN12(VAR10 - VAR31, VAR10 - VAR31, VAR10, VAR3, VAR4, VAR5, VAR6 + VAR10 - VAR31 - VAR1);
        if (VAR7 == -1)
            return VAR7;
        VAR10 -= VAR31;
    }
    if (VAR9 < VAR10)
    {
        unsigned long VAR37;
        if (VAR4 & VAR22)
            VAR37 = 0;
        else
            VAR37 = VAR6 + VAR9 - VAR1;
        VAR7 = (long)FUN7(FUN8(VAR9), VAR10 - VAR9, VAR3, VAR4, VAR5, VAR37);
        if (VAR7 == -1)
            return VAR7;
    }
VAR35:
    FUN13(VAR1, VAR1 + VAR2, VAR3 | VAR38);
VAR36:
    FUN3("", (long)VAR1);
    FUN14(VAR39);
    FUN3("");
    return VAR1;
}