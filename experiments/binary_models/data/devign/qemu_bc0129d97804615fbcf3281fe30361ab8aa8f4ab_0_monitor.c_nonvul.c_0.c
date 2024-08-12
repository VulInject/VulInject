void FUN1(const char *VAR1, int VAR2, char *VAR3, int VAR4)
{
    int VAR5;
    int VAR6[VAR7];
    if (VAR2)
    {
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
        {
            VAR6[VAR5] = 0;
            if (VAR8[VAR5])
            {
                VAR6[VAR5] = VAR8[VAR5]->VAR9;
                VAR8[VAR5]->VAR9 = 0;
                FUN2(VAR8[VAR5], VAR10);
            }
        }
    }
    FUN3(VAR1, VAR2, VAR11, NULL);
    VAR12 = VAR3;
    VAR13 = VAR4;
    VAR14 = 1;
    while (VAR14)
    {
        FUN4(10);
    }
    if (VAR2)
    {
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
            if (VAR6[VAR5])
                VAR8[VAR5]->VAR9 = VAR6[VAR5];
    }
}