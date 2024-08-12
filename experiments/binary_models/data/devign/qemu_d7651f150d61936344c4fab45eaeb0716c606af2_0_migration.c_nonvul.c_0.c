static bool FUN1(bool *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR2 *VAR6;
    bool VAR7;
    VAR8 *VAR9 = FUN2();
    VAR7 = VAR1[VAR10];
    for (VAR6 = VAR3; VAR6; VAR6 = VAR6->VAR11)
    {
        VAR1[VAR6->VAR12->VAR13] = VAR6->VAR12->VAR14;
    }
    if (VAR1[VAR15])
    {
        FUN3(VAR5, ""
                         "");
        FUN4(VAR5, "");
        return false;
    }
    if (VAR1[VAR10])
    {
        if (VAR1[VAR16])
        {
            FUN3(VAR5, ""
                             "");
            return false;
        }
        if (!VAR7 && FUN5(VAR17) && !FUN6(VAR9))
        {
            FUN3(VAR5, "");
            return false;
        }
    }
    return true;
}