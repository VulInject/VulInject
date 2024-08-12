static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint64_t VAR9;
    VAR4 *VAR10;
    int64_t VAR11;
    int VAR12;
    VAR9 = VAR7->VAR13[VAR3];
    FUN2(VAR2, VAR3);
    VAR11 = FUN3(VAR2, VAR7->VAR14 * sizeof(VAR4));
    if (VAR11 < 0)
    {
        return VAR11;
    }
    VAR12 = FUN4(VAR2, VAR7->VAR15);
    if (VAR12 < 0)
    {
        goto VAR16;
    }
    FUN5(VAR2, VAR3);
    VAR12 = FUN6(VAR2, VAR7->VAR17, VAR11, (void **)VAR5);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR10 = *VAR5;
    if ((VAR9 & VAR18) == 0)
    {
        memset(VAR10, 0, VAR7->VAR14 * sizeof(VAR4));
    }
    else
    {
        VAR4 *VAR19;
        FUN7(VAR2->VAR20, VAR21);
        VAR12 = FUN8(VAR2, VAR7->VAR17, VAR9 & VAR18, (void **)&VAR19);
        if (VAR12 < 0)
        {
            goto VAR16;
        }
        memcpy(VAR10, VAR19, VAR7->VAR22);
        VAR12 = FUN9(VAR2, VAR7->VAR17, (void **)&VAR19);
        if (VAR12 < 0)
        {
            goto VAR16;
        }
    }
    FUN7(VAR2->VAR20, VAR23);
    FUN10(VAR2, VAR3);
    FUN11(VAR7->VAR17, VAR10);
    VAR12 = FUN4(VAR2, VAR7->VAR17);
    if (VAR12 < 0)
    {
        goto VAR16;
    }
    FUN12(VAR2, VAR3);
    VAR7->VAR13[VAR3] = VAR11 | VAR24;
    VAR12 = FUN13(VAR2, VAR3);
    if (VAR12 < 0)
    {
        goto VAR16;
    }
    *VAR5 = VAR10;
    FUN14(VAR2, VAR3, 0);
    return 0;
VAR16:
    FUN14(VAR2, VAR3, VAR12);
    FUN9(VAR2, VAR7->VAR17, (void **)VAR5);
    VAR7->VAR13[VAR3] = VAR9;
    return VAR12;
}