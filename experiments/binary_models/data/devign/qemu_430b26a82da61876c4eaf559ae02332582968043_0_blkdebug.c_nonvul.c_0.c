static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR6 *VAR13 = NULL;
    int VAR14;
    uint64_t VAR15;
    VAR12 = FUN2(&VAR16, NULL, 0, &VAR17);
    FUN3(VAR12, VAR4, &VAR13);
    if (VAR13)
    {
        FUN4(VAR7, VAR13);
        VAR14 = -VAR18;
        goto VAR19;
    }
    VAR9->VAR20 = FUN5(FUN6(VAR12, ""));
    VAR14 = FUN7(VAR9, VAR9->VAR20, VAR4, VAR7);
    if (VAR14)
    {
        goto VAR19;
    }
    VAR9->VAR21 = 1;
    VAR2->VAR22 = FUN8(FUN6(VAR12, ""), VAR4, "", VAR2, &VAR23, false, &VAR13);
    if (VAR13)
    {
        VAR14 = -VAR18;
        FUN4(VAR7, VAR13);
        goto VAR19;
    }
    VAR2->VAR24 = VAR25 & VAR2->VAR22->VAR2->VAR24;
    VAR2->VAR26 = (VAR25 | VAR27) & VAR2->VAR22->VAR2->VAR26;
    VAR14 = -VAR18;
    VAR9->VAR15 = FUN9(VAR12, "", 0);
    if (VAR9->VAR15 && (VAR9->VAR15 >= VAR28 || !FUN10(VAR9->VAR15)))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR15);
        goto VAR19;
    }
    VAR15 = FUN12(VAR9->VAR15, VAR2->VAR22->VAR2->VAR30.VAR31);
    VAR9->VAR32 = FUN9(VAR12, "", 0);
    if (VAR9->VAR32 && (VAR9->VAR32 >= VAR28 || !FUN13(VAR9->VAR32, VAR15)))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR32);
        goto VAR19;
    }
    VAR9->VAR33 = FUN9(VAR12, "", 0);
    if (VAR9->VAR33 && (VAR9->VAR33 >= VAR28 || !FUN13(VAR9->VAR33, VAR15)))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR33);
        goto VAR19;
    }
    VAR9->VAR34 = FUN9(VAR12, "", 0);
    if (VAR9->VAR34 && (VAR9->VAR34 >= VAR28 || !FUN13(VAR9->VAR34, FUN12(VAR9->VAR33, VAR15))))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR34);
        goto VAR19;
    }
    VAR9->VAR35 = FUN9(VAR12, "", 0);
    if (VAR9->VAR35 && (VAR9->VAR35 >= VAR28 || !FUN13(VAR9->VAR35, VAR15)))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR35);
        goto VAR19;
    }
    VAR9->VAR36 = FUN9(VAR12, "", 0);
    if (VAR9->VAR36 && (VAR9->VAR36 >= VAR28 || !FUN13(VAR9->VAR36, FUN12(VAR9->VAR35, VAR15))))
    {
        FUN11(VAR7, "" VAR29, VAR9->VAR36);
        goto VAR19;
    }
    VAR14 = 0;
VAR19:
    if (VAR14 < 0)
    {
        FUN14(VAR9->VAR20);
    }
    FUN15(VAR12);
    return VAR14;
}