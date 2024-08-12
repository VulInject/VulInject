static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, bool VAR6)
{
    const char *VAR7;
    char VAR8[1024], *VAR9 = NULL;
    const char *VAR10;
    VAR1 *VAR11;
    assert(!VAR5 || VAR3->VAR12);
    VAR7 = VAR5 ? VAR3->VAR12 : NULL;
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
    if (VAR6)
    {
        if (!VAR9 && !FUN4(&VAR3->VAR13))
        {
            VAR11 = FUN5(VAR3, NULL);
        }
        else
        {
            VAR11 = FUN6(VAR3, VAR9, 0);
        }
    }
    else
    {
        VAR11 = FUN6(VAR3, VAR9, 1);
    }
    if (VAR11 == NULL)
        return NULL;
    if (FUN7(VAR11, VAR4, VAR7, VAR6) != 0)
    {
        FUN8(VAR11);
        return NULL;
    }
    return VAR11;
}