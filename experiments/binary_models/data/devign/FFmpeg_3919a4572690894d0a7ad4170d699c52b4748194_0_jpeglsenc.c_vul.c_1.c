static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    const VAR5 *const VAR8 = VAR6;
    const int VAR9 = VAR2->VAR10;
    PutBitContext VAR11, VAR12;
    GetBitContext VAR13;
    VAR14 *VAR15, *VAR16, *VAR17, *VAR18;
    VAR19 *VAR20;
    int VAR21, VAR22, VAR23;
    int VAR24;
    if (VAR2->VAR25 == VAR26 || VAR2->VAR25 == VAR27)
        VAR24 = 1;
    else
        VAR24 = 3;
    if ((VAR23 = FUN2(VAR4, VAR2->VAR28 * VAR2->VAR29 * VAR24 * 4 + VAR30)) < 0)
    {
        FUN3(VAR2, VAR31, "");
        return VAR23;
    }
    VAR15 = FUN4(VAR4->VAR22);
    FUN5(&VAR11, VAR4->VAR32, VAR4->VAR22);
    FUN5(&VAR12, VAR15, VAR4->VAR22);
    FUN6(&VAR11, VAR33);
    FUN6(&VAR11, VAR34);
    FUN7(&VAR11, 16, 8 + VAR24 * 3);
    FUN7(&VAR11, 8, (VAR2->VAR25 == VAR27) ? 16 : 8);
    FUN7(&VAR11, 16, VAR2->VAR29);
    FUN7(&VAR11, 16, VAR2->VAR28);
    FUN7(&VAR11, 8, VAR24);
    for (VAR21 = 1; VAR21 <= VAR24; VAR21++)
    {
        FUN7(&VAR11, 8, VAR21);
        FUN7(&VAR11, 8, 0x11);
        FUN7(&VAR11, 8, 0);
    }
    FUN6(&VAR11, VAR35);
    FUN7(&VAR11, 16, 6 + VAR24 * 2);
    FUN7(&VAR11, 8, VAR24);
    for (VAR21 = 1; VAR21 <= VAR24; VAR21++)
    {
        FUN7(&VAR11, 8, VAR21);
        FUN7(&VAR11, 8, 0);
    }
    FUN7(&VAR11, 8, VAR9);
    FUN7(&VAR11, 8, (VAR24 > 1) ? 1 : 0);
    FUN7(&VAR11, 8, 0);
    VAR20 = FUN8(sizeof(VAR19));
    VAR20->VAR9 = VAR9;
    VAR20->VAR36 = (VAR2->VAR25 == VAR27) ? 16 : 8;
    FUN9(VAR20, 0);
    FUN10(VAR20);
    FUN11(VAR20, &VAR11);
    VAR16 = FUN8(VAR8->VAR37[0]);
    VAR18 = VAR16;
    VAR17 = VAR8->VAR32[0];
    if (VAR2->VAR25 == VAR26)
    {
        int VAR38 = 0;
        for (VAR21 = 0; VAR21 < VAR2->VAR29; VAR21++)
        {
            FUN12(VAR20, &VAR12, VAR18, VAR17, VAR38, VAR2->VAR28, 1, 0, 8);
            VAR38 = VAR18[0];
            VAR18 = VAR17;
            VAR17 += VAR8->VAR37[0];
        }
    }
    else if (VAR2->VAR25 == VAR27)
    {
        int VAR38 = 0;
        for (VAR21 = 0; VAR21 < VAR2->VAR29; VAR21++)
        {
            FUN12(VAR20, &VAR12, VAR18, VAR17, VAR38, VAR2->VAR28, 1, 0, 16);
            VAR38 = *((VAR39 *)VAR18);
            VAR18 = VAR17;
            VAR17 += VAR8->VAR37[0];
        }
    }
    else if (VAR2->VAR25 == VAR40)
    {
        int VAR41, VAR28;
        int VAR42[3] = {0, 0, 0};
        VAR28 = VAR2->VAR28 * 3;
        for (VAR21 = 0; VAR21 < VAR2->VAR29; VAR21++)
        {
            for (VAR41 = 0; VAR41 < 3; VAR41++)
            {
                FUN12(VAR20, &VAR12, VAR18 + VAR41, VAR17 + VAR41, VAR42[VAR41], VAR28, 3, VAR41, 8);
                VAR42[VAR41] = VAR18[VAR41];
            }
            VAR18 = VAR17;
            VAR17 += VAR8->VAR37[0];
        }
    }
    else if (VAR2->VAR25 == VAR43)
    {
        int VAR41, VAR28;
        int VAR42[3] = {0, 0, 0};
        VAR28 = VAR2->VAR28 * 3;
        for (VAR21 = 0; VAR21 < VAR2->VAR29; VAR21++)
        {
            for (VAR41 = 2; VAR41 >= 0; VAR41--)
            {
                FUN12(VAR20, &VAR12, VAR18 + VAR41, VAR17 + VAR41, VAR42[VAR41], VAR28, 3, VAR41, 8);
                VAR42[VAR41] = VAR18[VAR41];
            }
            VAR18 = VAR17;
            VAR17 += VAR8->VAR37[0];
        }
    }
    FUN13(VAR16);
    FUN13(VAR20);
    FUN7(&VAR12, 7, 0);
    VAR22 = FUN14(&VAR12);
    FUN15(&VAR12);
    FUN16(&VAR13, VAR15, VAR22);
    VAR22 -= 7;
    while (FUN17(&VAR13) < VAR22)
    {
        int VAR44;
        VAR44 = FUN18(&VAR13, 8);
        FUN7(&VAR11, 8, VAR44);
        if (VAR44 == 0xFF)
        {
            VAR44 = FUN18(&VAR13, 7);
            FUN7(&VAR11, 8, VAR44);
        }
    }
    FUN19(&VAR11);
    FUN13(VAR15);
    FUN6(&VAR11, VAR45);
    FUN15(&VAR11);
    FUN20();
    VAR4->VAR22 = FUN14(&VAR11) >> 3;
    VAR4->VAR46 |= VAR47;
    *VAR7 = 1;
    return 0;
}