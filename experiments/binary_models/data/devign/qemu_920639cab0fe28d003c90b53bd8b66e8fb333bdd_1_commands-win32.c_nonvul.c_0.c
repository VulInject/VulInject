VAR1 *FUN1(int64_t VAR2, const char *VAR3, bool VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10;
    gsize VAR11;
    bool VAR12;
    DWORD VAR13;
    VAR14 *VAR15 = FUN2(VAR2, VAR7);
    HANDLE VAR16;
    if (!VAR15)
    {
        return NULL;
    }
    VAR16 = VAR15->VAR16;
    VAR10 = FUN3(VAR3, -1, &VAR11, VAR7);
    if (!VAR10)
    {
        return NULL;
    }
    if (!VAR4)
    {
        VAR5 = VAR11;
    }
    else if (VAR5 < 0 || VAR5 > VAR11)
    {
        FUN4(VAR7, "" VAR17 "", VAR5);
        goto VAR18;
    }
    VAR12 = FUN5(VAR16, VAR10, VAR5, &VAR13, NULL);
    if (!VAR12)
    {
        FUN6(VAR7, FUN7(), "");
        FUN8("" VAR17, VAR2);
    }
    else
    {
        VAR8 = FUN9(VAR1, 1);
        VAR8->VAR5 = (VAR19)VAR13;
    }
VAR18:
    FUN10(VAR10);
    return VAR8;
}