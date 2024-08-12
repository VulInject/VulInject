VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, hwaddr VAR7, hwaddr VAR8, int VAR9, VAR10 *VAR11)
{
    hwaddr VAR12;
    VAR13 *VAR14;
    if (FUN2(VAR5->VAR15))
    {
        VAR12 = (FUN3(VAR5->VAR15) & VAR16) + VAR8;
        if (!VAR5->VAR17)
        {
            VAR12 |= VAR18;
        }
        else
        {
            VAR12 |= VAR19;
        }
    }
    else
    {
        VAR12 = VAR5 - VAR20;
        VAR12 += VAR8;
    }
    FUN4(VAR14, &VAR3->VAR21, VAR22)
    {
        if (VAR6 == (VAR14->VAR6 & VAR16))
        {
            if ((VAR9 & VAR23) || (VAR14->VAR24 & VAR25))
            {
                VAR12 = VAR26 + VAR7;
                *VAR11 |= VAR27;
                break;
            }
        }
    }
    return VAR12;
}