VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, NULL, &VAR4);
    if (VAR4)
    {
        goto VAR4;
    }
    FUN3(FUN4(VAR6), true, "", &VAR4);
    if (VAR4)
    {
        goto VAR4;
    }
    return &VAR6->VAR7;
VAR4:
    FUN5("", FUN6(VAR4));
    FUN7(VAR4);
    if (VAR6 != NULL)
    {
        FUN8(FUN4(VAR6));
    }
    return NULL;
}