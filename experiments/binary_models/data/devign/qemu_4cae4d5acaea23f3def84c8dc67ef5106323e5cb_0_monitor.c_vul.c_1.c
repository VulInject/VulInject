static void FUN1(VAR1 *VAR2, const char *VAR3, size_t VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL, *VAR9;
    VAR6 = FUN2("", NULL);
    if (VAR6 == NULL)
    {
        return;
    }
    FUN3(VAR6, VAR10, &VAR8);
    for (VAR9 = VAR8; VAR9; VAR9 = FUN4(VAR9))
    {
        VAR11 *VAR12 = VAR9->VAR13;
        if (VAR12->VAR14 && !FUN5(VAR3, VAR12->VAR14, VAR4))
        {
            FUN6(VAR2, VAR12->VAR14);
        }
    }
    FUN7(VAR8);
}