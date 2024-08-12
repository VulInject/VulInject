static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    if (VAR7->VAR8 <= 0)
    {
        if (VAR7->VAR9 & VAR10)
        {
            VAR7->VAR11 = FUN2(&VAR7->VAR12) ? 0 : FUN3(&VAR7->VAR12);
            if (!VAR7->VAR12.VAR13)
            {
                VAR7->VAR14 |= VAR15;
            }
        }
        else if ((VAR7->VAR14 & VAR15))
        {
            return VAR16;
        }
        else
        {
            VAR7->VAR11 = VAR7->VAR17;
            VAR7->VAR14 |= VAR15;
            VAR7->VAR14 &= ~VAR18;
        }
    }
    if (VAR7->VAR19 & VAR20)
    {
        FUN4(VAR7, &VAR7->VAR11, 1);
    }
    else if (FUN5(VAR7->VAR21, &VAR7->VAR11, 1) != 1)
    {
        if (VAR7->VAR8 >= 0 && VAR7->VAR8 < VAR22 && FUN6(VAR7->VAR21, VAR23, VAR24, VAR7) > 0)
        {
            VAR7->VAR8++;
            return VAR16;
        }
        VAR7->VAR8 = 0;
    }
    else
    {
        VAR7->VAR8 = 0;
    }
    VAR7->VAR25 = FUN7(VAR26);
    if (VAR7->VAR14 & VAR15)
    {
        VAR7->VAR14 |= VAR18;
        VAR7->VAR27 = 1;
        FUN8(VAR7);
    }
    return VAR16;
}