int FUN1(struct VAR1 *VAR2)
{
    VAR2->VAR3 = 0;
    VAR2->VAR4 = 0;
    VAR2->VAR5 = 0;
    FUN2(&VAR2->VAR6);
    FUN2(&VAR2->VAR7);
    FUN2(&VAR2->VAR8);
    FUN2(&VAR2->VAR9);
    FUN2(&VAR2->VAR10);
    FUN3(&VAR2->VAR11);
    FUN3(&VAR2->VAR12);
    FUN3(&VAR2->VAR13);
    FUN4(VAR2);
    VAR2->VAR14 = 0;
    if (VAR2->VAR15 >= VAR16)
    {
        FUN5(VAR2, VAR17, "", VAR2->VAR15);
        return FUN6(VAR18);
    }
    if (VAR2->VAR19 >= VAR16)
    {
        FUN5(VAR2, VAR17, "", VAR2->VAR19);
        return FUN6(VAR18);
    }
    if (FUN7(VAR2->VAR15) <= VAR20 || VAR2->VAR21 == VAR20)
    {
        VAR2->VAR21 = VAR20;
    }
    else
        VAR2->VAR21 = VAR22;
    if (VAR2->VAR21 != VAR20 && VAR2->VAR21 != VAR23 && VAR2->VAR21 != VAR22)
    {
        FUN5(VAR2, VAR17, "", FUN8(VAR2->VAR21));
        return FUN6(VAR18);
    }
    FUN9(&VAR2->VAR24, VAR2->VAR15);
    FUN9(&VAR2->VAR25, VAR2->VAR19);
    if (VAR2->VAR26 != VAR2->VAR27 || (VAR2->VAR28 & VAR29))
    {
        VAR2->VAR30 = FUN10(VAR2->VAR30, VAR2->VAR26, VAR2->VAR27, VAR2->VAR31, VAR2->VAR32, VAR2->VAR33, VAR2->VAR34, VAR2->VAR21);
    }
    else
        FUN11(&VAR2->VAR30);
    if (VAR2->VAR21 != VAR20 && VAR2->VAR21 != VAR23 && VAR2->VAR21 != VAR22 && VAR2->VAR21 != VAR35 && VAR2->VAR30)
    {
        FUN5(VAR2, VAR17, "");
        return -1;
    }
    if (!VAR2->VAR36)
        VAR2->VAR36 = VAR2->VAR24.VAR37;
    if (VAR2->VAR36 && VAR2->VAR38 && VAR2->VAR36 != FUN12(VAR2->VAR38))
    {
        FUN5(VAR2, VAR39, "");
        VAR2->VAR38 = 0;
    }
    if (!VAR2->VAR38)
        VAR2->VAR38 = FUN13(VAR2->VAR36);
    if (!VAR2->VAR40)
        VAR2->VAR40 = FUN13(VAR2->VAR25.VAR37);
    VAR2->VAR41 = VAR2->VAR40 != VAR2->VAR38 || VAR2->VAR42 != 1.0 || VAR2->VAR43;
    if (!VAR2->VAR24.VAR37)
        VAR2->VAR24.VAR37 = FUN12(VAR2->VAR38);
    if (!VAR2->VAR36)
        VAR2->VAR36 = VAR2->VAR24.VAR37;
    if (!VAR2->VAR25.VAR37)
        VAR2->VAR25.VAR37 = FUN12(VAR2->VAR40);
    if (!VAR2->VAR24.VAR37)
    {
        FUN14(!VAR2->VAR38);
        FUN5(VAR2, VAR17, "");
        return -1;
    }
    if ((!VAR2->VAR40 || !VAR2->VAR38) && VAR2->VAR36 != VAR2->VAR25.VAR37 && !VAR2->VAR43)
    {
        FUN5(VAR2, VAR17, "");
        return -1;
    }
    FUN14(VAR2->VAR36);
    FUN14(VAR2->VAR25.VAR37);
    VAR2->VAR44 = VAR45 * VAR2->VAR25.VAR37 / VAR2->VAR24.VAR37 - VAR45 < VAR2->VAR26 / (float)VAR2->VAR27 - 1.0;
    VAR2->VAR9 = VAR2->VAR24;
    if (!VAR2->VAR30 && !VAR2->VAR41 && !VAR2->VAR46 && !VAR2->VAR47)
    {
        VAR2->VAR13 = FUN15(VAR2->VAR19, VAR2->VAR15, VAR2->VAR24.VAR37, NULL, 0);
        return 0;
    }
    VAR2->VAR11 = FUN15(VAR2->VAR21, VAR2->VAR15, VAR2->VAR36, VAR2->VAR46, 0);
    VAR2->VAR12 = FUN15(VAR2->VAR19, VAR2->VAR21, VAR2->VAR25.VAR37, NULL, 0);
    VAR2->VAR6 = VAR2->VAR24;
    VAR2->VAR8 = VAR2->VAR25;
    VAR2->VAR7 = VAR2->VAR24;
    if (VAR2->VAR46)
    {
        VAR2->VAR6.VAR37 = VAR2->VAR7.VAR37 = VAR2->VAR36;
        if (VAR2->VAR30)
            VAR2->VAR9.VAR37 = VAR2->VAR36;
    }
    if (!VAR2->VAR44)
    {
        VAR2->VAR7.VAR37 = VAR2->VAR25.VAR37;
        if (VAR2->VAR30)
            VAR2->VAR9.VAR37 = VAR2->VAR25.VAR37;
    }
    FUN9(&VAR2->VAR6, VAR2->VAR21);
    FUN9(&VAR2->VAR7, VAR2->VAR21);
    FUN9(&VAR2->VAR8, VAR2->VAR21);
    if (VAR2->VAR30)
    {
        FUN9(&VAR2->VAR9, VAR2->VAR21);
    }
    VAR2->VAR10 = VAR2->VAR8;
    if (VAR2->VAR41 || VAR2->VAR47)
        return FUN16(VAR2);
    return 0;
}