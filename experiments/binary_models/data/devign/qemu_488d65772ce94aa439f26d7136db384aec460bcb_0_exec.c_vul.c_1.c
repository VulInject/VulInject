static void FUN1(int VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR6;
    target_ulong VAR7, VAR8;
    VAR9 *VAR10;
    target_ulong VAR11;
    VAR12 *VAR13;
    int VAR14;
    if (VAR5->VAR15)
    {
        FUN2(VAR5, VAR16);
        return;
    }
    VAR11 = (VAR5->VAR17 & VAR18) + VAR1;
    FUN3(VAR13, &VAR5->VAR19, VAR20)
    {
        if ((VAR11 == (VAR13->VAR11 & VAR2) || (VAR11 & VAR13->VAR2) == VAR13->VAR11) && (VAR13->VAR3 & VAR3))
        {
            VAR13->VAR3 |= VAR21;
            if (!VAR5->VAR15)
            {
                VAR5->VAR15 = VAR13;
                VAR10 = FUN4(VAR5->VAR22);
                if (!VAR10)
                {
                    FUN5(VAR5, ""
                                   "",
                              (void *)VAR5->VAR22);
                }
                FUN6(VAR10, VAR5, VAR5->VAR22);
                FUN7(VAR10, -1);
                if (VAR13->VAR3 & VAR23)
                {
                    VAR5->VAR24 = VAR25;
                }
                else
                {
                    FUN8(VAR5, &VAR7, &VAR8, &VAR14);
                    FUN9(VAR5, VAR7, VAR8, VAR14, 1);
                }
                FUN10(VAR5, NULL);
            }
        }
        else
        {
            VAR13->VAR3 &= ~VAR21;
        }
    }
}