void FUN1(bool VAR1, const char *VAR2, bool VAR3, int64_t VAR4, bool VAR5, int64_t VAR6, VAR7 **VAR8)
{
    const char *VAR9;
    int VAR10 = -1;
    VAR11 *VAR12;
    int VAR13;
    if (VAR3 && !VAR5)
    {
        FUN2(VAR8, VAR14, "");
        return;
    }
    if (!VAR3 && VAR5)
    {
        FUN2(VAR8, VAR14, "");
        return;
    }
    if (FUN3(VAR2, "", &VAR9))
    {
        VAR10 = FUN4(VAR15, VAR9, VAR8);
        if (VAR10 == -1)
        {
            return;
        }
    }
    if (FUN3(VAR2, "", &VAR9))
    {
        VAR10 = FUN5(VAR9, VAR16 | VAR17 | VAR18 | VAR19, VAR20);
        if (VAR10 < 0)
        {
            FUN6(VAR8, VAR21, VAR9);
            return;
        }
    }
    if (VAR10 == -1)
    {
        FUN2(VAR8, VAR22, "");
        return;
    }
    VAR12 = FUN7(sizeof(VAR11));
    VAR13 = FUN8(VAR12, VAR10, VAR1, VAR3, VAR4, VAR6, VAR8);
    if (VAR13 < 0)
    {
        FUN9(VAR12);
        return;
    }
    if (FUN10(VAR12) < 0 && !FUN11(VAR12->VAR8))
    {
        FUN2(VAR8, VAR23);
    }
    FUN9(VAR12);
}