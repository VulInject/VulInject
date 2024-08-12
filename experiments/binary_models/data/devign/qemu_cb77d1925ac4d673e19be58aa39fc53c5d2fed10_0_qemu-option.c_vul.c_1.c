static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, bool VAR6)
{
    const char *VAR7;
    char VAR8[1024], *VAR9 = NULL;
    const char *VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13 = NULL;
    assert(!VAR5 || VAR3->VAR14);
    VAR7 = VAR5 ? VAR3->VAR14 : NULL;
    if (FUN2(VAR4, "", 3) == 0)
    {
        FUN3(VAR8, sizeof(VAR8), VAR4 + 3);
        VAR9 = VAR8;
    }
    else if ((VAR10 = strstr(VAR4, "")) != NULL)
    {
        FUN3(VAR8, sizeof(VAR8), VAR10 + 4);
        VAR9 = VAR8;
    }
    VAR11 = FUN4(VAR3, VAR9, !VAR6, &VAR13);
    if (VAR11 == NULL)
    {
        if (FUN5(&VAR13))
        {
            FUN6(VAR13);
            FUN7(VAR13);
        }
        return NULL;
    }
    if (FUN8(VAR11, VAR4, VAR7, VAR6) != 0)
    {
        FUN9(VAR11);
        return NULL;
    }
    return VAR11;