static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR8[VAR3];
    VAR9 *VAR10 = VAR2->VAR11[VAR8->VAR11[0]]->VAR10;
    VAR12 *VAR13;
    int VAR14;
    static const char VAR15[2][6] = {"", ""};
    int VAR16 = 1;
    int VAR17 = 1, VAR18 = 1, VAR19 = 1;
    if (VAR10->VAR20 == VAR21)
    {
        VAR17 = !VAR5->VAR22 && FUN2(VAR2, VAR8);
        VAR18 = !VAR5->VAR22 && FUN3(VAR2, VAR8);
    }
    else
    {
        VAR19 = !VAR5->VAR22 && FUN4(VAR2, VAR8);
    }
    FUN5(VAR2->VAR23, ""%VAR2\"", VAR8->VAR24);
    FUN5(VAR2->VAR23, ""%VAR2/VAR25\"", VAR10->VAR20 == VAR21 ? "" : "");
    FUN5(VAR2->VAR23, ""%VAR2\"", FUN6(VAR10->VAR26));
    VAR13 = FUN7(VAR2->VAR11[VAR8->VAR11[0]]->VAR27, "", NULL, 0);
    if (VAR13)
        FUN5(VAR2->VAR23, ""%VAR2\"", VAR13->VAR28);
    if (VAR10->VAR20 == VAR21 && VAR17)
        FUN5(VAR2->VAR23, ""%VAR29\"", VAR10->VAR30);
    if (VAR10->VAR20 == VAR21 && VAR18)
        FUN5(VAR2->VAR23, ""%VAR29\"", VAR10->VAR31);
    if (VAR10->VAR20 == VAR32 && VAR19)
        FUN5(VAR2->VAR23, ""%VAR29\"", VAR10->VAR33);
    FUN5(VAR2->VAR23, ""%VAR2\"", VAR15[FUN8(VAR2, VAR8)]);
    FUN5(VAR2->VAR23, ""%VAR2\"", VAR15[VAR5->VAR22 || FUN9(VAR2, VAR8)]);
    for (VAR14 = 0; VAR14 < VAR8->VAR34; VAR14++)
    {
        VAR12 *VAR35 = FUN7(VAR2->VAR11[VAR8->VAR11[VAR14]]->VAR27, VAR36, NULL, 0);
        if (!VAR5->VAR22 && (!VAR35 || !FUN10(VAR35->VAR28, "", 1)))
            VAR16 = 0;
    }
    FUN5(VAR2->VAR23, ""%VAR29\"", VAR16);
    FUN5(VAR2->VAR23, "");
    if (VAR5->VAR22)
    {
        VAR12 *VAR37 = FUN7(VAR2->VAR11[VAR8->VAR11[0]]->VAR27, VAR38, NULL, 0);
        char *VAR39 = NULL;
        char *VAR40 = NULL;
        int VAR41 = FUN11(VAR37->VAR28, NULL, &VAR39, &VAR40);
        if (VAR41)
            return VAR41;
        FUN5(VAR2->VAR23, ""1\""%VAR2\"", VAR10->VAR20 == VAR21 ? "" : "");
        FUN5(VAR2->VAR23, "");
        FUN5(VAR2->VAR23, ""1000\"");
        FUN5(VAR2->VAR23, ""%VAR29\"", VAR5->VAR42);
        FUN5(VAR2->VAR23, ""%VAR2\"", VAR40);
        FUN5(VAR2->VAR23, ""%VAR29\"", VAR5->VAR43);
        FUN5(VAR2->VAR23, ""%VAR2\"", VAR39);
        FUN5(VAR2->VAR23, "");
        FUN12(VAR39);
        FUN12(VAR40);
    }
    for (VAR14 = 0; VAR14 < VAR8->VAR34; VAR14++)
    {
        char *VAR44 = NULL;
        int VAR41;
        if (VAR5->VAR22)
        {
            VAR12 *VAR37 = FUN7(VAR2->VAR11[VAR8->VAR11[VAR14]]->VAR27, VAR38, NULL, 0);
            if (!VAR37 || (VAR41 = FUN11(VAR37->VAR28, &VAR44, NULL, NULL)))
            {
                return VAR41;
            }
        }
        else
        {
            VAR44 = FUN13("", VAR5->VAR44++);
            if (!VAR44)
                return FUN14(VAR45);
        }
        VAR41 = FUN15(VAR2, VAR2->VAR11[VAR8->VAR11[VAR14]], VAR44, !VAR17, !VAR18, !VAR19);
        if (VAR41)
            return VAR41;
        FUN12(VAR44);
    }
    FUN5(VAR2->VAR23, "");
    return 0;
}