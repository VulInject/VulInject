VAR1 FUN1(const char *VAR2, bool VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR5 *VAR9 = NULL;
    int VAR10;
    int64_t VAR11 = -1, VAR12;
    if (!VAR3)
    {
        VAR4 = "";
    }
    FUN2("", VAR2, VAR4);
    VAR8 = FUN3(VAR2, VAR4, &VAR9);
    if (VAR9 != NULL)
    {
        FUN4(VAR6, VAR9);
        return -1;
    }
    VAR10 = FUN5(VAR8);
    VAR11 = FUN6(VAR10, VAR13);
    VAR11 = FUN6(VAR10, VAR14, VAR11 | VAR15);
    if (VAR11 == -1)
    {
        FUN7(VAR6, VAR16, "", VAR2);
        fclose(VAR8);
        return -1;
    }
    VAR12 = FUN8(VAR8, VAR6);
    if (FUN9(VAR6))
    {
        fclose(VAR8);
        return -1;
    }
    FUN2("" VAR17, VAR12);
    return VAR12;
}