int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = *VAR2;
    int VAR9 = 0;
    AVFormatParameters VAR10 = {0};
    VAR6 *VAR11 = NULL;
    if (!VAR8 && !(VAR8 = FUN2()))
        return FUN3(VAR12);
    if (VAR5)
        VAR8->VAR13 = VAR5;
    if (VAR7)
        FUN4(&VAR11, *VAR7, 0);
    if ((VAR9 = FUN5(VAR8, &VAR11)) < 0)
        goto VAR14;
    if ((VAR9 = FUN6(VAR8, VAR3)) < 0)
        goto VAR14;
    if (VAR8->VAR13->VAR15 & VAR16)
    {
        if (!FUN7(VAR3))
        {
            VAR9 = FUN3(VAR17);
            goto VAR14;
        }
    }
    VAR8->VAR18 = VAR8->VAR19 = VAR20;
    FUN8(VAR8->VAR3, VAR3, sizeof(VAR8->VAR3));
    if (VAR8->VAR13->VAR21 > 0)
    {
        if (!(VAR8->VAR22 = FUN9(VAR8->VAR13->VAR21)))
        {
            VAR9 = FUN3(VAR12);
            goto VAR14;
        }
        if (VAR8->VAR13->VAR23)
        {
            *(const VAR24 **)VAR8->VAR22 = VAR8->VAR13->VAR23;
            FUN10(VAR8->VAR22);
            if ((VAR9 = FUN5(VAR8->VAR22, &VAR11)) < 0)
                goto VAR14;
        }
    }
    if (VAR8->VAR25)
        FUN11(VAR8, VAR26);
    if (VAR8->VAR13->VAR27)
        if ((VAR9 = VAR8->VAR13->FUN12(VAR8, &VAR10)) < 0)
            goto VAR14;
    if (VAR8->VAR25 && !VAR8->VAR28)
        VAR8->VAR28 = FUN13(VAR8->VAR25);
    VAR8->VAR29 = VAR30;
    if (VAR7)
    {
        FUN14(VAR7);
        *VAR7 = VAR11;
    }
    *VAR2 = VAR8;
    return 0;
VAR14:
    FUN14(&VAR11);
    if (VAR8->VAR25 && !(VAR8->VAR15 & VAR31))
        FUN15(VAR8->VAR25);
    FUN16(VAR8);
    *VAR2 = NULL;
    return VAR9;
}