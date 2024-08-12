static int FUN1(char *VAR1, int VAR2, int VAR3)
{
    if (VAR4)
    {
        fprintf(VAR5, "");
        return 1;
    }
    VAR4 = FUN2("");
    if (!VAR4)
        return 1;
    if (FUN3(VAR4, VAR1, VAR2) == -1)
    {
        fprintf(VAR5, "", VAR6, VAR1);
        VAR4 = NULL;
        return 1;
    }
    if (VAR3)
    {
        if (!VAR4->VAR7 || !VAR4->VAR7->VAR8)
        {
            fprintf(VAR5, "", VAR6);
            return 1;
        }
        VAR4->VAR3 = 1;
    }
    return 0;
}