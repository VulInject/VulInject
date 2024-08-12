VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5)
{
    const char *VAR6;
    char VAR7[1024], *VAR8 = NULL;
    const char *VAR9;
    VAR1 *VAR10;
    assert(!VAR5 || VAR3->VAR11);
    VAR6 = VAR5 ? VAR3->VAR11 : NULL;
    if (FUN2(VAR4, "", 3) == 0)
    {
        FUN3(VAR7, sizeof(VAR7), VAR4 + 3);
        VAR8 = FUN4(VAR7);
    }
    else if ((VAR9 = strstr(VAR4, "")) != NULL)
    {
        FUN3(VAR7, sizeof(VAR7), VAR9 + 4);
        VAR8 = FUN4(VAR7);
    }
    VAR10 = FUN5(VAR3, VAR8, 1);
    if (VAR10 == NULL)
        return NULL;
    if (FUN6(VAR10, VAR4, VAR6) != 0)
    {
        FUN7(VAR10);
        return NULL;
    }
    return VAR10;
}