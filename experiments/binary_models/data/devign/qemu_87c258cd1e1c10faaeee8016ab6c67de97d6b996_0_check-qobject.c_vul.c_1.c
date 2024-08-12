static void FUN1(bool VAR1, int VAR2, ...)
{
    va_list VAR3, VAR4;
    VAR5 **VAR6;
    int VAR7 = 0;
    int VAR8, VAR9;
    FUN2(VAR3, VAR2);
    FUN3(VAR4, VAR3);
    while (FUN4(VAR3, VAR5 *) != &VAR10)
    {
        VAR7++;
    }
    FUN5(VAR3);
    VAR6 = FUN6(VAR5 *, VAR7);
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        VAR6[VAR8] = FUN4(VAR4, VAR5 *);
    }
    FUN5(VAR4);
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        FUN7(FUN8(VAR6[VAR8], VAR6[VAR8]) == true);
        for (VAR9 = VAR8 + 1; VAR9 < VAR7; VAR9++)
        {
            FUN7(FUN8(VAR6[VAR8], VAR6[VAR9]) == VAR1);
        }
    }