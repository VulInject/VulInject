static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN2(VAR4, "");
    const char *VAR9 = FUN2(VAR4, "");
    const VAR10 *VAR11;
    if (!VAR7 && !VAR8 && !VAR9)
    {
        return true;
    }
    for (VAR11 = FUN3(VAR2); VAR11; VAR11 = FUN4(VAR2, VAR11))
    {
        if (FUN5(VAR11->VAR12, "", NULL))
        {
            FUN6(VAR6, ""
                             "");
            return false;
        }
    }
    if (VAR7 && VAR8)
    {
        FUN6(VAR6, "");
        return false;
    }
    else if (VAR7)
    {
        if (VAR9)
        {
            FUN6(VAR6, "");
            return false;
        }
        FUN7(VAR2, "", FUN8(""));
        FUN7(VAR2, "", FUN8(VAR7));
    }
    else if (VAR8)
    {
        FUN7(VAR2, "", FUN8(""));
        FUN7(VAR2, "", FUN8(VAR8));
        FUN7(VAR2, "", FUN8(VAR9 ?: FUN9(VAR13)));
    }
    return true;
}