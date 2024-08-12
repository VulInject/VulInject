static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5, *VAR6, *VAR7;
    int64_t VAR8 = FUN2(VAR2);
    if (!VAR4)
    {
        VAR6 = "";
        VAR7 = "";
        VAR5 = "";
    }
    else
    {
        VAR6 = (VAR4->VAR9 == VAR10) ? "" : "";
        if (VAR4->VAR11->VAR12 == VAR13)
        {
            VAR7 = "";
            VAR5 = "";
        }
        else if (VAR4->VAR11->VAR12 == VAR14)
        {
            VAR7 = "";
            VAR5 = "";
        }
        else if (VAR4->VAR11->VAR12 == VAR15)
        {
            if (VAR4->VAR9 == VAR16)
                VAR7 = "";
            else
                VAR7 = "";
            VAR5 = "";
        }
    }
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    FUN3(VAR2, 0);
    FUN5(VAR2, VAR6, 4);
    FUN4(VAR2, VAR7);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN6(VAR2, strlen(VAR5));
    FUN5(VAR2, VAR5, strlen(VAR5));
    return FUN7(VAR2, VAR8);
}