static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 *VAR7)
{
    VAR6 *VAR8 = NULL;
    int VAR9;
    const char *VAR10 = FUN2(VAR5);
    if (!FUN3(VAR10, "", NULL) && !FUN3(VAR10, "", NULL))
        return VAR11;
    if (!FUN4(VAR10, VAR5, strlen(VAR10)) && VAR5[strlen(VAR10)] == '')
        ;
    else if (strcmp(VAR10, "") || !strcmp(VAR5, ""))
        return VAR11;
    FUN5(&VAR8, VAR2->VAR12, 0);
    FUN5(&VAR8, VAR7, 0);
    VAR9 = FUN6(VAR4, VAR5, VAR13, VAR2->VAR14, &VAR8);
    if (VAR9 >= 0)
    {
        VAR3 *VAR15 = *VAR4;
        FUN7(&VAR2->VAR16, "", VAR15->VAR17);
        FUN8(&VAR7, "", VAR2->VAR16, 0);
    }
    FUN9(&VAR8);
    return VAR9;
}