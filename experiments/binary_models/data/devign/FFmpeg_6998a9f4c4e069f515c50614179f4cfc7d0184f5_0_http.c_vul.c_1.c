static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    int VAR5 = 4 + strlen(VAR4) + strlen(VAR3);
    int VAR6 = !VAR2->VAR7;
    int VAR8;
    if (VAR2->VAR7)
        VAR5 += strlen(VAR2->VAR7);
    if ((VAR8 = FUN2(&VAR2->VAR7, VAR5)) < 0)
        return VAR8;
    FUN3(VAR2->VAR7, VAR5, "", VAR3, VAR4);
    return 0;