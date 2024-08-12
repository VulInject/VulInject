bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    uint8_t VAR7;
    uint64_t VAR8;
    bool VAR9 = true;
    if (VAR6->VAR10 != -1)
    {
        VAR7 = VAR6->VAR10;
        VAR8 = VAR11;
    }
    else if (VAR6->VAR12 != -1)
    {
        VAR7 = VAR6->VAR12;
        if (VAR7 == VAR13 || VAR7 == VAR14)
        {
            VAR8 = VAR15;
        }
        else
        {
            VAR8 = VAR16;
        }
    }
    else if (VAR6->VAR17)
    {
        VAR7 = VAR18;
        VAR8 = VAR19;
    }
    else
    {
        VAR9 = false;
    }
    uint64_t VAR20 = 0;
    if (VAR9)
    {
        VAR20 = VAR7 | VAR8 | VAR21;
        uint64_t VAR22 = FUN3(VAR2->VAR23, VAR24);
        if (VAR6->VAR17 && VAR22 != VAR25)
        {
            FUN4(VAR2);
        }
        if (!(VAR6->VAR26 & VAR27) || VAR8 != VAR19)
        {
            VAR20 &= ~(1 << 12);
            if (VAR8 == VAR11 || VAR8 == VAR15)
            {
                FUN5(VAR2->VAR23, VAR28, VAR6->VAR29);
            }
            if (VAR6->VAR30)
            {
                FUN5(VAR2->VAR23, VAR31, VAR6->VAR32);
            }
            FUN5(VAR2->VAR23, VAR33, VAR20);
        };
    }
    if (VAR2->VAR34 & VAR35)
    {
        if (!(VAR6->VAR26 & VAR27) && !(VAR20 & VAR21))
        {
            VAR2->VAR34 &= ~VAR35;
            VAR20 = VAR21 | VAR19 | VAR18;
            FUN5(VAR2->VAR23, VAR33, VAR20);
        }
        else
        {
            FUN6(VAR2);
        }
    }
    if (!(VAR6->VAR36 & VAR37) && (VAR2->VAR34 & VAR38) && (FUN7(VAR6) & VAR39) && !(VAR20 & VAR21))
    {
        int VAR40 = FUN8(&VAR4->VAR6);
        VAR2->VAR34 &= ~VAR38;
        if (VAR40 >= 0)
        {
            FUN5(VAR2->VAR23, VAR33, VAR40 | VAR21 | VAR41);
        }
    }
    if (VAR2->VAR34 & VAR38)
    {
        FUN9(VAR2);
    }
    return (VAR2->VAR34 & (VAR42 | VAR43));
}