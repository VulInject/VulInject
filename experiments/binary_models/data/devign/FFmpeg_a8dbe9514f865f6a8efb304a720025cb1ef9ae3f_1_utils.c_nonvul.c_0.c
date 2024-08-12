int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    VAR1 *VAR9 = NULL;
    int VAR10;
    char VAR11[VAR12];
    AVProbeData VAR13, *VAR14 = &VAR13;
    VAR9 = FUN2(sizeof(VAR1));
    if (!VAR9)
    {
        VAR10 = VAR15;
        goto VAR16;
    }
    FUN3(VAR9->VAR3, sizeof(VAR9->VAR3), VAR3);
    VAR14->VAR3 = VAR9->VAR3;
    VAR14->VAR11 = VAR11;
    VAR14->VAR6 = 0;
    if (!VAR5)
    {
        VAR5 = FUN4(VAR14, 0);
    }
    if (!VAR5 || !(VAR5->VAR17 & VAR18))
    {
        if (FUN5(&VAR9->VAR19, VAR3, VAR20) < 0)
        {
            VAR10 = VAR21;
            goto VAR16;
        }
        if (VAR6 > 0)
        {
            FUN6(&VAR9->VAR19, VAR6);
        }
        VAR14->VAR6 = FUN7(&VAR9->VAR19, VAR11, VAR12);
        FUN8(&VAR9->VAR19, 0, VAR22);
    }
    if (!VAR5)
    {
        VAR5 = FUN4(VAR14, 1);
    }
    if (!VAR5)
    {
        VAR10 = VAR23;
        goto VAR16;
    }
    VAR9->VAR24 = VAR5;
    VAR9->VAR25 = FUN2(VAR5->VAR26);
    if (!VAR9->VAR25)
    {
        VAR10 = VAR15;
        goto VAR16;
    }
    if (VAR9->VAR24->VAR17 & VAR27)
    {
        if (FUN9(VAR9->VAR3) < 0)
        {
            VAR10 = VAR28;
            goto VAR29;
        }
    }
    VAR10 = VAR9->VAR24->FUN10(VAR9, VAR8);
    if (VAR10 < 0)
        goto VAR29;
    *VAR2 = VAR9;
    return 0;
VAR29:
    if (!(VAR5->VAR17 & VAR18))
    {
        FUN11(&VAR9->VAR19);
    }
VAR16:
    if (VAR9)
    {
        FUN12(&VAR9->VAR25);
    }
    FUN13(VAR9);
    *VAR2 = NULL;
    return VAR10;
}