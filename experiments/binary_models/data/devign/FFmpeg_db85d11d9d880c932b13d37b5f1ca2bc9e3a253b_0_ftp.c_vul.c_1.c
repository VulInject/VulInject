static int FUN1(VAR1 *VAR2)
{
    static const char *VAR3 = "";
    static const char *VAR4 = "";
    static const int VAR5[] = {211, 0};
    static const int VAR6[] = {200, 451};
    char *VAR7;
    if (FUN2(VAR2, VAR3, VAR5, &VAR7) == 211)
    {
        if (FUN3(VAR7, ""))
            FUN2(VAR2, VAR4, VAR6, NULL);
    }
    return 0;
}