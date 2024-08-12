static void FUN1(const char *VAR1, const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR5 = FUN2(VAR1);
    if (!VAR5)
    {
        FUN3("");
        return;
    }
    if (VAR3)
    {
        VAR7 = FUN4(VAR3);
        if (!VAR7)
        {
            FUN3("", VAR3);
            return;
        }
    }
    if (FUN5(VAR5, 0) < 0)
        return;
    FUN6(VAR5, VAR2, 0, VAR7);
    FUN7(VAR5);
}