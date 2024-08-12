static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR6;
    VAR7 *VAR11 = NULL;
    struct tm VAR12;
    VAR10->FUN2(VAR2, &VAR12, &VAR11);
    if (VAR11)
    {
        goto VAR13;
    }
    FUN3(VAR4, VAR5, NULL, 0, &VAR11);
    if (VAR11)
    {
        goto VAR13;
    }
    FUN4(VAR4, "", &VAR12.VAR14, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR4, "", &VAR12.VAR16, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR4, "", &VAR12.VAR17, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR4, "", &VAR12.VAR18, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR4, "", &VAR12.VAR19, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR4, "", &VAR12.VAR20, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
VAR15:
    FUN5(VAR8, VAR11);
    VAR11 = NULL;
    FUN6(VAR4, VAR8);
VAR13:
    FUN5(VAR8, VAR11);
}