static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    quvi_t VAR5;
    quvi_media_t VAR6;
    QUVIcode VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    char *VAR11, *VAR12;
    VAR7 = FUN2(&VAR5);
    if (VAR7 != VAR13)
        goto VAR14;
    FUN3(VAR5, VAR15, VAR9->VAR16);
    VAR7 = FUN4(VAR5, VAR2->VAR17, &VAR6);
    if (VAR7 != VAR13)
        goto VAR14;
    VAR7 = FUN5(VAR6, VAR18, &VAR11);
    if (VAR7 != VAR13)
        goto VAR14;
    FUN6(!VAR9->VAR19->VAR20 && !VAR9->VAR19->VAR21);
    VAR9->VAR19->VAR20 = FUN7(VAR2->VAR20);
    VAR9->VAR19->VAR21 = FUN7(VAR2->VAR21);
    VAR4 = FUN8(&VAR9->VAR19, VAR11, NULL, NULL);
    if (VAR4 < 0)
        goto VAR22;
    VAR7 = FUN5(VAR6, VAR23, &VAR12);
    if (VAR7 == VAR13)
        FUN9(&VAR2->VAR24, "", VAR12, 0);
    for (VAR3 = 0; VAR3 < VAR9->VAR19->VAR25; VAR3++)
    {
        VAR26 *VAR27 = FUN10(VAR2, NULL);
        VAR26 *VAR28 = VAR9->VAR19->VAR29[VAR3];
        if (!VAR27)
        {
            VAR4 = FUN11(VAR30);
            goto VAR22;
        }
        FUN12(VAR27, VAR28->VAR31, VAR28->VAR32.VAR33, VAR28->VAR32.VAR34);
        FUN13(VAR27->VAR35, VAR9->VAR19->VAR29[VAR3]->VAR35);
    }
    return 0;
VAR14:
    FUN14(VAR2, VAR36, "", FUN15(VAR5, VAR7));
    VAR4 = VAR37;
VAR22:
    FUN16(&VAR6);
    FUN17(&VAR5);
    return VAR4;
}