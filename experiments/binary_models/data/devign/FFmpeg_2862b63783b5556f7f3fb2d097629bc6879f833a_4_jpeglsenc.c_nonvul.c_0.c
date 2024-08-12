static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *const VAR11 = VAR6;
    PutBitContext VAR12, VAR13;
    GetBitContext VAR14;
    VAR15 *VAR16 = NULL;
    VAR15 *VAR17 = NULL;
    VAR15 *VAR18 = NULL;
    VAR15 *VAR19 = NULL;
    VAR20 *VAR21;
    int VAR22, VAR23, VAR24;
    int VAR25;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR26) VAR9->VAR27 = VAR2->VAR26;
    FF_ENABLE_DEPRECATION_WARNINGS if (VAR2->VAR28 == VAR29 || VAR2->VAR28 == VAR30) VAR25 = 1;
    else VAR25 = 3;
    if ((VAR24 = FUN2(VAR4, VAR2->VAR31 * VAR2->VAR32 * VAR25 * 4 + VAR33)) < 0)
    {
        FUN3(VAR2, VAR34, "");
        return VAR24;
    }
    VAR16 = FUN4(VAR4->VAR23);
    if (!VAR16)
        goto VAR35;
    FUN5(&VAR12, VAR4->VAR36, VAR4->VAR23);
    FUN5(&VAR13, VAR16, VAR4->VAR23);
    FUN6(&VAR12, VAR37);
    FUN6(&VAR12, VAR38);
    FUN7(&VAR12, 16, 8 + VAR25 * 3);
    FUN7(&VAR12, 8, (VAR2->VAR28 == VAR30) ? 16 : 8);
    FUN7(&VAR12, 16, VAR2->VAR32);
    FUN7(&VAR12, 16, VAR2->VAR31);
    FUN7(&VAR12, 8, VAR25);
    for (VAR22 = 1; VAR22 <= VAR25; VAR22++)
    {
        FUN7(&VAR12, 8, VAR22);
        FUN7(&VAR12, 8, 0x11);
        FUN7(&VAR12, 8, 0);
    }
    FUN6(&VAR12, VAR39);
    FUN7(&VAR12, 16, 6 + VAR25 * 2);
    FUN7(&VAR12, 8, VAR25);
    for (VAR22 = 1; VAR22 <= VAR25; VAR22++)
    {
        FUN7(&VAR12, 8, VAR22);
        FUN7(&VAR12, 8, 0);
    }
    FUN7(&VAR12, 8, VAR9->VAR27);
    FUN7(&VAR12, 8, (VAR25 > 1) ? 1 : 0);
    FUN7(&VAR12, 8, 0);
    VAR21 = FUN8(sizeof(VAR20));
    if (!VAR21)
        goto VAR35;
    VAR21->VAR40 = VAR9->VAR27;
    VAR21->VAR41 = (VAR2->VAR28 == VAR30) ? 16 : 8;
    FUN9(VAR21, 0);
    FUN10(VAR21);
    FUN11(VAR21, &VAR12);
    VAR17 = VAR19 = FUN8(VAR11->VAR42[0]);
    if (!VAR17)
        goto VAR35;
    VAR18 = VAR11->VAR36[0];
    if (VAR2->VAR28 == VAR29)
    {
        int VAR43 = 0;
        for (VAR22 = 0; VAR22 < VAR2->VAR32; VAR22++)
        {
            FUN12(VAR21, &VAR13, VAR19, VAR18, VAR43, VAR2->VAR31, 1, 0, 8);
            VAR43 = VAR19[0];
            VAR19 = VAR18;
            VAR18 += VAR11->VAR42[0];
        }
    }
    else if (VAR2->VAR28 == VAR30)
    {
        int VAR43 = 0;
        for (VAR22 = 0; VAR22 < VAR2->VAR32; VAR22++)
        {
            FUN12(VAR21, &VAR13, VAR19, VAR18, VAR43, VAR2->VAR31, 1, 0, 16);
            VAR43 = *((VAR44 *)VAR19);
            VAR19 = VAR18;
            VAR18 += VAR11->VAR42[0];
        }
    }
    else if (VAR2->VAR28 == VAR45)
    {
        int VAR46, VAR31;
        int VAR47[3] = {0, 0, 0};
        VAR31 = VAR2->VAR31 * 3;
        for (VAR22 = 0; VAR22 < VAR2->VAR32; VAR22++)
        {
            for (VAR46 = 0; VAR46 < 3; VAR46++)
            {
                FUN12(VAR21, &VAR13, VAR19 + VAR46, VAR18 + VAR46, VAR47[VAR46], VAR31, 3, VAR46, 8);
                VAR47[VAR46] = VAR19[VAR46];
            }
            VAR19 = VAR18;
            VAR18 += VAR11->VAR42[0];
        }
    }
    else if (VAR2->VAR28 == VAR48)
    {
        int VAR46, VAR31;
        int VAR47[3] = {0, 0, 0};
        VAR31 = VAR2->VAR31 * 3;
        for (VAR22 = 0; VAR22 < VAR2->VAR32; VAR22++)
        {
            for (VAR46 = 2; VAR46 >= 0; VAR46--)
            {
                FUN12(VAR21, &VAR13, VAR19 + VAR46, VAR18 + VAR46, VAR47[VAR46], VAR31, 3, VAR46, 8);
                VAR47[VAR46] = VAR19[VAR46];
            }
            VAR19 = VAR18;
            VAR18 += VAR11->VAR42[0];
        }
    }
    FUN13(&VAR17);
    FUN13(&VAR21);
    FUN7(&VAR13, 7, 0);
    VAR23 = FUN14(&VAR13);
    FUN15(&VAR13);
    FUN16(&VAR14, VAR16, VAR23);
    VAR23 -= 7;
    while (FUN17(&VAR14) < VAR23)
    {
        int VAR49;
        VAR49 = FUN18(&VAR14, 8);
        FUN7(&VAR12, 8, VAR49);
        if (VAR49 == 0xFF)
        {
            VAR49 = FUN18(&VAR14, 7);
            FUN7(&VAR12, 8, VAR49);
        }
    }
    FUN19(&VAR12);
    FUN13(&VAR16);
    FUN6(&VAR12, VAR50);
    FUN15(&VAR12);
    FUN20();
    VAR4->VAR23 = FUN14(&VAR12) >> 3;
    VAR4->VAR51 |= VAR52;
    *VAR7 = 1;
    return 0;
VAR35:
    FUN21(VAR4);
    FUN13(&VAR16);
    FUN13(&VAR21);
    FUN13(&VAR17);
    return FUN22(VAR53);
}