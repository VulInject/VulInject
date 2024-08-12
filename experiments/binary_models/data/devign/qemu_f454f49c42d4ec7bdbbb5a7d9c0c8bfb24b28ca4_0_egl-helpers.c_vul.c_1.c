int FUN1(void)
{
    VAR1 *VAR2;
    struct VAR3 *VAR4;
    int VAR5, VAR6;
    char *VAR7;
    VAR2 = FUN2("");
    if (!VAR2)
    {
        return -1;
    }
    VAR6 = -1;
    while ((VAR4 = FUN3(VAR2)))
    {
        if (VAR4->VAR8 != VAR9)
        {
            continue;
        }
        if (FUN4(VAR4->VAR10, "", 7))
        {
            continue;
        }
        VAR5 = asprintf(&VAR7, "", VAR4->VAR10);
        if (VAR5 < 0)
        {
            return -1;
        }
        VAR5 = open(VAR7, VAR11 | VAR12 | VAR13 | VAR14);
        if (VAR5 < 0)
        {
            free(VAR7);
            continue;
        }
        VAR6 = VAR5;
        free(VAR7);
        break;
    }
    FUN5(VAR2);
    if (VAR6 < 0)
    {
        return -1;
    }
    return VAR6;
}