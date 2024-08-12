VAR1 *FUN1(int64_t VAR2, bool VAR3, int64_t VAR4, VAR5 **VAR6)
{
    VAR1 *VAR7 = NULL;
    VAR8 *VAR9;
    HANDLE VAR10;
    bool VAR11;
    DWORD VAR12;
    VAR13 *VAR14 = FUN2(VAR2, VAR6);
    if (!VAR14)
    {
        return NULL;
    }
    if (!VAR3)
    {
        VAR4 = VAR15;
    }
    else if (VAR4 < 0)
    {
        FUN3(VAR6, "" VAR16 "", VAR4);
        return NULL;
    }
    VAR10 = VAR14->VAR10;
    VAR9 = FUN4(VAR4 + 1);
    VAR11 = FUN5(VAR10, VAR9, VAR4, &VAR12, NULL);
    if (!VAR11)
    {
        FUN6(VAR6, FUN7(), "");
        FUN8("" VAR16, VAR2);
    }
    else
    {
        VAR9[VAR12] = 0;
        VAR7 = FUN4(sizeof(VAR1));
        VAR7->VAR4 = (VAR17)VAR12;
        VAR7->VAR18 = VAR12 == 0;
        if (VAR12 != 0)
        {
            VAR7->VAR19 = FUN9(VAR9, VAR12);
        }
    }
    FUN10(VAR9);
    return VAR7;
}