static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11;
    if (VAR4->VAR12 != VAR13)
    {
        if (VAR8->VAR14 != VAR13)
            VAR8->VAR14 = FUN2(VAR8->VAR14, VAR4->VAR12, VAR4->VAR15);
        if (VAR8->VAR16 != VAR13)
            VAR8->VAR16 = FUN2(VAR8->VAR16, VAR4->VAR12, VAR4->VAR15);
    }
    if (VAR8->VAR17 == 0)
    {
        FUN3(&VAR9, &VAR10, VAR4, VAR6, VAR8);
        if (VAR10 && VAR9)
        {
            VAR8->VAR17 = FUN4(1, VAR9 * (VAR18)VAR4->VAR19.VAR10, VAR10 * (VAR18)VAR4->VAR19.VAR9);
        }
    }
    VAR11 = 0;
    if (VAR4->VAR20.VAR21 == VAR22)
    {
        if ((VAR4->VAR20.VAR23 == VAR24 || VAR4->VAR20.VAR23 == VAR25 || VAR4->VAR20.VAR23 == VAR26 || VAR4->VAR20.VAR23 == VAR27) && VAR6 && VAR6->VAR28 != VAR29)
            VAR11 = 1;
        if (VAR8->VAR16 != VAR13 && VAR8->VAR14 != VAR13 && VAR8->VAR14 > VAR8->VAR16)
            VAR11 = 1;
    }
    if (VAR4->VAR12 == VAR13)
    {
        if (VAR11)
            VAR4->VAR12 = -VAR8->VAR17;
        else
            VAR4->VAR12 = 0;
    }
    if (VAR11)
    {
        if (VAR8->VAR16 == VAR13)
        {
            if (VAR4->VAR30 != VAR13)
                VAR4->VAR12 = VAR8->VAR16 = VAR4->VAR30;
            else
                VAR8->VAR16 = VAR4->VAR12;
        }
        else
        {
            VAR4->VAR12 = VAR8->VAR16;
        }
        if (VAR4->VAR31 == 0)
            VAR4->VAR12 += VAR8->VAR17;
        else
            VAR4->VAR12 += VAR4->VAR31;
        VAR4->VAR31 = VAR8->VAR17;
        VAR4->VAR30 = VAR8->VAR14;
    }
    else
    {
        if (VAR8->VAR14 == VAR13)
        {
            if (VAR8->VAR16 == VAR13)
            {
                VAR8->VAR14 = VAR4->VAR12;
                VAR8->VAR16 = VAR4->VAR12;
            }
            else
            {
                VAR4->VAR12 = VAR8->VAR16;
                VAR8->VAR14 = VAR8->VAR16;
            }
        }
        else
        {
            VAR4->VAR12 = VAR8->VAR14;
            VAR8->VAR16 = VAR8->VAR14;
        }
        VAR4->VAR12 += VAR8->VAR17;
    }
    if (VAR6)
    {
        VAR8->VAR32 = 0;
        switch (VAR4->VAR20.VAR21)
        {
        case VAR22:
            if (VAR6->VAR28 == VAR33)
                VAR8->VAR32 |= VAR34;
            break;
        case VAR35:
            VAR8->VAR32 |= VAR34;
            break;
        default:
            break;
        }
    }
    if (VAR8->VAR14 != VAR13)
        VAR8->VAR14 = FUN4(VAR8->VAR14, VAR36 * (VAR18)VAR4->VAR19.VAR9, VAR4->VAR19.VAR10);
    if (VAR8->VAR16 != VAR13)
        VAR8->VAR16 = FUN4(VAR8->VAR16, VAR36 * (VAR18)VAR4->VAR19.VAR9, VAR4->VAR19.VAR10);
    VAR8->VAR17 = FUN4(VAR8->VAR17, VAR36 * (VAR18)VAR4->VAR19.VAR9, VAR4->VAR19.VAR10);
}