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
    if (VAR3)
    {
        VAR2 |= VAR6;
    }
    if (FUN3(VAR4, VAR1, VAR2) < 0)
    {
        fprintf(VAR5, "", VAR7, VAR1);
        VAR4 = NULL;
        return 1;
    }
    if (VAR3)
    {
        VAR4->VAR3 = 1;
    }
    return 0;
}