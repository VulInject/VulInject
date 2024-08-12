int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    int VAR9;
    AVProbeData VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13 = NULL;
    void *VAR14 = VAR8 && VAR8->VAR15 ? *VAR2 : NULL;
    VAR11->VAR3 = "";
    if (VAR3)
        VAR11->VAR3 = VAR3;
    VAR11->VAR16 = NULL;
    VAR11->VAR6 = 0;
    if (!VAR5)
    {
        VAR5 = FUN2(VAR11, 0);
    }
    if (!VAR5 || !(VAR5->VAR17 & VAR18))
    {
        if ((VAR9 = FUN3(&VAR13, VAR3, VAR19)) < 0)
        {
            goto VAR20;
        }
        if (VAR6 > 0)
        {
            FUN4(VAR13, VAR6);
        }
        if ((VAR9 = FUN5(&VAR13, &VAR5, VAR3, VAR14, 0, 0)) < 0)
        {
            goto VAR20;
        }
    }
    if (!VAR5)
    {
        VAR9 = VAR21;
        goto VAR20;
    }
    if (VAR5->VAR17 & VAR22)
    {
        if (!FUN6(VAR3))
        {
            VAR9 = VAR23;
            goto VAR20;
        }
    }
    VAR9 = FUN7(VAR2, VAR13, VAR3, VAR5, VAR8);
    if (VAR9)
        goto VAR20;
    return 0;
VAR20:
    FUN8(&VAR11->VAR16);
    if (VAR13)
        FUN9(VAR13);
    if (VAR8 && VAR8->VAR15)
        FUN10(*VAR2);
    *VAR2 = NULL;
    return VAR9;
}