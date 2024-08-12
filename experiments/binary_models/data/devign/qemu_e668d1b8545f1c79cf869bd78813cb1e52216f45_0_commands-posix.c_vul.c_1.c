static void FUN1(char const *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    char *VAR8;
    struct dirent VAR9, *VAR10;
    VAR8 = FUN2("", VAR1);
    VAR7 = FUN3(VAR8);
    if (!VAR7)
    {
        FUN4(VAR5, VAR11, ""%VAR12\"", VAR8);
        FUN5(VAR8);
        return;
    }
    FUN5(VAR8);
    for (;;)
    {
        if (FUN6(VAR7, &VAR9, &VAR10) != 0)
        {
            FUN4(VAR5, VAR11, ""%VAR12\"", VAR8);
            break;
        }
        if (!VAR10)
        {
            break;
        }
        if (VAR9.VAR13 == VAR14)
        {
            FUN7("", VAR9.VAR15);
            VAR8 = FUN2("", VAR1, VAR9.VAR15);
            FUN8(VAR8, VAR3, VAR5);
            FUN5(VAR8);
            if (*VAR5)
            {
                break;
            }
        }
    }
    FUN9(VAR7);
}