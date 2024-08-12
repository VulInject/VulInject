static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    unsigned int VAR6 = FUN2(&VAR5->VAR7);
    VAR8 *VAR9;
    if (VAR6 >= VAR10)
    {
        FUN3(VAR2->VAR5.VAR11, VAR12, "");
        return -1;
    }
    VAR9 = &VAR2->VAR13[VAR6];
    VAR9->VAR14 = FUN2(&VAR5->VAR7);
    VAR9->VAR15 = FUN4(&VAR5->VAR7);
    VAR9->VAR16 = FUN4(&VAR5->VAR7);
    VAR9->VAR17 = FUN2(&VAR5->VAR7) + 1;
    if (VAR9->VAR17 > 1)
    {
        VAR9->VAR18 = FUN2(&VAR5->VAR7);
        FUN3(VAR2->VAR5.VAR11, VAR12, "");
        switch (VAR9->VAR18)
        {
        case 0:
            | for (VAR19 = 0; VAR19 <= VAR20; VAR19++) | | | | VAR21[VAR19] | 1 | FUN5(VAR22) | break;
        case 2:
            | for (VAR19 = 0; VAR19 < VAR20; VAR19++) | | | | { | | | | VAR23[VAR19] | 1 | FUN5(VAR22) | | VAR24[VAR19] | 1 | FUN5(VAR22) | | } | | | break;
        case 3:
        case 4:
        case 5:
            | VAR25 | 1 | FUN6(1) | | VAR26 | 1 | FUN5(VAR22) | break;
        case 6:
            | VAR27 | 1 | FUN5(VAR22) | | for (VAR19 = 0; VAR19 <= VAR27; VAR19++ | | | |) | | | | VAR28[VAR19] | 1 | FUN6(VAR22) | break;
        }
    }
    VAR9->VAR29[0] = FUN2(&VAR5->VAR7) + 1;
    VAR9->VAR29[1] = FUN2(&VAR5->VAR7) + 1;
    if (VAR9->VAR29[0] > 32 || VAR9->VAR29[1] > 32)
    {
        FUN3(VAR2->VAR5.VAR11, VAR12, "");
        return -1;
    }
    VAR9->VAR30 = FUN4(&VAR5->VAR7);
    VAR9->VAR31 = FUN7(&VAR5->VAR7, 2);
    VAR9->VAR32 = FUN8(&VAR5->VAR7) + 26;
    VAR9->VAR33 = FUN8(&VAR5->VAR7) + 26;
    VAR9->VAR34 = FUN8(&VAR5->VAR7);
    VAR9->VAR35 = FUN4(&VAR5->VAR7);
    VAR9->VAR36 = FUN4(&VAR5->VAR7);
    VAR9->VAR37 = FUN4(&VAR5->VAR7);
    VAR9->VAR38 = 0;
    VAR2->VAR39 = -1;
    memset(VAR9->VAR40, 16, 6 * 16 * sizeof(VAR41));
    memset(VAR9->VAR42, 16, 2 * 64 * sizeof(VAR41));
    if (FUN9(&VAR5->VAR7) < VAR3)
    {
        VAR9->VAR38 = FUN4(&VAR5->VAR7);
        FUN10(VAR2, &VAR2->VAR43[VAR9->VAR14], VAR9, 0, VAR9->VAR40, VAR9->VAR42);
        FUN8(&VAR5->VAR7);
    }
    if (VAR5->VAR11->VAR44 & VAR45)
    {
        FUN3(VAR2->VAR5.VAR11, VAR46, "", VAR6, VAR9->VAR14, VAR9->VAR15 ? "" : "", VAR9->VAR17, VAR9->VAR29[0], VAR9->VAR29[1], VAR9->VAR30 ? "" : "", VAR9->VAR32, VAR9->VAR33, VAR9->VAR34, VAR9->VAR35 ? "" : "", VAR9->VAR36 ? "" : "", VAR9->VAR37 ? "" : "", VAR9->VAR38 ? "" : "");
    }
    return 0;
}