static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR7 *VAR9 = NULL;
    VAR10 *VAR11 = FUN2(VAR2);
    struct tm VAR12;
    FUN3(VAR11);
    FUN4(VAR11, &VAR12);
    FUN5(VAR4, NULL, "", VAR6, 0, &VAR9);
    if (VAR9)
    {
        goto VAR13;
    }
    FUN6(VAR4, &VAR12.VAR14, "", &VAR9);
    FUN6(VAR4, &VAR12.VAR15, "", &VAR9);
    FUN6(VAR4, &VAR12.VAR16, "", &VAR9);
    FUN6(VAR4, &VAR12.VAR17, "", &VAR9);
    FUN6(VAR4, &VAR12.VAR18, "", &VAR9);
    FUN6(VAR4, &VAR12.VAR19, "", &VAR9);
    FUN7(VAR4, &VAR9);
VAR13:
    FUN8(VAR8, VAR9);
}