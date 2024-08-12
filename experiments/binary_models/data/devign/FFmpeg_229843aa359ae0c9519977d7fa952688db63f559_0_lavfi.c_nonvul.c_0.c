static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    double VAR8 = VAR9;
    int VAR10, VAR11 = 0;
    VAR12 *VAR13 = VAR6->VAR14;
    AVPicture VAR15;
    VAR16 *VAR17;
    int VAR18, VAR19;
    int VAR20 = 0;
    if (VAR6->VAR21.VAR20)
    {
        *VAR4 = VAR6->VAR21;
        FUN2(&VAR6->VAR21);
        VAR6->VAR21.VAR20 = 0;
        VAR6->VAR21.VAR22 = NULL;
        return VAR4->VAR20;
    }
    for (VAR19 = 0; VAR19 < VAR6->VAR23; VAR19++)
    {
        AVRational VAR24 = VAR6->VAR25[VAR19]->VAR26[0]->VAR27;
        double VAR28;
        int VAR18;
        if (VAR6->VAR29[VAR19])
            continue;
        VAR18 = FUN3(VAR6->VAR25[VAR19], VAR13, VAR30);
        if (VAR18 == VAR31)
        {
            FUN4(VAR2, "", VAR19);
            VAR6->VAR29[VAR19] = 1;
            continue;
        }
        else if (VAR18 < 0)
            return VAR18;
        VAR28 = FUN5(VAR13->VAR32, VAR24, VAR33, VAR34 | VAR35);
        FUN4(VAR2, "", VAR19, VAR28);
        FUN6(VAR13);
        if (VAR28 < VAR8)
        {
            VAR8 = VAR28;
            VAR11 = VAR19;
        }
    }
    if (VAR8 == VAR9)
        return VAR31;
    FUN4(VAR2, "", VAR11);
    FUN3(VAR6->VAR25[VAR11], VAR13, 0);
    VAR10 = VAR6->VAR36[VAR11];
    if (VAR13->VAR37)
    {
        VAR20 = FUN7(VAR13->VAR38, VAR13->VAR37, VAR13->VAR39);
        if ((VAR18 = FUN8(VAR4, VAR20)) < 0)
            return VAR18;
        memcpy(VAR15.VAR22, VAR13->VAR22, 4 * sizeof(VAR13->VAR22[0]));
        memcpy(VAR15.VAR40, VAR13->VAR40, 4 * sizeof(VAR13->VAR40[0]));
        FUN9(&VAR15, VAR13->VAR38, VAR13->VAR37, VAR13->VAR39, VAR4->VAR22, VAR20);
    }
    else if (FUN10(VAR13))
    {
        VAR20 = VAR13->VAR41 * FUN11(VAR13->VAR38) * FUN10(VAR13);
        if ((VAR18 = FUN8(VAR4, VAR20)) < 0)
            return VAR18;
        memcpy(VAR4->VAR22, VAR13->VAR22[0], VAR20);
    }
    VAR17 = FUN12(VAR13);
    if (VAR17)
    {
        VAR42 *VAR43;
        VAR44 *VAR45 = NULL;
        AVBPrint VAR46;
        FUN13(&VAR46, 0, VAR47);
        while ((VAR45 = FUN14(VAR17, "", VAR45, VAR48)))
        {
            FUN15(&VAR46, "", VAR45->VAR49);
            FUN16(&VAR46, '', 1);
            FUN15(&VAR46, "", VAR45->VAR50);
            FUN16(&VAR46, '', 1);
        }
        if (!FUN17(&VAR46) || !(VAR43 = FUN18(VAR4, VAR51, VAR46.VAR52)))
        {
            FUN19(&VAR46, NULL);
            return FUN20(VAR53);
        }
        memcpy(VAR43, VAR46.VAR54, VAR46.VAR52);
        FUN19(&VAR46, NULL);
    }
    if ((VAR18 = FUN21(VAR2, VAR13, VAR11)) < 0)
    {
        FUN6(VAR13);
        FUN22(VAR4);
        return VAR18;
    }
    VAR4->VAR55 = VAR10;
    VAR4->VAR32 = VAR13->VAR32;
    VAR4->VAR56 = FUN23(VAR13);
    VAR4->VAR20 = VAR20;
    FUN6(VAR13);
    return VAR20;
}