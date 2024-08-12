static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = &VAR10->VAR13;
    int32_t VAR14;
    VAR7 *VAR15 = NULL;
    FUN3(VAR4, VAR5, &VAR14, &VAR15);
    if (VAR15)
    {
        goto VAR16;
    }
    FUN4(VAR14, &VAR15);
    if (VAR15)
    {
        goto VAR16;
    }
    VAR12->VAR17.VAR18 = VAR14;
VAR16:
    FUN5(VAR8, VAR15);
}