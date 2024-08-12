static int FUN1(void *VAR1, const char *VAR2, VAR3 **VAR4)
{
    char *VAR5, *VAR6, *VAR7;
    int VAR8 = 0;
    if (!(VAR6 = FUN2(VAR2)))
        return FUN3(VAR9);
    while (VAR5 = FUN4(VAR6, "", &VAR7))
    {
        VAR3 *VAR10 = FUN5(VAR5);
        if (!VAR10)
        {
            FUN6(VAR1, VAR11, ""
                                          "",
                   VAR5);
            VAR8 = VAR12;
            goto VAR13;
        }
        *VAR4 = VAR10;
        VAR4 = &VAR10->VAR14;
        VAR6 = NULL;
    }
VAR13:
    FUN7(VAR6);
    return VAR8;
}