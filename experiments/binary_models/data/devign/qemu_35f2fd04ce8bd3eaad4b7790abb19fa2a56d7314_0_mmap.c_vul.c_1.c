VAR1 FUN1(abi_ulong VAR2, abi_ulong VAR3, int VAR4, int VAR5, int VAR6, abi_ulong VAR7)
{
    abi_ulong VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    FUN2();
    {
        FUN3("" VAR15 "" VAR15 "", VAR2, VAR3, VAR4 & VAR16 ? '' : '', VAR4 & VAR17 ? '' : '', VAR4 & VAR18 ? '' : '');
        if (VAR5 & VAR19)
            FUN3("");
        if (VAR5 & VAR20)
            FUN3("");
        switch (VAR5 & VAR21)
        {
        case VAR22:
            FUN3("");
            break;
        case VAR23:
            FUN3("");
            break;
        default:
            FUN3("", VAR5 & VAR21);
            break;
        }
        FUN3("" VAR15 "", VAR6, VAR7);
    }
    if (VAR7 & ~VAR24)
    {
        VAR25 = VAR26;
        goto VAR27;
    }
    VAR3 = FUN4(VAR3);
    if (VAR3 == 0)
        goto VAR28;
    VAR10 = VAR2 & VAR29;
    VAR13 = VAR7 & VAR29;
    if (!(VAR5 & VAR19))
    {
        VAR14 = VAR3 + VAR7 - VAR13;
        VAR14 = FUN5(VAR14);
        VAR2 = FUN6(VAR10, VAR14);
        if (VAR2 == (VAR30)-1)
        {
            VAR25 = VAR31;
            goto VAR27;
        }
    }
    if ((VAR32 < VAR33) && !(VAR5 & VAR20))
    {
        struct stat VAR34;
        if (FUN7(VAR6, &VAR34) == -1)
            goto VAR27;
        if (VAR7 + VAR3 > VAR34.VAR35)
        {
            VAR3 = FUN8(VAR34.VAR35 - VAR7);
        }
    }
    if (!(VAR5 & VAR19))
    {
        unsigned long VAR36;
        void *VAR37;
        VAR14 = VAR3 + VAR7 - VAR13;
        VAR14 = FUN5(VAR14);
        VAR37 = FUN9(FUN10(VAR2), VAR14, VAR4, VAR5 | VAR19 | VAR20, -1, 0);
        if (VAR37 == VAR38)
            goto VAR27;
        VAR36 = (unsigned long)VAR37;
        if (!(VAR5 & VAR20))
        {
            VAR37 = FUN9(FUN10(VAR2), VAR3, VAR4, VAR5 | VAR19, VAR6, VAR13);
            if (VAR37 == VAR38)
            {
                FUN11(FUN10(VAR2), VAR14);
                goto VAR27;
            }
            VAR36 += VAR7 - VAR13;
        }
        VAR2 = FUN12(VAR36);
    }
    else
    {
        if (VAR2 & ~VAR24)
        {
            VAR25 = VAR26;
            goto VAR27;
        }
        VAR9 = VAR2 + VAR3;
        VAR11 = FUN5(VAR9);
        if ((unsigned long)VAR2 + VAR3 - 1 > (VAR30)-1)
        {
            VAR25 = VAR26;
            goto VAR27;
        }
        if (!(VAR5 & VAR20) && (VAR7 & ~VAR29) != (VAR2 & ~VAR29))
        {
            if ((VAR5 & VAR21) == VAR23 && (VAR4 & VAR17))
            {
                VAR25 = VAR26;
                goto VAR27;
            }
            VAR12 = FUN1(VAR2, VAR3, VAR4 | VAR17, VAR19 | VAR22 | VAR20, -1, 0);
            if (VAR12 == -1)
                goto VAR27;
            if (pread(VAR6, FUN10(VAR2), VAR3, VAR7) == -1)
                goto VAR27;
            if (!(VAR4 & VAR17))
            {
                VAR8 = FUN13(VAR2, VAR3, VAR4);
                assert(VAR8 == 0);
            }
            goto VAR28;
        }
        if (VAR2 > VAR10)
        {
            if (VAR11 == VAR10 + VAR39)
            {
                VAR8 = FUN14(VAR10, VAR2, VAR9, VAR4, VAR5, VAR6, VAR7);
                if (VAR8 == -1)
                    goto VAR27;
                goto VAR40;
            }
            VAR8 = FUN14(VAR10, VAR2, VAR10 + VAR39, VAR4, VAR5, VAR6, VAR7);
            if (VAR8 == -1)
                goto VAR27;
            VAR10 += VAR39;
        }
        if (VAR9 < VAR11)
        {
            VAR8 = FUN14(VAR11 - VAR39, VAR11 - VAR39, VAR9, VAR4, VAR5, VAR6, VAR7 + VAR11 - VAR39 - VAR2);
            if (VAR8 == -1)
                goto VAR27;
            VAR11 -= VAR39;
        }
        if (VAR10 < VAR11)
        {
            void *VAR37;
            unsigned long VAR41;
            if (VAR5 & VAR20)
                VAR41 = 0;
            else
                VAR41 = VAR7 + VAR10 - VAR2;
            VAR37 = FUN9(FUN10(VAR10), VAR11 - VAR10, VAR4, VAR5, VAR6, VAR41);
            if (VAR37 == VAR38)
                goto VAR27;
        }
    }
VAR40:
    FUN15(VAR2, VAR2 + VAR3, VAR4 | VAR42);
VAR28:
    FUN3("" VAR15 "", VAR2);
    FUN16(VAR43);
    FUN3("");
    FUN17(VAR2, VAR2 + VAR3);
    FUN18();
    return VAR2;
VAR27:
    FUN18();
    return -1;
}