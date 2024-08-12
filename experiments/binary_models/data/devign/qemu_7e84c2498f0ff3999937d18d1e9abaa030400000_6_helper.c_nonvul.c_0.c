void FUN1(void)
{
    int VAR1, VAR2, VAR3, VAR4;
    uint32_t VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR1 = VAR11;
    VAR2 = VAR12;
    if ((VAR1 & 0xfffc) == 0)
        FUN2(VAR13, 0);
    if (FUN3(&VAR5, &VAR6, VAR1) != 0)
        FUN2(VAR13, VAR1 & 0xfffc);
    VAR7 = VAR14->VAR15 & VAR16;
    if (VAR6 & VAR17)
    {
        if (!(VAR6 & VAR18))
            FUN2(VAR13, VAR1 & 0xfffc);
        VAR8 = (VAR6 >> VAR19) & 3;
        if (VAR6 & VAR20)
        {
            if (VAR8 > VAR7)
                FUN2(VAR13, VAR1 & 0xfffc);
        }
        else
        {
            VAR9 = VAR1 & 3;
            if (VAR9 > VAR7)
                FUN2(VAR13, VAR1 & 0xfffc);
            if (VAR8 != VAR7)
                FUN2(VAR13, VAR1 & 0xfffc);
        }
        if (!(VAR6 & VAR21))
            FUN2(VAR22, VAR1 & 0xfffc);
        VAR10 = FUN4(VAR5, VAR6);
        if (VAR2 > VAR10)
            FUN2(VAR13, VAR1 & 0xfffc);
        FUN5(VAR14, VAR23, (VAR1 & 0xfffc) | VAR7, FUN6(VAR5, VAR6), VAR10, VAR6);
        VAR24 = VAR2;
    }
    else
    {
        VAR8 = (VAR6 >> VAR19) & 3;
        VAR9 = VAR1 & 3;
        VAR7 = VAR14->VAR15 & VAR16;
        VAR4 = (VAR6 >> VAR25) & 0xf;
        switch (VAR4)
        {
        case 1:
        case 9:
        case 5:
            if (VAR8 < VAR7 || VAR8 < VAR9)
                FUN2(VAR13, VAR1 & 0xfffc);
            FUN7(VAR1, VAR5, VAR6, VAR26);
            break;
        case 4:
        case 12:
            if ((VAR8 < VAR7) || (VAR8 < VAR9))
                FUN2(VAR13, VAR1 & 0xfffc);
            if (!(VAR6 & VAR21))
                FUN2(VAR22, VAR1 & 0xfffc);
            VAR3 = VAR5 >> 16;
            if (FUN3(&VAR5, &VAR6, VAR3) != 0)
                FUN2(VAR13, VAR3 & 0xfffc);
            VAR8 = (VAR6 >> VAR19) & 3;
            if (((VAR6 & (VAR17 | VAR18)) != (VAR17 | VAR18)))
                FUN2(VAR13, VAR3 & 0xfffc);
            if (((VAR6 & VAR20) && (VAR8 > VAR7)) || (!(VAR6 & VAR20) && (VAR8 != VAR7)))
                FUN2(VAR13, VAR3 & 0xfffc);
            if (!(VAR6 & VAR21))
                FUN2(VAR13, VAR3 & 0xfffc);
            VAR2 = (VAR5 & 0xffff);
            if (VAR4 == 12)
                VAR2 |= (VAR6 & 0xffff0000);
            VAR10 = FUN4(VAR5, VAR6);
            if (VAR2 > VAR10)
                FUN2(VAR13, 0);
            FUN5(VAR14, VAR23, (VAR3 & 0xfffc) | VAR7, FUN6(VAR5, VAR6), VAR10, VAR6);
            VAR24 = VAR2;
            break;
        default:
            FUN2(VAR13, VAR1 & 0xfffc);
            break;
        }
    }
}