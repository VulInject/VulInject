static int FUN1(const char *VAR1, VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7 = NULL;
    if (VAR4)
    {
        FUN2(VAR3, VAR8, VAR4, &VAR7);
        if (VAR7)
        {
            FUN3("", VAR1);
            FUN4(VAR7);
            return -1;
        }
    }
    if (VAR5)
    {
        FUN2(VAR3, VAR9, VAR5, &VAR7);
        if (VAR7)
        {
            FUN3(""
                         "",
                         VAR1);
            FUN4(VAR7);
            return -1;
        }
    }
    return 0;
}