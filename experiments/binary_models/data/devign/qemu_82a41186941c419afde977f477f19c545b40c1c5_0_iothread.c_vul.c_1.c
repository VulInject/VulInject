static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR7 *VAR11 = NULL;
    int64_t VAR12;
    FUN3(VAR4, VAR5, &VAR12, &VAR11);
    if (VAR11)
    {
        goto VAR13;
    }
    if (VAR12 < 0)
    {
        FUN4(&VAR11, ""
                               "" VAR14 "",
                   VAR15);
        goto VAR13;
    }
    VAR10->VAR16 = VAR12;
    if (VAR10->VAR17)
    {
        FUN5(VAR10->VAR17, VAR12, &VAR11);
    }
VAR13:
    FUN6(VAR8, VAR11);
}