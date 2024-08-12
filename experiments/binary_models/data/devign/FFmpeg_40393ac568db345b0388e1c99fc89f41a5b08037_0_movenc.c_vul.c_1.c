static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5, *VAR6 = NULL, *VAR7 = NULL;
    int64_t VAR8 = FUN2(VAR2);
    if (!VAR4)
    {
        VAR5 = (VAR4->VAR9 == VAR10) ? "" : "";
        if (VAR4->VAR11->VAR12 == VAR13)
        {
            VAR7 = "";
            VAR6 = "";
        }
        else if (VAR4->VAR11->VAR12 == VAR14)
        {
            VAR7 = "";
            VAR6 = "";
        }
        else if (VAR4->VAR11->VAR12 == VAR15)
        {
            if (VAR4->VAR16 == FUN3('', '', '', ''))
                VAR7 = "";
            else
                VAR7 = "";
            VAR6 = "";
        }
        else if (VAR4->VAR11->VAR17 == FUN3('', '', '', ''))
        {
            VAR7 = "";
            VAR6 = "";
        }
    }
    FUN4(VAR2, 0);
    FUN5(VAR2, "");
    FUN4(VAR2, 0);
    FUN6(VAR2, VAR5, 4);
    FUN5(VAR2, VAR7);
    FUN4(VAR2, 0);
    FUN4(VAR2, 0);
    FUN4(VAR2, 0);
    if (!VAR4 || VAR4->VAR9 == VAR10)
        FUN7(VAR2, strlen(VAR6));
    FUN6(VAR2, VAR6, strlen(VAR6));
    if (VAR4 && VAR4->VAR9 != VAR10)
        FUN7(VAR2, 0);
    return FUN8(VAR2, VAR8);