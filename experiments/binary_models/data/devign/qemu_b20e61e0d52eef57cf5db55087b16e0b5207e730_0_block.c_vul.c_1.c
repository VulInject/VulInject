int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, int VAR7, bool VAR8, VAR9 **VAR10)
{
    VAR4 *VAR11;
    int VAR12;
    char *VAR13;
    const char *VAR14;
    assert(VAR2);
    assert(*VAR2 == NULL);
    VAR13 = FUN2("", VAR6);
    FUN3(VAR5, &VAR11, VAR13);
    FUN4(VAR13);
    VAR14 = FUN5(VAR5, VAR6);
    if (!VAR3 && !VAR14 && !FUN6(VAR11))
    {
        if (VAR8)
        {
            VAR12 = 0;
        }
        else
        {
            FUN7(VAR10, ""%VAR15\"", VAR6);
            VAR12 = -VAR16;
        }
        goto VAR17;
    }
    VAR12 = FUN8(VAR2, VAR3, VAR14, VAR11, VAR7, NULL, VAR10);
VAR17:
    FUN9(VAR5, VAR6);
    return VAR12;