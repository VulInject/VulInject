VAR1 *FUN1(VAR1 *VAR2, const char *VAR3)
{
    char *VAR4 = NULL;
    char *VAR5 = NULL;
    char *VAR6 = NULL;
    int VAR7 = 0;
    VAR1 *VAR8 = NULL;
    VAR1 *VAR9 = NULL;
    if (!VAR2 || !VAR2->VAR10 || !VAR3)
    {
        return NULL;
    }
    VAR4 = FUN2(VAR11);
    VAR5 = FUN2(VAR11);
    VAR6 = FUN2(VAR11);
    VAR7 = FUN3(VAR3);
    for (VAR8 = VAR2; VAR8->VAR12; VAR8 = VAR8->VAR12)
    {
        if (VAR7 || FUN3(VAR8->VAR3))
        {
            if (strcmp(VAR3, VAR8->VAR3) == 0)
            {
                VAR9 = VAR8->VAR12;
                break;
            }
        }
        else
        {
            FUN4(VAR6, VAR11, VAR8->VAR13, VAR3);
            if (!FUN5(VAR6, VAR4))
            {
                continue;
            }
            FUN4(VAR6, VAR11, VAR8->VAR13, VAR8->VAR3);
            if (!FUN5(VAR6, VAR5))
            {
                continue;
            }
            if (strcmp(VAR5, VAR4) == 0)
            {
                VAR9 = VAR8->VAR12;
                break;
            }
        }
    }
    FUN6(VAR4);
    FUN6(VAR5);
    FUN6(VAR6);
    return VAR9;
}