static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    do
    {
        if (VAR7->VAR8 <= 0)
        {
            if (VAR7->VAR9 & VAR10)
            {
                if (FUN2(&VAR7->VAR11))
                {
                    return VAR12;
                }
                VAR7->VAR13 = FUN3(&VAR7->VAR11);
                if (!VAR7->VAR11.VAR14)
                {
                    VAR7->VAR15 |= VAR16;
                }
            }
            else if ((VAR7->VAR15 & VAR16))
            {
                return VAR12;
            }
            else
            {
                VAR7->VAR13 = VAR7->VAR17;
                VAR7->VAR15 |= VAR16;
                VAR7->VAR15 &= ~VAR18;
            }
        }
        if (VAR7->VAR19 & VAR20)
        {
            FUN4(VAR7, &VAR7->VAR13, 1);
        }
        else if (FUN5(VAR7->VAR21, &VAR7->VAR13, 1) != 1)
        {
            if (VAR7->VAR8 >= 0 && VAR7->VAR8 < VAR22 && FUN6(VAR7->VAR21, VAR23 | VAR24, VAR25, VAR7) > 0)
            {
                VAR7->VAR8++;
                return VAR12;
            }
            VAR7->VAR8 = 0;
        }
        else
        {
            VAR7->VAR8 = 0;
        }
    } while ((VAR7->VAR9 & VAR10) && !FUN2(&VAR7->VAR11));
    VAR7->VAR26 = FUN7(VAR27);
    if (VAR7->VAR15 & VAR16)
    {
        VAR7->VAR15 |= VAR18;
        VAR7->VAR28 = 1;
        FUN8(VAR7);
    }
    return VAR12;
}