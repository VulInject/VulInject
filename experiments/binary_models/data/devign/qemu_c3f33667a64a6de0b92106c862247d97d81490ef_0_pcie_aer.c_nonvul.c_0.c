static bool FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    bool VAR5;
    uint16_t VAR6;
    VAR7 *VAR8;
    uint32_t VAR9;
    uint32_t VAR10, VAR11;
    bool VAR12;
    VAR5 = false;
    VAR6 = FUN2(VAR2->VAR13 + VAR14);
    VAR8 = VAR2->VAR13 + VAR2->VAR15.VAR8;
    VAR9 = FUN3(VAR8 + VAR16);
    VAR11 = VAR10 = FUN3(VAR8 + VAR17);
    VAR12 = false;
    if (VAR6 & VAR18)
    {
    }
    switch (VAR4->VAR19)
    {
    case VAR20:
        if (VAR10 & VAR21)
        {
            VAR10 |= VAR22;
        }
        else
        {
            if (VAR9 & VAR20)
            {
                VAR12 = true;
            }
            FUN4(VAR8 + VAR23, VAR4->VAR24);
        }
        VAR10 |= VAR21;
        break;
    case VAR25:
        if (!(VAR10 & VAR26) && VAR9 & VAR25)
        {
            VAR12 = true;
        }
        VAR10 |= VAR26;
        break;
    case VAR27:
        if (!(VAR10 & VAR28) && VAR9 & VAR27)
        {
            VAR12 = true;
        }
        if (!(VAR10 & VAR29))
        {
            VAR10 |= VAR30;
        }
        VAR10 |= VAR28;
        break;
    default:
        FUN5();
        break;
    }
    if (FUN6(VAR4))
    {
        if (VAR10 & VAR29)
        {
            VAR10 |= VAR31;
        }
        else
        {
            FUN4(VAR8 + VAR32, VAR4->VAR24);
        }
        VAR10 |= VAR29;
    }
    FUN7(VAR8 + VAR17, VAR10);
    if (!(VAR9 & VAR4->VAR19) || (FUN8(VAR11) & VAR9))
    {
        return VAR5;
    }
    VAR5 = true;
    if (FUN9(VAR2))
    {
        FUN10(VAR2, FUN11(VAR2));
    }
    else if (FUN12(VAR2))
    {
        FUN13(VAR2, FUN11(VAR2));
    }
    else
    {
        FUN14(VAR2->VAR33[VAR2->VAR15.VAR34], 1);
    }
    return VAR5;
}