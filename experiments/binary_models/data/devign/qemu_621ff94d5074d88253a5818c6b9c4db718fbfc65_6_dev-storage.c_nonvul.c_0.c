static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = FUN3(VAR10);
    int32_t VAR13;
    VAR7 *VAR14 = NULL;
    FUN4(VAR4, VAR5, &VAR13, &VAR14);
    if (VAR14)
    {
        goto VAR15;
    }
    FUN5(VAR13, &VAR14);
    if (VAR14)
    {
        goto VAR15;
    }
    VAR12->VAR16.VAR17 = VAR13;
    if (VAR12->VAR18)
    {
        FUN6(FUN7(VAR12->VAR18), VAR13, "", &VAR19);
    }
VAR15:
    FUN8(VAR8, VAR14);
}