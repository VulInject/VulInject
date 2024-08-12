static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    VAR4->VAR12 = VAR2;
    VAR4->VAR13 = FUN2(VAR14, 3 + !!VAR4->VAR15);
    if (VAR4->VAR13 > 3 && VAR2->VAR16 > VAR17)
    {
        FUN3(VAR2, VAR18, ""
                                ""
                                "",
               VAR4->VAR13);
        return VAR19;
    }
    VAR4->VAR20 = FUN4(VAR2->VAR21, sizeof(*VAR4->VAR20));
    VAR4->VAR22 = FUN4(VAR2->VAR23, sizeof(*VAR4->VAR22));
    VAR4->VAR24 = FUN4(VAR2->VAR21 + VAR2->VAR23, sizeof(*VAR4->VAR24));
    if (!VAR4->VAR20 || !VAR4->VAR22 || !VAR4->VAR24)
    {
        FUN5(&VAR4->VAR20);
        FUN5(&VAR4->VAR22);
        FUN5(&VAR4->VAR24);
        return FUN6(VAR25);
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR21; VAR9++)
    {
        VAR26 *VAR27 = VAR2->VAR28[VAR9];
        int VAR29;
        AVRational VAR24;
        FUN7(VAR27->VAR30, &VAR24.VAR31, &VAR29, &VAR24.VAR32);
        if (VAR27->VAR30->VAR33 == VAR34 && VAR27->VAR30->VAR35)
        {
            VAR24 = (VAR36){1, VAR27->VAR30->VAR35};
        }
        else
        {
            VAR24 = FUN8(VAR2, VAR27, 48000);
        }
        FUN9(VAR27, 64, VAR24.VAR32, VAR24.VAR31);
        for (VAR10 = 0; VAR10 < VAR4->VAR37; VAR10++)
            if (!memcmp(&VAR24, &VAR4->VAR24[VAR10], sizeof(VAR36)))
            {
                break;
            }
        VAR4->VAR24[VAR10] = VAR24;
        VAR4->VAR20[VAR9].VAR24 = &VAR4->VAR24[VAR10];
        if (VAR10 == VAR4->VAR37)
            VAR4->VAR37++;
        if (FUN10(1000) * VAR24.VAR32 >= VAR24.VAR31)
            VAR4->VAR20[VAR9].VAR38 = 7;
        else
            VAR4->VAR20[VAR9].VAR38 = 14;
        VAR4->VAR20[VAR9].VAR39 = FUN2(VAR24.VAR31, VAR24.VAR32) / VAR24.VAR32;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR23; VAR9++)
    {
        VAR40 *VAR41 = VAR2->VAR42[VAR9];
        for (VAR10 = 0; VAR10 < VAR4->VAR37; VAR10++)
            if (!memcmp(&VAR41->VAR24, &VAR4->VAR24[VAR10], sizeof(VAR36)))
                break;
        VAR4->VAR24[VAR10] = VAR41->VAR24;
        VAR4->VAR22[VAR9].VAR24 = &VAR4->VAR24[VAR10];
        if (VAR10 == VAR4->VAR37)
            VAR4->VAR37++;
    }
    VAR4->VAR43 = VAR44;
    FUN11(VAR2);
    FUN12(VAR2);
    FUN13(VAR4->VAR45[''].VAR15 == VAR46);
    FUN14(VAR7, VAR47, strlen(VAR47));
    FUN15(VAR7, 0);
    if ((VAR11 = FUN16(VAR2, VAR7)) < 0)
        return VAR11;
    if (VAR2->VAR48 < 0)
        VAR2->VAR48 = 1;
    FUN17(VAR7);
    return 0;
}