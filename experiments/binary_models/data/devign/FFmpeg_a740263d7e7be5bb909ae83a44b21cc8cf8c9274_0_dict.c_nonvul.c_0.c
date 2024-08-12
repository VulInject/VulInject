int FUN1(VAR1 **VAR2, const char *VAR3, const char *VAR4, int VAR5)
{
    VAR1 *VAR6 = *VAR2;
    VAR7 *VAR8 = FUN2(VAR6, VAR3, NULL, VAR5);
    char *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL;
    if (VAR5 & VAR12)
        VAR10 = (void *)VAR3;
    else
        VAR10 = FUN3(VAR3);
    if (VAR5 & VAR13)
        VAR11 = (void *)VAR4;
    else if (VAR10)
        VAR11 = FUN3(VAR4);
    if (!VAR6)
        VAR6 = *VAR2 = FUN4(sizeof(*VAR6));
    if (!VAR6 || (VAR3 && !VAR10) || (VAR4 && !VAR11))
        goto VAR14;
    if (VAR8)
    {
        if (VAR5 & VAR15)
        {
            FUN5(VAR10);
            FUN5(VAR11);
            return 0;
        }
        if (VAR5 & VAR16)
            VAR9 = VAR8->VAR4;
        else
            FUN5(VAR8->VAR4);
        FUN5(VAR8->VAR3);
        *VAR8 = VAR6->VAR17[--VAR6->VAR18];
    }
    else if (VAR11)
    {
        VAR7 *VAR19 = FUN6(VAR6->VAR17, (VAR6->VAR18 + 1) * sizeof(*VAR6->VAR17));
        if (!VAR19)
            goto VAR14;
        VAR6->VAR17 = VAR19;
    }
    if (VAR11)
    {
        VAR6->VAR17[VAR6->VAR18].VAR3 = VAR10;
        VAR6->VAR17[VAR6->VAR18].VAR4 = VAR11;
        if (VAR9 && VAR5 & VAR16)
        {
            size_t VAR20 = strlen(VAR9) + strlen(VAR11) + 1;
            char *VAR21 = FUN4(VAR20);
            if (!VAR21)
                goto VAR14;
            FUN7(VAR21, VAR9, VAR20);
            FUN8(&VAR9);
            FUN7(VAR21, VAR11, VAR20);
            VAR6->VAR17[VAR6->VAR18].VAR4 = VAR21;
            FUN8(&VAR11);
        }
        VAR6->VAR18++;
    }
    else
    {
        FUN8(&VAR10);
    }
    if (!VAR6->VAR18)
    {
        FUN8(&VAR6->VAR17);
        FUN8(VAR2);
    }
    return 0;
VAR14:
    if (VAR6 && !VAR6->VAR18)
    {
        FUN8(&VAR6->VAR17);
        FUN8(VAR2);
    }
    FUN5(VAR10);
    FUN5(VAR11);
    return FUN9(VAR22);
}