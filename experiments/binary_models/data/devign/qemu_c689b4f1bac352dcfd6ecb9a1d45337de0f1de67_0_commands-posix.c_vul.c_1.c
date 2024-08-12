VAR1 FUN1(const char *VAR2, bool VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    int64_t VAR10 = -1, VAR11;
    if (!VAR3)
    {
        VAR4 = "";
    }
    FUN2("", VAR2, VAR4);
    VAR8 = fopen(VAR2, VAR4);
    if (!VAR8)
    {
        FUN3(VAR6, VAR12, "", VAR2, VAR4);
        return -1;
    }
    VAR9 = FUN4(VAR8);
    VAR10 = FUN5(VAR9, VAR13);
    VAR10 = FUN5(VAR9, VAR14, VAR10 | VAR15);
    if (VAR10 == -1)
    {
        FUN3(VAR6, VAR12, "", VAR2);
        fclose(VAR8);
        return -1;
    }
    VAR11 = FUN6(VAR8, VAR6);
    if (FUN7(VAR6))
    {
        fclose(VAR8);
        return -1;
    }
    FUN2("", VAR11);
    return VAR11;
}