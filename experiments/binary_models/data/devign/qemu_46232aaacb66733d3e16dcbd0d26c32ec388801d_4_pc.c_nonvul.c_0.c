static VAR1 *FUN1(const char *VAR2, int64_t VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6 = NULL;
    VAR4 *VAR7 = NULL;
    VAR6 = FUN2(VAR2, &VAR7);
    if (VAR7 != NULL)
    {
        goto VAR8;
    }
    FUN3(FUN4(VAR6), VAR3, "", &VAR7);
    FUN5(FUN4(VAR6), true, "", &VAR7);
VAR8:
    if (VAR7)
    {
        FUN6(VAR5, VAR7);
        FUN7(FUN4(VAR6));
        VAR6 = NULL;
    }
    return VAR6;
}