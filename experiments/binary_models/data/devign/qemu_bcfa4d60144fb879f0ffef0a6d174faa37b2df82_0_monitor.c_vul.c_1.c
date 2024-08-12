void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    size_t VAR5;
    VAR5 = strlen(VAR4);
    FUN2(VAR2, VAR5);
    if (VAR3 == 2)
    {
        VAR6 *VAR7[VAR8];
        int VAR9, VAR10;
        VAR9 = FUN3(NULL, VAR7, VAR11, VAR8);
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
        {
            const char *VAR12 = VAR7[VAR10]->VAR12;
            if (!FUN4(VAR4, VAR12, VAR5))
            {
                FUN5(VAR2, VAR12);
            }
        }
    }
    else if (VAR3 == 3)
    {
        FUN6(VAR2, VAR4, "");
        FUN6(VAR2, VAR4, "");
    }
}