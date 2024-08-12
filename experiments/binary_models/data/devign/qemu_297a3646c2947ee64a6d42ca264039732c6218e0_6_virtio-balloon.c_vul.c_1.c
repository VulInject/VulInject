static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR7 *VAR9 = NULL;
    VAR10 *VAR11 = VAR5;
    int VAR12;
    if (!VAR11->VAR13)
    {
        FUN2(VAR8, "");
        return;
    }
    FUN3(VAR4, NULL, "", VAR6, 0, &VAR9);
    if (VAR9)
    {
        goto VAR14;
    }
    FUN4(VAR4, &VAR11->VAR13, "", &VAR9);
    FUN3(VAR4, NULL, NULL, "", 0, &VAR9);
    if (VAR9)
    {
        goto VAR15;
    }
    for (VAR12 = 0; VAR12 < VAR16; VAR12++)
    {
        FUN5(VAR4, (VAR17 *)&VAR11->VAR18[VAR12], VAR19[VAR12], &VAR9);
    }
    FUN6(VAR4, &VAR9);
VAR15:
    FUN6(VAR4, &VAR9);
VAR14:
    FUN7(VAR8, VAR9);
}