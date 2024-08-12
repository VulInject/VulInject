static void FUN1(int VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR6;
    target_ulong VAR7, VAR8;
    target_ulong VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (VAR5->VAR13)
    {
        FUN2(VAR5, VAR14);
        return;
    }
    VAR9 = (VAR5->VAR15 & VAR16) + VAR1;
    FUN3(VAR11, &VAR5->VAR17, VAR18)
    {
        if ((VAR9 == (VAR11->VAR9 & VAR2) || (VAR9 & VAR11->VAR2) == VAR11->VAR9) && (VAR11->VAR3 & VAR3))
        {
            VAR11->VAR3 |= VAR19;
            if (!VAR5->VAR13)
            {
                VAR5->VAR13 = VAR11;
                FUN4(VAR5);
                if (VAR11->VAR3 & VAR20)
                {
                    VAR5->VAR21 = VAR22;
                    FUN5(VAR5);
                }
                else
                {
                    FUN6(VAR5, &VAR7, &VAR8, &VAR12);
                    FUN7(VAR5, VAR7, VAR8, VAR12, 1);
                    FUN8(VAR5, NULL);
                }
            }
        }
        else
        {
            VAR11->VAR3 &= ~VAR19;
        }
    }
}