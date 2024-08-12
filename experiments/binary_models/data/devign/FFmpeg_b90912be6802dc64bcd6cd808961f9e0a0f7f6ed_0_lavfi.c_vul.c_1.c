static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    double VAR8 = VAR9;
    int VAR10, VAR11 = 0;
    VAR12 *VAR13;
    AVPicture VAR14;
    int VAR15, VAR16;
    int VAR17 = 0;
    for (VAR16 = 0; VAR16 < VAR2->VAR18; VAR16++)
    {
        AVRational VAR19 = VAR6->VAR20[VAR16]->VAR21[0]->VAR22;
        double VAR23;
        int VAR15;
        if (VAR6->VAR24[VAR16])
            continue;
        VAR15 = FUN2(VAR6->VAR20[VAR16], &VAR13, VAR25);
        if (VAR15 == VAR26)
        {
            FUN3(VAR2, "", VAR16);
            VAR6->VAR24[VAR16] = 1;
            continue;
        }
        else if (VAR15 < 0)
            return VAR15;
        VAR23 = FUN4(VAR13->VAR27, VAR19, VAR28);
        FUN3(VAR2, "", VAR16, VAR23);
        if (VAR23 < VAR8)
        {
            VAR8 = VAR23;
            VAR11 = VAR16;
        }
    }
    if (VAR8 == VAR9)
        return VAR26;
    FUN3(VAR2, "", VAR11);
    FUN2(VAR6->VAR20[VAR11], &VAR13, 0);
    VAR10 = VAR6->VAR29[VAR11];
    if (VAR13->VAR30)
    {
        VAR17 = FUN5(VAR13->VAR31, VAR13->VAR30->VAR32, VAR13->VAR30->VAR33);
        if ((VAR15 = FUN6(VAR4, VAR17)) < 0)
            return VAR15;
        memcpy(VAR14.VAR34, VAR13->VAR34, 4 * sizeof(VAR13->VAR34[0]));
        memcpy(VAR14.VAR35, VAR13->VAR35, 4 * sizeof(VAR13->VAR35[0]));
        FUN7(&VAR14, VAR13->VAR31, VAR13->VAR30->VAR32, VAR13->VAR30->VAR33, VAR4->VAR34, VAR17);
    }
    else if (VAR13->VAR36)
    {
        VAR17 = VAR13->VAR36->VAR37 * FUN8(VAR13->VAR31) * FUN9(VAR13->VAR36->VAR38);
        if ((VAR15 = FUN6(VAR4, VAR17)) < 0)
            return VAR15;
        memcpy(VAR4->VAR34, VAR13->VAR34[0], VAR17);
    }
    if (VAR13->VAR39)
    {
        VAR40 *VAR39;
        VAR41 *VAR42 = NULL;
        AVBPrint VAR43;
        FUN10(&VAR43, 0, VAR44);
        while ((VAR42 = FUN11(VAR13->VAR39, "", VAR42, VAR45)))
        {
            FUN12(&VAR43, "", VAR42->VAR46);
            FUN13(&VAR43, '', 1);
            FUN12(&VAR43, "", VAR42->VAR47);
            FUN13(&VAR43, '', 1);
        }
        if (!FUN14(&VAR43) || !(VAR39 = FUN15(VAR4, VAR48, VAR43.VAR49)))
        {
            FUN16(&VAR43, NULL);
            return FUN17(VAR50);
        }
        memcpy(VAR39, VAR43.VAR51, VAR43.VAR49);
        FUN16(&VAR43, NULL);
    }
    VAR4->VAR52 = VAR10;
    VAR4->VAR27 = VAR13->VAR27;
    VAR4->VAR53 = VAR13->VAR53;
    VAR4->VAR17 = VAR17;
    FUN18(VAR13);
    return VAR17;
}