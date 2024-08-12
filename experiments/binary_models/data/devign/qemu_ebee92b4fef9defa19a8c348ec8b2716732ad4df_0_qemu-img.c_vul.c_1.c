static int FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7 = NULL;
    VAR4 = FUN2(VAR2);
    if (!VAR4)
    {
        FUN3("", VAR2);
        return 1;
    }
    VAR7 = FUN4(VAR7, VAR4->VAR7);
    if (VAR1)
    {
        VAR5 = FUN5(VAR1, true);
        if (!VAR5)
        {
            FUN3("", VAR1);
            return 1;
        }
        VAR7 = FUN4(VAR7, VAR5->VAR7);
    }
    FUN6(VAR7);
    return 0;