void FUN1(HANDLE VAR1, VAR2 *VAR3, void *VAR4)
{
    int VAR5, VAR6;
    VAR7 *VAR8 = &VAR9;
    VAR6 = 0;
    for (VAR5 = 0; VAR5 < VAR8->VAR10; VAR5++)
    {
        if (VAR8->VAR11[VAR5] == VAR1)
        {
            VAR6 = 1;
        }
        if (VAR6)
        {
            VAR8->VAR11[VAR5] = VAR8->VAR11[VAR5 + 1];
            VAR8->VAR3[VAR5] = VAR8->VAR3[VAR5 + 1];
            VAR8->VAR4[VAR5] = VAR8->VAR4[VAR5 + 1];
        }
    }
    if (VAR6)
    {
        VAR8->VAR10--;
    }
}