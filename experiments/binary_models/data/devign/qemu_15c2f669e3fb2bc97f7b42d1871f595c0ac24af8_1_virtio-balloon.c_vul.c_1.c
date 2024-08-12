static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR7 *VAR9 = NULL;
    VAR10 *VAR11 = VAR6;
    int VAR12;
    FUN2(VAR4, VAR5, NULL, 0, &VAR9);
    if (VAR9)
    {
        goto VAR13;
    }
    FUN3(VAR4, "", &VAR11->VAR14, &VAR9);
    if (VAR9)
    {
        goto VAR15;
    }
    FUN2(VAR4, "", NULL, 0, &VAR9);
    if (VAR9)
    {
        goto VAR15;
    }
    for (VAR12 = 0; VAR12 < VAR16; VAR12++)
    {
        FUN4(VAR4, VAR17[VAR12], &VAR11->VAR18[VAR12], &VAR9);
        if (VAR9)
        {
            break;
        }
    }
    FUN5(VAR8, VAR9);
    VAR9 = NULL;
    FUN6(VAR4, &VAR9);
VAR15:
    FUN5(VAR8, VAR9);
    VAR9 = NULL;
    FUN6(VAR4, &VAR9);
VAR13:
    FUN5(VAR8, VAR9);
}