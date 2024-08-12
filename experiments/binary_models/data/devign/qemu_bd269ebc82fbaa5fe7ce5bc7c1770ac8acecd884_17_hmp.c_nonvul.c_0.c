void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    bool VAR6 = FUN3(VAR4, "", false);
    bool VAR7 = FUN3(VAR4, "", false);
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11, *VAR12;
    VAR13 *VAR14;
    if (VAR6 && !VAR7)
    {
        FUN4(&VAR9, "");
        goto VAR15;
    }
    VAR14 = FUN5(VAR5, &VAR9);
    if (VAR9 != NULL)
    {
        goto VAR15;
    }
    FUN6(VAR14, NULL, &VAR9);
    FUN7(VAR14);
    if (VAR9 != NULL)
    {
        goto VAR15;
    }
    if (!VAR7)
    {
        return;
    }
    VAR11 = FUN8(NULL);
    for (VAR12 = VAR11; VAR12; VAR12 = VAR12->VAR16)
    {
        if (!VAR12->VAR17->VAR18)
        {
            continue;
        }
        FUN9(VAR12->VAR17->VAR19, true, VAR6, &VAR9);
        if (VAR9 != NULL)
        {
            FUN10(NULL);
            break;
        }
    }
    FUN11(VAR11);
VAR15:
    FUN12(VAR2, &VAR9);
}