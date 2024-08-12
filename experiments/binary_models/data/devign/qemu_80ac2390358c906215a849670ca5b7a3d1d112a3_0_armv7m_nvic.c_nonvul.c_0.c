void FUN1(void *VAR1, int VAR2, bool VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    bool VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    assert(VAR2 > VAR9 && VAR2 < VAR5->VAR10);
    assert(!VAR3 || VAR6);
    VAR8 = (VAR6 && VAR3) ? &VAR5->VAR11[VAR2] : &VAR5->VAR12[VAR2];
    FUN3(VAR2, VAR3, VAR8->VAR13, VAR8->VAR14);
    if (VAR2 >= VAR15 && VAR2 < VAR16)
    {
        int VAR17 = FUN4(VAR5);
        bool VAR18 = false;
        if (FUN5(VAR5, VAR8->VAR14, VAR3) >= VAR17)
        {
            FUN6(VAR2, VAR8->VAR14, VAR17);
            VAR18 = true;
        }
        else if (!VAR8->VAR13)
        {
            FUN7(VAR2);
            VAR18 = true;
        }
        if (VAR18)
        {
            if (VAR17 < 0)
            {
                FUN8(&VAR5->VAR19->VAR20, ""
                                               "",
                          VAR2, VAR17);
            }
            VAR2 = VAR15;
            if (FUN9(&VAR5->VAR19->VAR21, VAR22) && (VAR3 || !(VAR5->VAR19->VAR21.VAR23.VAR24 & VAR25)))
            {
                VAR8 = &VAR5->VAR11[VAR2];
            }
            else
            {
                VAR8 = &VAR5->VAR12[VAR2];
            }
            VAR5->VAR19->VAR21.VAR23.VAR26 |= VAR27;
        }
    }
    if (!VAR8->VAR28)
    {
        VAR8->VAR28 = 1;
        FUN10(VAR5);
    }
}