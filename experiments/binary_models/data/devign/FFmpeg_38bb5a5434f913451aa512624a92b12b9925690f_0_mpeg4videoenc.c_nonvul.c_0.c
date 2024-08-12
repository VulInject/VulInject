void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    int VAR5, VAR6;
    if (VAR2->VAR7 == VAR8)
    {
        if (!(VAR2->VAR9 & VAR10))
        {
            if (VAR2->VAR11 < VAR12)
                FUN2(VAR2);
            if (VAR2->VAR11 < VAR12 || VAR3 == 0)
                FUN3(VAR2, 0, 0);
        }
        if (!(VAR2->VAR13 & VAR14))
            FUN4(VAR2);
    }
    VAR2->VAR15 = VAR2->VAR16 && VAR2->VAR7 != VAR17;
    FUN5(&VAR2->VAR18, 16, 0);
    FUN5(&VAR2->VAR18, 16, VAR19);
    FUN5(&VAR2->VAR18, 2, VAR2->VAR7 - 1);
    VAR5 = FUN6(VAR2->VAR20, VAR2->VAR21->VAR22.VAR23);
    VAR6 = FUN7(VAR2->VAR20, VAR2->VAR21->VAR22.VAR23);
    VAR4 = VAR5 - VAR2->VAR24;
    assert(VAR4 >= 0);
    while (VAR4--)
        FUN5(&VAR2->VAR18, 1, 1);
    FUN5(&VAR2->VAR18, 1, 0);
    FUN5(&VAR2->VAR18, 1, 1);
    FUN5(&VAR2->VAR18, VAR2->VAR25, VAR6);
    FUN5(&VAR2->VAR18, 1, 1);
    FUN5(&VAR2->VAR18, 1, 1);
    if (VAR2->VAR7 == VAR26 || (VAR2->VAR7 == VAR27 && VAR2->VAR28 == VAR29))
    {
        FUN5(&VAR2->VAR18, 1, VAR2->VAR30);
    }
    FUN5(&VAR2->VAR18, 3, 0);
    if (!VAR2->VAR31)
    {
        FUN5(&VAR2->VAR18, 1, VAR2->VAR32->VAR33);
        FUN5(&VAR2->VAR18, 1, VAR2->VAR34);
    }
    FUN5(&VAR2->VAR18, 5, VAR2->VAR35);
    if (VAR2->VAR7 != VAR8)
        FUN5(&VAR2->VAR18, 3, VAR2->VAR36);
    if (VAR2->VAR7 == VAR17)
        FUN5(&VAR2->VAR18, 3, VAR2->VAR37);
}