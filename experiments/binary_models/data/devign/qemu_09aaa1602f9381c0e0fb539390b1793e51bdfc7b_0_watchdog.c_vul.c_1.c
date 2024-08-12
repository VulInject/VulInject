int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    if (VAR4)
    {
        fprintf(VAR5, "");
        return 1;
    }
    if (strcmp(VAR1, "") == 0)
    {
        FUN2(VAR3, &VAR6, VAR7) { fprintf(VAR5, "", VAR3->VAR8, VAR3->VAR9); }
        return 2;
    }
    FUN2(VAR3, &VAR6, VAR7)
    {
        if (FUN3(VAR3->VAR8, VAR1) == 0)
        {
            VAR4 = VAR3;
            return 0;
        }
    }
    fprintf(VAR5, "");
    FUN2(VAR3, &VAR6, VAR7) { fprintf(VAR5, "", VAR3->VAR8, VAR3->VAR9); }
    return 1;
}