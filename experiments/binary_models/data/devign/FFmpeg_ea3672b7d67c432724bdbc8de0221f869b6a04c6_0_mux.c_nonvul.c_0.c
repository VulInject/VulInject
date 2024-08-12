int FUN1(VAR1 **VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6)
{
    VAR1 *VAR7 = FUN2();
    int VAR8 = 0;
    *VAR2 = NULL;
    if (!VAR7)
        goto VAR9;
    if (!VAR4)
    {
        if (VAR5)
        {
            VAR4 = FUN3(VAR5, NULL, NULL);
            if (!VAR4)
            {
                FUN4(VAR7, VAR10, "", VAR5);
                VAR8 = FUN5(VAR11);
                goto VAR12;
            }
        }
        else
        {
            VAR4 = FUN3(NULL, VAR6, NULL);
            if (!VAR4)
            {
                VAR8 = FUN5(VAR11);
                FUN4(VAR7, VAR10, "", VAR6);
                goto VAR12;
            }
        }
    }
    VAR7->VAR4 = VAR4;
    if (VAR7->VAR4->VAR13 > 0)
    {
        VAR7->VAR14 = FUN6(VAR7->VAR4->VAR13);
        if (!VAR7->VAR14)
            goto VAR9;
        if (VAR7->VAR4->VAR15)
        {
            *(const VAR16 **)VAR7->VAR14 = VAR7->VAR4->VAR15;
            FUN7(VAR7->VAR14);
        }
    }
    else
        VAR7->VAR14 = NULL;
    if (VAR6)
    {
        FUN8(VAR7->VAR6, VAR6, sizeof(VAR7->VAR6));
        if (!(VAR7->VAR17 = FUN9(VAR6)))
            goto VAR9;
    }
    *VAR2 = VAR7;
    return 0;
VAR9:
    FUN4(VAR7, VAR10, "");
    VAR8 = FUN5(VAR18);
VAR12:
    FUN10(VAR7);
    return VAR8;
}