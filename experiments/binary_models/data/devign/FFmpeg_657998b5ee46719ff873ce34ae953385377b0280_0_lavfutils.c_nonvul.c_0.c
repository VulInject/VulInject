int FUN1(VAR1 *VAR2[4], int VAR3[4], int *VAR4, int *VAR5, enum VAR6 *VAR7, const char *VAR8, void *VAR9)
{
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20, VAR21 = 0;
    AVPacket VAR22;
    FUN2();
    VAR11 = FUN3("");
    if ((VAR21 = FUN4(&VAR13, VAR8, VAR11, NULL)) < 0)
    {
        FUN5(VAR9, VAR23, "", VAR8);
        return VAR21;
    }
    VAR17 = VAR13->VAR24[0]->VAR15;
    VAR15 = FUN6(VAR17->VAR25);
    if (!VAR15)
    {
        FUN5(VAR9, VAR23, "");
        VAR21 = FUN7(VAR26);
        goto VAR27;
    }
    if ((VAR21 = FUN8(VAR17, VAR15, NULL)) < 0)
    {
        FUN5(VAR9, VAR23, "");
        goto VAR27;
    }
    if (!(VAR19 = FUN9()))
    {
        FUN5(VAR9, VAR23, "");
        VAR21 = FUN7(VAR28);
        goto VAR27;
    }
    VAR21 = FUN10(VAR13, &VAR22);
    if (VAR21 < 0)
    {
        FUN5(VAR9, VAR23, "");
        goto VAR27;
    }
    VAR21 = FUN11(VAR17, VAR19, &VAR20, &VAR22);
    if (VAR21 < 0 || !VAR20)
    {
        FUN5(VAR9, VAR23, "");
        goto VAR27;
    }
    VAR21 = 0;
    *VAR4 = VAR19->VAR29;
    *VAR5 = VAR19->VAR30;
    *VAR7 = VAR19->VAR31;
    if ((VAR21 = FUN12(VAR2, VAR3, *VAR4, *VAR5, *VAR7, 16)) < 0)
        goto VAR27;
    VAR21 = 0;
    FUN13(VAR2, VAR3, (const VAR1 **)VAR19->VAR2, VAR19->VAR3, *VAR7, *VAR4, *VAR5);
VAR27:
    FUN14(VAR17);
    FUN15(&VAR13);
    FUN16(&VAR19);
    if (VAR21 < 0)
        FUN5(VAR9, VAR23, "", VAR8);
    return VAR21;
}