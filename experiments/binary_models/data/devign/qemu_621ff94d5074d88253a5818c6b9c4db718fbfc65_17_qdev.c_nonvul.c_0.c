static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    int32_t VAR11;
    VAR7 *VAR12 = NULL;
    FUN3(VAR4, VAR5, &VAR11, &VAR12);
    if (VAR12)
    {
        goto VAR13;
    }
    FUN4(VAR11, &VAR12);
    if (VAR12)
    {
        goto VAR13;
    }
    VAR10->VAR14.VAR15 = VAR11;
    if (VAR10->VAR16 != -1)
    {
        FUN5(VAR10->VAR14.VAR15, &VAR10->VAR17, VAR10->VAR16 ? "" : "");
    }
VAR13:
    FUN6(VAR8, VAR12);
}