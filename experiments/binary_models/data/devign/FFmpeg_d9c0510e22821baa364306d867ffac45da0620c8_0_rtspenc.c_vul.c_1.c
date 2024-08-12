int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    RTSPMessageHeader VAR7, *VAR8 = &VAR7;
    int VAR9;
    char *VAR10;
    AVFormatContext VAR11, *VAR12[1];
    VAR2->VAR13 = FUN2();
    VAR10 = FUN3(VAR14);
    if (VAR10 == NULL)
        return FUN4(VAR15);
    VAR11 = *VAR2;
    FUN5(VAR11.VAR16, sizeof(VAR11.VAR16), "", NULL, VAR3, -1, NULL);
    VAR12[0] = &VAR11;
    if (FUN6(VAR12, 1, VAR10, VAR14))
    {
        FUN7(VAR10);
        return VAR17;
    }
    FUN8(VAR2, VAR18, "", VAR10);
    FUN9(VAR2, "", VAR5->VAR19, "", VAR8, NULL, VAR10, strlen(VAR10));
    FUN7(VAR10);
    if (VAR8->VAR20 != VAR21)
        return VAR17;
    for (VAR9 = 0; VAR9 < VAR2->VAR22; VAR9++)
    {
        VAR23 *VAR24;
        VAR25 *VAR26 = VAR2->VAR27[VAR9];
        VAR24 = FUN3(sizeof(VAR23));
        if (!VAR24)
            return FUN4(VAR15);
        FUN10(&VAR5->VAR28, &VAR5->VAR29, VAR24);
        VAR26->VAR6 = VAR24;
        VAR24->VAR30 = VAR9;
        FUN11(VAR24->VAR31, VAR5->VAR19, sizeof(VAR24->VAR31));
        FUN12(VAR24->VAR31, sizeof(VAR24->VAR31), "", VAR9);
    }
    return 0;
}