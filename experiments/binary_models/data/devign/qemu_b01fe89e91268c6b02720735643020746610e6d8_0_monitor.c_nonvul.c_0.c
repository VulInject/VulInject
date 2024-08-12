char *FUN1(const char *VAR1, bool VAR2, int64_t VAR3, VAR4 **VAR5)
{
    char *VAR6 = NULL;
    VAR7 *VAR8, VAR9;
    FUN2(&VAR9);
    VAR9.VAR10 = true;
    VAR8 = VAR11;
    VAR11 = &VAR9;
    if (VAR2)
    {
        int VAR12 = FUN3(VAR3);
        if (VAR12 < 0)
        {
            VAR11 = VAR8;
            FUN4(VAR5, VAR13, "", "");
            goto VAR14;
        }
    }
    FUN5(&VAR9, VAR1);
    VAR11 = VAR8;
    if (FUN6(VAR9.VAR15) > 0)
    {
        VAR6 = FUN7(FUN8(VAR9.VAR15));
    }
    else
    {
        VAR6 = FUN7("");
    }
VAR14:
    FUN9(&VAR9);
    return VAR6;
}