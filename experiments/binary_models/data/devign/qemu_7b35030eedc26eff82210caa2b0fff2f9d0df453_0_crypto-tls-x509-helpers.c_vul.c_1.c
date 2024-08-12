void FUN1(const char *VAR1, VAR2 *VAR3, size_t VAR4)
{
    size_t VAR5;
    size_t VAR6 = 1024, VAR7 = 0;
    char *VAR8 = FUN2(char, VAR6);
    int VAR9;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        size_t VAR10 = VAR6 - VAR7;
    VAR11:
        VAR9 = FUN3(VAR3[VAR5], VAR12, VAR8 + VAR7, &VAR10);
        if (VAR9 < 0)
        {
            if (VAR9 == VAR13)
            {
                VAR8 = FUN4(char, VAR8, VAR7 + VAR10);
                VAR6 = VAR7 + VAR10;
                goto VAR11;
            }
            FUN5("", FUN6(VAR9), VAR9);
            FUN7();
        }
        VAR7 += VAR10;
    }
    if (!FUN8(VAR1, VAR8, VAR7, NULL))
    {
        FUN7();
    }