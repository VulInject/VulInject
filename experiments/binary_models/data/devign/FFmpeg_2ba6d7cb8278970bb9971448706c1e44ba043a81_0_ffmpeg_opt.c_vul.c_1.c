static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    int VAR6, VAR7;
    VAR3 *VAR8 = FUN2();
    VAR8->VAR9 = VAR10;
    VAR7 = FUN3(&VAR8, VAR5, NULL, NULL);
    if (VAR7 < 0)
        return VAR7;
    for (VAR6 = 0; VAR6 < VAR8->VAR11; VAR6++)
    {
        VAR12 *VAR13;
        VAR14 *VAR15;
        VAR16 *VAR17;
        const char *VAR18;
        VAR17 = FUN4(VAR8->VAR19[VAR6]->VAR20->VAR21);
        if (!VAR17)
        {
            FUN5(VAR4, VAR22, "", VAR8->VAR19[VAR6]->VAR20->VAR21);
            return FUN6(VAR23);
        }
        if (VAR17->VAR24 == VAR25)
            FUN7(VAR2, "", VAR17->VAR26);
        else if (VAR17->VAR24 == VAR27)
            FUN8(VAR2, "", VAR17->VAR26);
        VAR15 = FUN9(VAR2, VAR4, VAR17->VAR24, -1);
        VAR13 = VAR15->VAR13;
        FUN10(VAR13->VAR17, VAR17);
        VAR18 = FUN11(VAR8->VAR19[VAR6]);
        if (VAR18)
        {
            VAR28 *VAR29 = NULL;
            FUN12(&VAR29, VAR18, "", "", 0);
            FUN13(VAR13->VAR17, &VAR29, VAR30);
            FUN14(&VAR29);
        }
        if (VAR13->VAR20->VAR31 == VAR25 && !VAR15->VAR32)
            FUN15(VAR13, VAR17);
        else if (VAR13->VAR20->VAR31 == VAR27 && !VAR15->VAR32)
            FUN16(VAR13, VAR13->VAR17, VAR17, VAR13->VAR20->VAR33);
        FUN17(VAR15->VAR34, VAR13->VAR17);
        if (VAR18)
            FUN12(&VAR15->VAR35, VAR18, "", "", 0);
    }
    FUN18(&VAR8);
    return VAR7;