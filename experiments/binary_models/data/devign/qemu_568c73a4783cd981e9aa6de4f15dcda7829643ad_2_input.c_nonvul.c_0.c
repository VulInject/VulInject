void FUN1(bool VAR1, int64_t VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR3 *VAR7;
    VAR8 *VAR9;
    VAR9 = NULL;
    if (VAR1)
    {
        VAR9 = FUN2(VAR2);
        if (!VAR9)
        {
            FUN3(VAR6, "" VAR10 "", VAR2);
            return;
        }
    }
    if (!FUN4() && !FUN5(VAR11))
    {
        FUN3(VAR6, "");
        return;
    }
    for (VAR7 = VAR4; VAR7 != NULL; VAR7 = VAR7->VAR12)
    {
        VAR13 *VAR14 = VAR7->VAR15;
        if (!FUN6(1 << VAR14->VAR16, VAR9))
        {
            FUN3(VAR6, ""
                             "",
                       VAR17[VAR14->VAR16]);
            return;
        }
    }
    for (VAR7 = VAR4; VAR7 != NULL; VAR7 = VAR7->VAR12)
    {
        VAR13 *VAR14 = VAR7->VAR15;
        FUN7(VAR9, VAR14);
    }
    FUN8();
}