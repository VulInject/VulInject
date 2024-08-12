VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, const char *VAR6)
{
    VAR1 *VAR7;
    char *VAR8;
    int VAR9, VAR10;
    VAR7 = FUN2(VAR3->VAR11);
    VAR7->VAR3 = VAR3;
    VAR7->VAR5 = VAR5;
    if (VAR6)
    {
        VAR7->VAR6 = FUN3(VAR6);
    }
    else if (VAR5 && VAR5->VAR12)
    {
        VAR10 = strlen(VAR5->VAR12) + 16;
        VAR8 = FUN4(VAR10);
        snprintf(VAR8, VAR10, "", VAR5->VAR12, VAR5->VAR13);
        VAR7->VAR6 = VAR8;
    }
    else
    {
        VAR10 = strlen(VAR3->VAR6) + 16;
        VAR8 = FUN4(VAR10);
        VAR10 = snprintf(VAR8, VAR10, "", VAR3->VAR6, VAR5 ? VAR5->VAR13 : 0);
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            VAR8[VAR9] = FUN5(VAR8[VAR9]);
        VAR7->VAR6 = VAR8;
    }
    FUN6(&VAR7->VAR14);
    if (VAR5)
    {
        FUN7(&VAR5->VAR15, VAR7, VAR16);
        VAR5->VAR13++;
    }
    return VAR7;
}