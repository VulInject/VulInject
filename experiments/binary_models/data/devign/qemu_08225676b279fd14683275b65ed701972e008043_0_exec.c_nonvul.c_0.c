static void FUN1(int VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR6;
    VAR7 *VAR8 = VAR5->VAR9;
    target_ulong VAR10, VAR11;
    target_ulong VAR12;
    VAR13 *VAR14;
    int VAR15;
    if (VAR5->VAR16)
    {
        FUN2(VAR5, VAR17);
        return;
    }
    VAR12 = (VAR5->VAR18 & VAR19) + VAR1;
    FUN3(VAR14, &VAR5->VAR20, VAR21)
    {
        if (FUN4(VAR14, VAR12, VAR2) && (VAR14->VAR3 & VAR3))
        {
            if (VAR3 == VAR22)
            {
                VAR14->VAR3 |= VAR23;
            }
            else
            {
                VAR14->VAR3 |= VAR24;
            }
            VAR14->VAR25 = VAR12;
            if (!VAR5->VAR16)
            {
                VAR5->VAR16 = VAR14;
                FUN5(VAR5);
                if (VAR14->VAR3 & VAR26)
                {
                    VAR5->VAR27 = VAR28;
                    FUN6(VAR5);
                }
                else
                {
                    FUN7(VAR8, &VAR10, &VAR11, &VAR15);
                    FUN8(VAR5, VAR10, VAR11, VAR15, 1);
                    FUN9(VAR5, NULL);
                }
            }
        }
        else
        {
            VAR14->VAR3 &= ~VAR29;
        }
    }
}