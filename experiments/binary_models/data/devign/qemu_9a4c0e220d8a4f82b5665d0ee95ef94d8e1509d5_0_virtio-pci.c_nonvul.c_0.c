static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, bool VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(&VAR8->VAR11);
    VAR12 *VAR13 = FUN4(VAR10, VAR5);
    bool VAR14 = FUN5(VAR8);
    bool VAR15 = FUN6(VAR8);
    bool VAR16 = FUN7();
    bool VAR17 = VAR8->VAR18 & VAR19;
    VAR20 *VAR21 = &VAR8->VAR22.VAR23;
    VAR20 *VAR24 = &VAR8->VAR25.VAR23;
    VAR20 *VAR26 = &VAR8->VAR27;
    hwaddr VAR28 = VAR29 * FUN8(VAR13);
    hwaddr VAR30 = VAR31;
    if (VAR6)
    {
        if (VAR15)
        {
            if (VAR16)
            {
                FUN9(VAR21, VAR28, 0, false, VAR5, VAR4);
            }
            else
            {
                FUN9(VAR21, VAR28, 2, false, VAR5, VAR4);
            }
            if (VAR17)
            {
                FUN9(VAR24, 0, 2, true, VAR5, VAR4);
            }
        }
        if (VAR14)
        {
            FUN9(VAR26, VAR30, 2, true, VAR5, VAR4);
        }
    }
    else
    {
        if (VAR15)
        {
            if (VAR16)
            {
                FUN10(VAR21, VAR28, 0, false, VAR5, VAR4);
            }
            else
            {
                FUN10(VAR21, VAR28, 2, false, VAR5, VAR4);
            }
            if (VAR17)
            {
                FUN10(VAR24, 0, 2, true, VAR5, VAR4);
            }
        }
        if (VAR14)
        {
            FUN10(VAR26, VAR30, 2, true, VAR5, VAR4);
        }
    }
    return 0;
}