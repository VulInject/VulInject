static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    const VAR7 *VAR8, *VAR9;
    const char *VAR10;
    bool delete;
    VAR8 = FUN2(VAR2);
    while (VAR8 != NULL)
    {
        VAR9 = FUN3(VAR2, VAR8);
        VAR6 = FUN4(VAR8);
        VAR10 = NULL;
        delete = false;
        if (VAR4)
        {
            FUN5(VAR6);
            VAR10 = FUN6("", VAR4, VAR8->VAR11);
            FUN7(VAR3, VAR10, VAR6);
            delete = true;
        }
        if (FUN8(VAR6) == VAR12)
        {
            FUN1(FUN9(VAR6), VAR3, VAR10 ? VAR10 : VAR8->VAR11);
            delete = true;
        }
        if (delete)
        {
            FUN10(VAR2, VAR8->VAR11);
            VAR8 = FUN2(VAR2);
            continue;
        }
        VAR8 = VAR9;
    }
}