void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR8 *VAR9[VAR10];
    if (VAR3 != 2)
    {
        return;
    }
    VAR5 = strlen(VAR4);
    FUN2(VAR2, VAR5);
    VAR6 = FUN3(NULL, VAR9, VAR11, VAR10);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR12 *VAR13;
        const char *VAR14 = VAR9[VAR7]->VAR14;
        if (FUN4(VAR4, VAR14, VAR5))
        {
            continue;
        }
        VAR13 = FUN5(FUN6("", NULL), VAR14);
        if (VAR13)
        {
            FUN7(VAR2, VAR14);
        }
    }
}