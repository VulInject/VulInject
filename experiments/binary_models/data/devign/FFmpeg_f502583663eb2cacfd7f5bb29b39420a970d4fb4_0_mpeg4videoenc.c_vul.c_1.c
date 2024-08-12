int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    int VAR5, VAR6;
    if (VAR2->VAR7 == VAR8)
    {
        if (!(VAR2->VAR9->VAR10 & VAR11))
        {
            if (VAR2->VAR12 < VAR13)
                FUN2(VAR2);
            if (VAR2->VAR12 < VAR13 || VAR3 == 0)
                FUN3(VAR2, 0, 0);
        }
        if (!(VAR2->VAR14 & VAR15))
            FUN4(VAR2);
    }
    VAR2->VAR16 = VAR2->VAR17 && VAR2->VAR7 != VAR18;
    FUN5(&VAR2->VAR19, 16, 0);
    FUN5(&VAR2->VAR19, 16, VAR20);
    FUN5(&VAR2->VAR19, 2, VAR2->VAR7 - 1);
    VAR5 = FUN6(VAR2->VAR21, VAR2->VAR9->VAR22.VAR23);
    VAR6 = FUN7(VAR2->VAR21, VAR2->VAR9->VAR22.VAR23);
    VAR4 = VAR5 - VAR2->VAR24;
    FUN8(VAR4 >= 0);
    if (VAR4 > 3600)
    {
        FUN9(VAR2->VAR9, VAR25, "", VAR4);
        return FUN10(VAR26);
    }
    while (VAR4--)
        FUN5(&VAR2->VAR19, 1, 1);
    FUN5(&VAR2->VAR19, 1, 0);
    FUN5(&VAR2->VAR19, 1, 1);
    FUN5(&VAR2->VAR19, VAR2->VAR27, VAR6);
    FUN5(&VAR2->VAR19, 1, 1);
    FUN5(&VAR2->VAR19, 1, 1);
    if (VAR2->VAR7 == VAR28)
    {
        FUN5(&VAR2->VAR19, 1, VAR2->VAR29);
    }
    FUN5(&VAR2->VAR19, 3, 0);
    if (!VAR2->VAR30)
    {
        FUN5(&VAR2->VAR19, 1, VAR2->VAR31->VAR32->VAR33);
        FUN5(&VAR2->VAR19, 1, VAR2->VAR34);
    }
    FUN5(&VAR2->VAR19, 5, VAR2->VAR35);
    if (VAR2->VAR7 != VAR8)
        FUN5(&VAR2->VAR19, 3, VAR2->VAR36);
    if (VAR2->VAR7 == VAR18)
        FUN5(&VAR2->VAR19, 3, VAR2->VAR37);
    return 0;
}