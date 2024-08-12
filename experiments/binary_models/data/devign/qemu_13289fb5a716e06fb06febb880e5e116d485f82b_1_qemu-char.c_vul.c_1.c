char *FUN1(const char *VAR1, int64_t VAR2, bool VAR3, enum DataFormat VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    size_t VAR11;
    char *VAR12;
    VAR8 = FUN2(VAR1);
    if (!VAR8)
    {
        FUN3(VAR6, "", VAR1);
        return NULL;
    }
    if (FUN4(VAR8, ""))
    {
        FUN3(VAR6, "", VAR1);
        return NULL;
    }
    if (VAR2 <= 0)
    {
        FUN3(VAR6, "");
        return NULL;
    }
    VAR11 = FUN5(VAR8);
    if (VAR11 == 0)
    {
        return FUN6("");
    }
    VAR2 = VAR2 > VAR11 ? VAR11 : VAR2;
    VAR10 = FUN7(VAR2 + 1);
    FUN8(VAR8, VAR10, VAR2);
    if (VAR3 && (VAR4 == VAR13))
    {
        VAR12 = FUN9(VAR10, VAR2);
    }
    else
    {
        VAR12 = (char *)VAR10;
    }
    return VAR12;